const std = @import("std");
const Allocator = std.Allocator;
const io = std.io;
const Reader = io.Reader;
const ts = @import("tree_sitter");
pub const Tree = ts.Tree;
pub const Node = ts.Node;
pub const Parser = ts.Parser;
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
) !*Tree {
    const language = tree_sitter_sifu();
    defer language.destroy();

    const parser = Parser.create();
    try parser.setLanguage(language);

    const source = try std.fs.cwd().readFileAlloc(allocator, path);
    defer allocator.free(source);

    return parser.parseStringEncoding(source, old_tree, ts.UnicodeEncoding.Utf8);
}
