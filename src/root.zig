const std = @import("std");
const Allocator = std.mem.Allocator;
const io = std.io;
const Reader = io.Reader;
const Writer = io.Writer;
pub const ts = @import("tree_sitter");
pub const Tree = ts.Tree;
pub const Node = ts.Node;
pub const Parser = ts.Parser;
pub const TreeCursor = ts.TreeCursor;

extern fn tree_sitter_sifu() callconv(.c) *ts.Language;

/// Create a parser for the sifu language
/// Caller owns, cleanup with: `defer parser.destroy();`
pub fn createParser() !*Parser {
    const language = tree_sitter_sifu();
    defer language.destroy();

    const parser = Parser.create();
    try parser.setLanguage(language);

    return parser;
}

pub fn parseFile(
    allocator: Allocator,
    path: []const u8,
    old_tree: ?*const Tree,
) !?*Tree {
    const language = tree_sitter_sifu();
    defer language.destroy();

    const parser = Parser.create();
    try parser.setLanguage(language);

    const source = try std.fs.cwd().readFileAlloc(allocator, path);
    defer allocator.free(source);

    return parser.parseStringEncoding(source, old_tree, ts.Input.Encoding.utf8);
}

pub fn parseAll(
    allocator: Allocator,
    buffer: *std.ArrayList(u8),
    reader: *Reader,
    old_tree: ?*const Tree,
) !?*Tree {
    const language = tree_sitter_sifu();
    defer language.destroy();

    const parser = Parser.create();
    try parser.setLanguage(language);

    buffer.shrinkRetainingCapacity(0);
    try reader.appendRemainingUnlimited(allocator, buffer);

    return parser.parseStringEncoding(buffer.items, old_tree, ts.Input.Encoding.utf8);
}

pub fn parseLine(
    buffer: *Writer.Allocating,
    reader: *Reader,
) !?*Tree {
    const language = tree_sitter_sifu();
    defer language.destroy();

    const parser = Parser.create();
    try parser.setLanguage(language);

    _ = try reader.streamDelimiter(&buffer.writer, '\n');
    _ = try reader.takeByte(); // consume the newline

    return parser.parseStringEncoding(buffer.written(), null, ts.Input.Encoding.utf8);
}
