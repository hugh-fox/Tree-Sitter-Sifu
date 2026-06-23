/**
 * @file The Sifu Programming Language Parser
 * @author Hugh Fox <hugh.s.fox@gmail.com>
 * @license Apache 2.0
 *
 * Parses an AST that is converted to a single Pattern. The conversion
 * algorithm assumes that all anonymous nodes have exactly one child.
 *
 * Field names are used verbatim during ast conversion, so make sure to
 * update them if changed in ast.zig.
 *
 * The structure mirrors the recursive-descent reference parser in Sifu's
 * `src/Parser.zig`. The two must agree node-for-node, since the `Parsable`
 * tests compare their outputs. Notable points of agreement:
 *
 *   - Separators are RIGHT associative (`a ; b ; c` nests as `a ; (b ; c)`),
 *     except `infix`, which is LEFT associative. This matches the reference
 *     parser's recursion.
 *   - Newlines carry semantic meaning and are NOT extras. A flush newline run
 *     (ending on a newline) is a `newline` separator at the semicolon level; a
 *     run that ends in indentation is an `indent` separator at the comma level.
 *     The whole whitespace run is the token text so the printer reproduces the
 *     exact layout.
 *   - Comments are ordinary terms (kept in the tree), not extras.
 *   - Double- and single-quoted strings are distinct tokens. The AST
 *     conversion decomposes each into its individual characters.
 *
 * Operator precedence (lowest to highest):
 *   1. semicolon  ; / newline
 *   2. long_match ::  /  long_arrow -->
 *   3. comma      ,  / indent
 *   4. infix      <symbol>
 *   5. match      :   /  arrow      ->
 *   6. terms      (juxtaposition)
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
// @ts-nocheck
module.exports = grammar({
    name: "sifu",

    // Newlines are NOT in extras - they have semantic meaning. Comments are
    // ordinary terms, also not extras, so they round-trip like the reference
    // parser keeps them.
    extras: ($) => [/[ \t\r]/],

    rules: {
        pattern: ($) => optional($._prec1),

        // Prec 1: semicolon or newline (both separate entries, but are distinct)
        _prec1: ($) => choice($.semicolon, $.newline_sep, $._prec2),

        // Semicolon separator - distinct from newline for pretty-print isomorphism
        semicolon: ($) =>
            prec.right(
                1,
                seq(
                    field("lhs", optional($._prec2)),
                    ";",
                    field("rhs", optional($._prec1)),
                ),
            ),

        // Flush newline separator - distinct from semicolon. Carries its literal
        // whitespace via the named `newline` child.
        newline_sep: ($) =>
            prec.right(
                1,
                seq(
                    field("lhs", optional($._prec2)),
                    $.newline,
                    field("rhs", optional($._prec1)),
                ),
            ),

        // Prec 2: long_match, long_arrow
        _prec2: ($) => choice($.long_match, $.long_arrow, $._prec3),

        long_match: ($) =>
            prec.right(
                2,
                seq(
                    field("lhs", optional($._prec3)),
                    "::",
                    field("rhs", optional($._prec2)),
                ),
            ),

        long_arrow: ($) =>
            prec.right(
                2,
                seq(
                    field("lhs", optional($._prec3)),
                    "-->",
                    field("rhs", optional($._prec2)),
                ),
            ),

        // Prec 3: comma, indent
        _prec3: ($) => choice($.comma, $.indent_group, $._prec4),

        comma: ($) =>
            prec.right(
                3,
                seq(
                    field("lhs", optional($._prec4)),
                    ",",
                    field("rhs", optional($._prec3)),
                ),
            ),

        // Indentation-grouped separator - like comma but carries the literal
        // newline + indentation whitespace via the named `indent` child.
        indent_group: ($) =>
            prec.right(
                3,
                seq(
                    field("lhs", optional($._prec4)),
                    $.indent,
                    field("rhs", optional($._prec3)),
                ),
            ),

        // Prec 4: infix (user-defined symbol), left associative
        _prec4: ($) => choice($.infix, $._prec5),

        infix: ($) =>
            prec.left(
                4,
                seq(
                    field("lhs", optional($._prec5)),
                    field("op", $.symbol),
                    field("rhs", optional($._prec4)),
                ),
            ),

        // Prec 5: match, arrow
        _prec5: ($) => choice($.match, $.arrow, $._prec6),

        match: ($) =>
            prec.right(
                5,
                seq(
                    field("lhs", optional($._prec6)),
                    ":",
                    field("rhs", optional($._prec5)),
                ),
            ),

        arrow: ($) =>
            prec.right(
                5,
                seq(
                    field("lhs", optional($._prec6)),
                    "->",
                    field("rhs", optional($._prec5)),
                ),
            ),

        // Prec 6: juxtaposition (terms)
        _prec6: ($) => $.terms,

        terms: ($) => prec.left(6, repeat1($._term)),

        _term: ($) =>
            choice(
                $.key,
                $.constant,
                $.variable,
                $.var_pattern,
                $.number,
                $.string,
                $.single_string,
                $.nested_pattern,
                $.nested_trie,
                $.quote,
                $.comment,
            ),

        nested_pattern: ($) =>
            seq("(", field("inner", optional($._prec1)), ")"),

        nested_trie: ($) => seq("{", field("inner", optional($._prec1)), "}"),

        quote: ($) =>
            prec.left(5, seq("`", field("inner", optional($._prec1)), "`")),

        // Whitespace separators. A flush `newline` run ends on a newline; an
        // `indent` run ends in indentation (the next line is indented). Both
        // start on a newline so plain inline spaces stay extras. The longest
        // match wins, mirroring the reference lexer's single whitespace run.
        newline: ($) => token(/\n([ \t\r]*\n)*/),
        indent: ($) => token(/\n[ \t\r\n]*[ \t]/),

        // Terminals
        // Dashes are ordinary identifier characters (prefix, infix, or postfix), so
        // `I32-Const` is one key. They are only told apart from the `-`/`->`/`-->`
        // operators by spaces, since whitespace ends a token. The Zig lexer matches.
        key: ($) => /[-_]*\p{Lu}[\p{L}\p{N}_-]*|_/u,
        // A leading `$` glued directly to an identifier (e.g. `$x`, `$problem_id`)
        // is a constant key, letting otherwise variable-looking (lowercase) names
        // be matched literally. A lone `$` or `$ name` stays an ordinary symbol.
        constant: ($) => /\$[\p{L}\p{N}_][\p{L}\p{N}_-]*/u,
        variable: ($) => /[-_]*\p{Ll}[\p{L}\p{N}_-]*/u,
        var_pattern: ($) => /_*\*\p{Ll}[\p{L}\p{N}_-]*/u,
        number: ($) => /[0-9]+(\.[0-9]+)?/,
        // Double- and single-quoted strings are distinct tokens. Single quotes
        // are common in SQL string literals; both round-trip verbatim.
        string: ($) => /"([^"\\]|\\.)*"/,
        single_string: ($) => /'([^'\\]|\\.)*'/,

        // The reference lexer does maximal munch over operator characters, then
        // treats the run as a reserved operator only when it exactly equals one
        // (`:`, `->`, `::`, `-->`); otherwise it is a `symbol`. So `:>` is a
        // single symbol, not `:` followed by `>`. Matching that here relies on
        // tree-sitter's lexer rules: the longest match wins (so a multi-char run
        // beats a one-char literal), and on a tie the string literals (the
        // reserved operators) are preferred over this regex token. Hence no
        // explicit token precedence.
        // Brackets are ordinary symbol characters, not special syntax: the
        // evaluator implements lists itself by matching them like identifiers.
        symbol: ($) => token(/[:!@$%^&*+\-=|<>?\/\\~`\[\]\p{S}]+/u),

        comment: ($) => token(seq("#", /.*/)),
    },
});
