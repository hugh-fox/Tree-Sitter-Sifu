/**
 * @file The Sifu Programming Language Parser
 * @author Hugh Fox <hugh.s.fox@gmail.com>
 * @license Apache 2.0
 *
 * Parses an AST that is converted to a single Pattern. The conversion
 * algorithm assumes that all anonymous nodes have exactly one child.
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
// @ts-nocheck
module.exports = grammar({
  name: "sifu",

  extras: ($) => [
    /[\s]/,
    // /[ \t\r]/, // Whitespace except newlines
    $.comment,
  ],

  rules: {
    pattern: ($) => optional($._op),

    comment: ($) => token(
      seq(
        "#",
        /.*/
      )
    ),

    semicolon: ($) => prec.right(1, seq(
      field("lhs", optional($._non_semicolon)),
      ";",
      field("rhs", optional(choice(
        $.semicolon,
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),

    long_match: ($) => prec.right(2, seq(
      field("lhs", optional($._non_long)),
      "::",
      field("rhs", optional(choice(
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),
    long_arrow: ($) => prec.right(2, seq(
      field("lhs", optional($._non_long)),
      "-->",
      field("rhs", optional(choice(
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),

    comma: ($) => prec.right(3, seq(
      field("lhs", optional($._non_comma)),
      ",",
      field("rhs", optional(choice(
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),

    infix: ($) => prec.right(4, seq(
      field("lhs", optional($._non_infix)),
      field("op", $.symbol),
      field("rhs", optional(choice(
        $.infix,
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),

    match: ($) => prec.right(5, seq(
      field("lhs", optional($._non_short)),
      ":",
      field("rhs", optional(choice(
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),
    arrow: ($) => prec.right(5, seq(
      field("lhs", optional($._non_short)),
      "->",
      field("rhs", optional(choice(
        $.match,
        $.arrow,
        $.apps,
      ))),
    )),

    _non_semicolon: ($) => choice(
      $.long_match,
      $.long_arrow,
      $.comma,
      $.infix,
      $.match,
      $.arrow,
      $.apps
    ),

    _non_long: ($) => choice(
      $.comma,
      $.infix,
      $.match,
      $.arrow,
      $.apps
    ),

    _non_comma: ($) => choice(
      $.infix,
      $.match,
      $.arrow,
      $.apps
    ),

    _non_infix: ($) => choice(
      $.match,
      $.arrow,
      $.apps
    ),

    _non_short: ($) => $.apps,

    apps: ($) => prec.right(8, repeat1(
      $._term
    )),

    _term: ($) => choice(
      $.key,
      $.variable,
      $.number,
      $.string,
      $.nested_pattern,
      $.nested_trie,
      $.quote,
    ),

    // Unicode-aware identifiers
    key: ($) => /\p{Lu}[\p{L}\p{N}_-]*/u,
    variable: ($) => /\p{Ll}[\p{L}\p{N}_-]*/u,
    number: ($) => /[0-9]+(\.[0-9]+)?/,
    string: ($) => /"([^"\\]|\\.)*"/,
    // Unicode-aware symbols (excluding reserved characters)
    symbol: ($) => /[:!@$%^&*+-=|<>?\/\\~`\p{S}]+/u,

    _op: ($) => choice(
      $.semicolon,
      $.long_match,
      $.long_arrow,
      $.comma,
      $.infix,
      $.match,
      $.arrow,
      $.apps
    ),

    // Nested structures
    nested_pattern: ($) => prec.right(6, seq(
      "(",
      optional($._op),
      ")"
    )),
    nested_trie: ($) => prec.right(6, seq(
      "{",
      optional($._op),
      "}"
    )),

    quote: ($) => prec.right(5, seq(
      "`",
      optional($._op),
      "`"
    )),
  },
});