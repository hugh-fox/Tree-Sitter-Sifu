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
// Disable TypeScript checking for this file
// @ts-nocheck
module.exports = grammar({
  name: 'sifu',

  extras: $ => [
    /[ \t\r]/,  // Whitespace except newlines
    // /\s/u,      // All whitespace including newlines
    $.comment,
  ],

  rules: {
    // Top-level pattern: sequence of terms separated by newlines
    // source_file: $ => repeat(choice('\n', seq(
    //   $.pattern,
    //   optional(prec.right(6, '\n')),
    // ))),

    pattern: $ => seq(
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
      $.newline_expr,
      $.long_match,
      $.long_arrow,
      $.infix,
      $.short_match,
      $.short_arrow,
      $.nested_pattern,
      $.nested_trie,
      // $.quote,
    ),

    // Unicode-aware identifiers
    key: $ => /\p{Lu}[\p{L}\p{N}_]*/u,
    var: $ => /\p{Ll}[\p{L}\p{N}_]*/u,
    number: $ => /[0-9]+(\.[0-9]+)?/,
    string: $ => /"([^"\\]|\\.)*"/,
    // Unicode-aware symbols (excluding reserved characters)
    symbol: $ => /[:!@$%^&*+-=|<>?\/\\~`\p{S}]+/u,

    // Nested structures
    nested_pattern: $ => seq('(', repeat($._term), ')'),
    nested_trie: $ => seq('{', repeat($._term), '}'),

    // Quotes
    quote: $ => seq('`', repeat($._term), '`'),

    // Operators (by precedence, lowest to highest)
    // Semicolon and newline - lowest precedence
    semicolon_expr: $ => prec.right(1, seq(
      ';',
      repeat($._term),
    )),

    // Add newline as semicolon equivalent, but only within nested structures
    newline_expr: $ => prec.right(1, seq(
      '\n',
      repeat($._term),
    )),

    // Long match and long arrow
    long_match: $ => prec.right(2, seq(
      '::',
      repeat($._term),
    )),

    long_arrow: $ => prec.right(2, seq(
      '-->',
      repeat($._term),
    )),

    // Comma - medium-low precedence
    comma_expr: $ => prec.right(3, seq(
      ',',
      repeat($._term),
    )),

    // Infix - medium precedence
    infix: $ => prec.right(4, seq(
      $.symbol,
      repeat($._term),
    )),

    // Short match and short arrow - highest precedence
    short_match: $ => prec.right(5, seq(
      ':',
      repeat($._term),
    )),

    short_arrow: $ => prec.right(5, seq(
      '->',
      repeat($._term),
    )),
  }
});