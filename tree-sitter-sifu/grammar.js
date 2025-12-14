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
    pattern: ($) => prec.right(1,
      optional(optional($._op))
    ),

    // Comments
    comment: ($) => token(
      seq(
        "#",
        /.*/
      )
    ),

    // Precedence level 0: Semicolon (lowest)
    semicolon: ($) => prec.right(1, seq(
      optional($._non_semicolon),
      ";",
      optional(choice(
        $.semicolon,
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $._apps,
      )),
    )),

    // Precedence level 1: Long match and long arrow
    long_match: ($) => prec.right(2, seq(
      optional($._non_long),
      "::",
      optional(choice(
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $._apps,
      )),
    )),
    long_arrow: ($) => prec.right(2, seq(
      optional($._non_long),
      "-->",
      optional(choice(
        $.long_match,
        $.long_arrow,
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $._apps,
      )),
    )),

    // Precedence level 2: Comma
    comma: ($) => prec.right(3, seq(
      optional($._non_comma),
      ",",
      optional(choice(
        $.comma,
        $.infix,
        $.match,
        $.arrow,
        $._apps,
      )),
    )),

    // Precedence level 3: Infix (custom operators)
    infix: ($) => prec.right(4, seq(
      optional($._non_infix),
      $.symbol,
      optional(choice(
        $.infix,
        $.match,
        $.arrow,
        $._apps,
      )),
    )),

    // Precedence level 4: Short match and short arrow (highest)
    match: ($) => prec.right(5, seq(
      optional($._non_short),
      ":",
      optional(choice(
        $.match,
        $.arrow,
        $._apps,
      )),
    )),
    arrow: ($) => prec.right(5, seq(
      optional($._non_short),
      "->",
      optional(choice(
        $.match,
        $.arrow,
        $._apps,
      )),
    )),

    // Helper rules to prevent certain operators at each level
    _non_semicolon: ($) => choice(
      $.long_match,
      $.long_arrow,
      $.comma,
      $.infix,
      $.match,
      $.arrow,
      $._apps
    ),

    _non_long: ($) => choice(
      $.comma,
      $.infix,
      $.match,
      $.arrow,
      $._apps
    ),

    _non_comma: ($) => choice(
      $.infix,
      $.match,
      $.arrow,
      $._apps
    ),

    _non_infix: ($) => choice(
      $.match,
      $.arrow,
      $._apps
    ),

    _non_short: ($) => $._apps,

    _apps: ($) => prec.right(8, repeat1(
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
      $._apps
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

    // Quotes
    quote: ($) => prec.right(5, seq(
      "`",
      optional($._op),
      "`"
    )),
  },
});