const std = @import("std");
const io = std.io;
const fs = std.fs;
const print = std.debug.print;
const root = @import("root.zig");
const panic = std.debug.panic;
const allocator = std.heap.page_allocator;

pub fn main() !void {
    var stdin_buffer: [1024]u8 = undefined;
    var stdin_reader = fs.File.stdin().reader(&stdin_buffer);
    var stdout_buffer: [1024]u8 = undefined;
    var stdout_writer = fs.File.stdout().writer(&stdout_buffer);
    const stdin = &stdin_reader.interface;
    const stdout = &stdout_writer.interface;

    // Parse some source code and get the root node
    const parser = try root.createParser();
    defer parser.destroy();

    var buffer = std.Io.Writer.Allocating.init(allocator);

    while (true) : (buffer.clearRetainingCapacity()) {
        _ = stdin.streamDelimiter(&buffer.writer, '\n') catch |err| switch (err) {
            error.EndOfStream => return,
            else => return err,
        };
        try buffer.writer.writeByte(try stdin.takeByte()); // consume the newline
        const ast_ptr = parser.parseStringEncoding(
            buffer.written(),
            null,
            root.ts.Input.Encoding.utf8,
        ) orelse return;
        defer ast_ptr.destroy();

        const s_exp = try ast_ptr.rootNode().toSexp(allocator);
        defer allocator.free(s_exp);
        print("{s}\n", .{s_exp[1 .. s_exp.len - 1]});
        try stdout.flush();
    }
}
