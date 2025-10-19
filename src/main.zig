const std = @import("std");
const io = std.io;
const print = std.debug.print;
const root = @import("root.zig");

pub fn main() void {}

test "parse zig as sifu" {
    var err_buffer: [1024]u8 = undefined;
    var stderr_writer = std.fs.File.stderr().writer(&err_buffer);
    const err = &stderr_writer.interface;

    // Parse some source code and get the root node
    const parser = try root.createParser();
    defer parser.destroy();
    const tree = parser.parseString("pub fn main() !void {}", null);
    defer tree.?.destroy();

    const node = tree.?.rootNode();
    try node.format(err);
    try err.printAsciiChar('\n', .{});
    try err.print("Kind: `{s}`\n", .{node.kind()});
    try err.flush();

    std.debug.assert(std.mem.eql(u8, node.kind(), "source_file"));
    // std.debug.assert(node.endPoint().cmp(.{ .row = 0, .column = 22 }) == .eq);

    // // Create a query and execute it
    // var error_offset: u32 = 0;
    // const query = try ts.Query.create(language, "name: (identifier) @name", &error_offset);
    // defer query.destroy();

    // const cursor = ts.QueryCursor.create();
    // defer cursor.destroy();
    // cursor.exec(query, node);

    // // Get the captured node of the first match
    // const match = cursor.nextMatch().?;
    // const capture = match.captures[0].node;
    // print("Captured node: {s}\n", .{capture.kind()});
    // std.debug.assert(std.mem.eql(u8, capture.kind(), "identifier"));
}
