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
 * Operator precedence (lowest to highest):
 *   1. semicolon  ;
 *   2. long_match ::  /  long_arrow -->
 *   3. comma      ,
 *   4. infix      <symbol>
 *   5. match      :   /  arrow      ->
 *   6. terms      (juxtaposition)
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
// @ts-nocheck
module.exports = grammar({
  name: "sifu",

  extras: ($) => [
    /[\s]/,
    $.comment,
  ],

  rules: {

    pattern: ($) => optional($._prec1),

    // Prec 1: semicolon
    _prec1: ($) => choice(
      $.semicolon,
      $._prec2,
    ),

    semicolon: ($) => prec.left(1, seq(
      field("lhs", optional($._prec2)),
      ";",
      field("rhs", optional($._prec1)),
    )),

    // Prec 2: long_match, long_arrow
    _prec2: ($) => choice(
      $.long_match,
      $.long_arrow,
      $._prec3,
    ),

    long_match: ($) => prec.left(2, seq(
      field("lhs", optional($._prec3)),
      "::",
      field("rhs", optional($._prec2)),
    )),

    long_arrow: ($) => prec.left(2, seq(
      field("lhs", optional($._prec3)),
      "-->",
      field("rhs", optional($._prec2)),
    )),

    // Prec 3: comma
    _prec3: ($) => choice(
      $.comma,
      $._prec4,
    ),

    comma: ($) => prec.left(3, seq(
      field("lhs", optional($._prec4)),
      ",",
      field("rhs", optional($._prec3)),
    )),

    // Prec 4: infix (user-defined symbol)
    _prec4: ($) => choice(
      $.infix,
      $._prec5,
    ),

    infix: ($) => prec.left(4, seq(
      field("lhs", optional($._prec5)),
      field("op", $.symbol),
      field("rhs", optional($._prec4)),
    )),

    // Prec 5: match, arrow
    _prec5: ($) => choice(
      $.match,
      $.arrow,
      $._prec6,
    ),

    match: ($) => prec.left(5, seq(
      field("lhs", optional($._prec6)),
      ":",
      field("rhs", optional($._prec5)),
    )),

    arrow: ($) => prec.left(5, seq(
      field("lhs", optional($._prec6)),
      "->",
      field("rhs", optional($._prec5)),
    )),

    // Prec 6: juxtaposition (terms)
    _prec6: ($) => $.terms,

    terms: ($) => prec.left(6, repeat1($._term)),

    _term: ($) => choice(
      $.key,
      $.variable,
      $.var_pattern,
      $.number,
      $.string,
      $.nested_pattern,
      $.nested_trie,
      $.quote,
    ),

    nested_pattern: ($) => seq(
      "(",
      field("inner", optional($._prec1)),
      ")"
    ),

    nested_trie: ($) => seq(
      "{",
      field("inner", optional($._prec1)),
      "}"
    ),

    quote: ($) => prec.left(5, seq(
      "`",
      field("inner", optional($._prec1)),
      "`"
    )),

    char_trie: ($) => seq(
      "#{",
      field("inner", optional($._prec1)),
      "}#"
    ),
    
    // Terminals
    key: ($) => /_*\p{Lu}[\p{L}\p{N}_]*|_/u,
    variable: ($) => /_*\p{Ll}[\p{L}\p{N}_]*/u,
    var_pattern: ($) => /_*\*\p{Ll}[\p{L}\p{N}_]*/u,
    number: ($) => /[0-9]+(\.[0-9]+)?/,
    string: ($) => /"([^"\\]|\\.)*"/,

    // Negative token precedence ensures reserved literals always win
    symbol: ($) => token(prec(-1, /[:!@$%^&*+\-=|<>?\/\\~`\p{S}]+/u)),

    comment: ($) => token(seq("#", /.*/)),
  },
});