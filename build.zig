const std = @import("std");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    // Create a run step for tree-sitter generate
    const tree_sitter_generate = b.addSystemCommand(&.{
        "tree-sitter",
        "generate",
    });
    tree_sitter_generate.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });

    // Create a run step for tree-sitter build
    const tree_sitter_build = b.addSystemCommand(&.{
        "tree-sitter",
        "build",
    });
    tree_sitter_build.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });
    tree_sitter_build.step.dependOn(&tree_sitter_generate.step);

    // Create a run step to rename the .so file
    const rename_so = b.addSystemCommand(&.{
        "mv",
        "sifu.so",
        "libsifu.so",
    });
    rename_so.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });
    rename_so.step.dependOn(&tree_sitter_build.step);

    // Create an install step to copy the library to the output directory
    const install_lib = b.addInstallFile(
        .{ .cwd_relative = "tree-sitter-sifu/libsifu.so" },
        "lib/libsifu.so",
    );
    install_lib.step.dependOn(&rename_so.step);

    // Create a generate step that can be run manually
    const generate_step = b.step("generate", "Generate and build tree-sitter parser");
    generate_step.dependOn(&install_lib.step);

    // Check if the library exists, if not, build it automatically
    // This helps when this package is used as a dependency
    const lib_exists = blk: {
        const lib_path = "tree-sitter-sifu/libsifu.so";
        std.fs.cwd().access(lib_path, .{}) catch break :blk false;
        break :blk true;
    };

    if (!lib_exists) {
        // Auto-generate on first build when used as dependency
        b.getInstallStep().dependOn(&install_lib.step);
    }

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
    module.addImport("tree_sitter", tree_sitter.module("tree_sitter"));

    // Create an executable that uses this module
    module.addImport("tree_sitter", tree_sitter.module("tree_sitter"));

    // Create an executable that uses this module
    const exe = b.addExecutable(.{
        .name = "tree_sitter_sifu",
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
    // Add tree-sitter import to executable as well
    exe.root_module.addImport("tree_sitter", tree_sitter.module("tree_sitter"));

    // Link the executable against the generated library
    exe.addLibraryPath(.{ .cwd_relative = "tree-sitter-sifu" });
    exe.linkSystemLibrary("sifu");
    exe.linkLibC();

    // Link the executable against the generated library
    exe.addLibraryPath(.{ .cwd_relative = "tree-sitter-sifu" });
    exe.linkSystemLibrary("sifu");
    exe.linkLibC();

    // Install the executable
    // Install the executable
    b.installArtifact(exe);

    // Create run step
    // Create run step
    const run_step = b.step("run", "Run the app");
    const run_cmd = b.addRunArtifact(exe);
    run_step.dependOn(&run_cmd.step);
    run_cmd.step.dependOn(b.getInstallStep());

    if (b.args) |args| {
        run_cmd.addArgs(args);
    }

    // Create test steps
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

    // Optional: Add a clean step to remove generated files
    const clean_step = b.step("clean", "Clean generated tree-sitter files");
    const clean_cmd = b.addSystemCommand(&.{
        "rm",
        "-f",
        "sifu.so",
        "libsifu.so",
    });
    clean_cmd.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });
    clean_step.dependOn(&clean_cmd.step);
    // Optional: Add a clean step to remove generated files
    const clean_step = b.step("clean", "Clean generated tree-sitter files");
    const clean_cmd = b.addSystemCommand(&.{
        "rm",
        "-f",
        "sifu.so",
        "libsifu.so",
    });
    clean_cmd.setCwd(.{ .cwd_relative = "tree-sitter-sifu" });
    clean_step.dependOn(&clean_cmd.step);
}
