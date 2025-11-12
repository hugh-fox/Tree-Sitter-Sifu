const std = @import("std");
const CSourceFile = std.Build.Module.CSourceFile;

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // Create a run step for tree-sitter generate
    const tree_sitter_generate = b.addSystemCommand(&.{
        "tree-sitter",
        "generate",
    });
    tree_sitter_generate.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });

    // Generate c source code
    const generate_step = b.step("generate", "Generate and build tree-sitter parser");
    generate_step.dependOn(&tree_sitter_generate.step);

    // Make the default the generate step
    b.getInstallStep().dependOn(generate_step);

    // Add the tree-sitter dependency
    const tree_sitter = b.dependency("tree_sitter", .{
        .target = target,
        .optimize = optimize,
    });

    // This creates a module for the tree-sitter parser
    const module = b.addModule("tree_sitter_sifu", .{
        .root_source_file = b.path("src/root.zig"),
        .target = target,
    });

    // Add the generated parser file
    module.addCSourceFile(.{
        .file = b.path("tree-sitter-sifu/src/parser.c"),
        .flags = &.{
            "-std=c99",
        },
    });
    module.addIncludePath(b.path("tree-sitter-sifu/src"));
    module.link_libc = true;
    module.addImport("tree_sitter", tree_sitter.module("tree_sitter"));

    const exe = b.addExecutable(.{
        .name = "exe",
        .root_module = b.createModule(.{
            .root_source_file = b.path("src/main.zig"),
            .target = target,
            .optimize = optimize,
            .imports = &.{
                .{ .name = "tree_sitter_sifu", .module = module },
            },
        }),
    });

    // Add tree-sitter import to executable as well
    exe.root_module.addImport("tree_sitter", tree_sitter.module("tree_sitter"));

    // Install the executable
    b.installArtifact(exe);

    // Create run step
    const run_step = b.step("run", "Run the app");
    const run_cmd = b.addRunArtifact(exe);
    run_step.dependOn(&run_cmd.step);
    run_cmd.step.dependOn(b.getInstallStep());

    if (b.args) |args| {
        run_cmd.addArgs(args);
    }

    // Create test steps
    const mod_tests = b.addTest(.{
        .root_module = module,
    });
    const run_mod_tests = b.addRunArtifact(mod_tests);

    const exe_tests = b.addTest(.{
        .root_module = exe.root_module,
    });
    const run_exe_tests = b.addRunArtifact(exe_tests);

    const test_step = b.step("test", "Run tests");
    test_step.dependOn(&run_mod_tests.step);
    test_step.dependOn(&run_exe_tests.step);
}
