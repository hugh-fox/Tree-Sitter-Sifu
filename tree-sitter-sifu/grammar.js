/**
 * @file The Sifu Programming Language Parser
 * @author Hugh Fox <checkmateguy@gmail.com>
 * @license Apache 2.0
 */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
// Disable TypeScript checking for this file
// @ts-nocheck
module.exports = grammar({
  name: 'sifu',

  extras: $ => [
    /[ \t\r]/,  // Whitespace except newlines
    $.comment,
  ],

  rules: {
    source_file: $ => optional($._trie_content),

    // Comments
    comment: $ => token(seq('#', /.*/)),

    _trie_content: $ => choice(
      $.pattern,
    ),

    pattern: $ => prec.right(0, repeat1(
      $.term,
    )),

    term: $ => choice(
      $.nested_pattern,
      $.nested_trie,
      $.key,
      $.var,
      $.number,
      $.string,
      $.symbol,
      $.comma_expr,
      $.semicolon_expr,
      $.newline_expr,  // Add newline as semicolon equivalent
      $.long_match,
      $.long_arrow,
      $.infix,
      $.short_match,
      $.short_arrow,
      // $.quote,
    ),

    // Unicode-aware identifiers
    key: $ => /\p{Lu}[\p{L}\p{N}_]*/u,
    var: $ => /\p{Ll}[\p{L}\p{N}_]*/u,
    number: $ => /[0-9]+(\.[0-9]+)?/,
    string: $ => /"([^"\\]|\\.)*"/,
    // Unicode-aware symbols (excluding reserved characters)
    symbol: $ => /[!@$%^&*+=|<>?\/\\~`\p{S}]+/u,

    // Nested structures
    nested_pattern: $ => seq('(', optional($.pattern), ')'),
    nested_trie: $ => seq('{', optional($._trie_content), '}'),

    // Quotes
    quote: $ => seq('`', optional($.pattern), '`'),

    // Operators (by precedence, lowest to highest)
    // Semicolon and newline - lowest precedence
    semicolon_expr: $ => prec.right(1, seq(
      ';',
      optional(field('right', $._trie_content))
    )),

    newline_expr: $ => prec.right(1, seq(
      '\n',
      optional(field('right', $._trie_content))
    )),

    // Long match and long arrow
    long_match: $ => prec.right(2, seq(
      '::',
      optional(field('from', choice($._trie_content, $.nested_trie)))
    )),

    long_arrow: $ => prec.right(2, seq(
      '-->',
      optional(field('into', choice($._trie_content, $.nested_trie)))
    )),

    // Comma - medium-low precedence
    comma_expr: $ => prec.right(3, seq(
      ',',
      optional(field('right', $._trie_content))
    )),

    // Infix - medium precedence
    infix: $ => prec.right(4, seq(
      field('op', $.symbol),
      optional(field('right', choice($._trie_content, $.nested_pattern, $.nested_trie)))
    )),

    // Short match and short arrow - highest precedence
    short_match: $ => prec.right(5, seq(
      ':',
      optional(field('from', choice($._trie_content, $.nested_trie)))
    )),

    short_arrow: $ => prec.right(5, seq(
      '->',
      optional(field('into', choice($._trie_content, $.nested_trie)))
    )),
  }
});