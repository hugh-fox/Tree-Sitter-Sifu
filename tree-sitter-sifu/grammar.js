/**
 * @file The Sifu Programming Language Parser
 * @author Hugh Fox <hugh.s.fox@gmail.com>
 * @license Apache 2.0
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
// Disable TypeScript checking for this file
// @ts-nocheck
module.exports = grammar({
  name: 'sifu',

  extras: $ => [
    // /[ \t\r]/,  // Whitespace except newlines
    $.comment,
  ],

  rules: {
    // Top-level pattern: sequence of terms separated by newlines
    // source_file: $ => repeat(choice('\n', seq(
    //   $.pattern,
    //   optional(prec.right(6, '\n')),
    // ))),

    pattern: $ => seq(
      repeat(/\s/),
      prec.right(0, repeat($._term)),
    ),

    // Comments
    comment: $ => token(seq('#', /.*/)),

    _term: $ => choice(
      $.key,
      $.var,
      $.number,
      $.string,
      $.symbol,
      $.comma_expr,
      $.semicolon_expr,
      $.long_match,
      $.long_arrow,
      $.infix,
      $.short_match,
      $.short_arrow,
      $.nested_pattern,
      $.nested_trie,
      $.quote,
    ),

    // Unicode-aware identifiers
    key: $ => /\p{Lu}[\p{L}\p{N}_]*/u,
    var: $ => /\p{Ll}[\p{L}\p{N}_]*/u,
    number: $ => /[0-9]+(\.[0-9]+)?/,
    string: $ => /"([^"\\]|\\.)*"/,
    // Unicode-aware symbols (excluding reserved characters)
    symbol: $ => /[:!@$%^&*+-=|<>?\/\\~`\p{S}]+/u,

    // Nested structures
    nested_pattern: $ => seq('(', repeat($.pattern), ')'),
    nested_trie: $ => seq('{', repeat($.pattern), '}'),

    // Quotes
    quote: $ => seq('`', optional($.pattern), '`'),

    // Operators (by precedence, lowest to highest)
    // Semicolon and newline - lowest precedence
    semicolon_expr: $ => prec.right(1, seq(
      ';',
      optional($.pattern),
    )),

    // Add newline as semicolon equivalent, but only within nested structures
    newline_expr: $ => prec.right(1, seq(
      '\n',
      optional($.pattern),
    )),

    // Long match and long arrow
    long_match: $ => prec.right(2, seq(
      '::',
      optional($.pattern),
    )),

    long_arrow: $ => prec.right(2, seq(
      '-->',
      optional($.pattern),
    )),

    // Comma - medium-low precedence
    comma_expr: $ => prec.right(3, seq(
      ',',
      optional($.pattern),
    )),

    // Infix - medium precedence
    infix: $ => prec.right(4, seq(
      $.symbol,
      optional($.pattern),
    )),

    // Short match and short arrow - highest precedence
    short_match: $ => prec.right(5, seq(
      ':',
      optional($.pattern),
    )),

    short_arrow: $ => prec.right(5, seq(
      '->',
      optional($.pattern),
    )),
  }
});