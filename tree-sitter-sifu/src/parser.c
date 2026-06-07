#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 168
#define LARGE_STATE_COUNT 65
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_COLON_COLON = 3,
  anon_sym_DASH_DASH_GT = 4,
  anon_sym_COMMA = 5,
  anon_sym_COLON = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_POUND_LBRACE = 13,
  anon_sym_RBRACE_POUND = 14,
  sym_key = 15,
  sym_variable = 16,
  sym_var_pattern = 17,
  sym_number = 18,
  sym_string = 19,
  sym_symbol = 20,
  sym_comment = 21,
  sym_pattern = 22,
  sym__prec1 = 23,
  sym_semicolon = 24,
  sym_newline_sep = 25,
  sym__prec2 = 26,
  sym_long_match = 27,
  sym_long_arrow = 28,
  sym__prec3 = 29,
  sym_comma = 30,
  sym__prec4 = 31,
  sym_infix = 32,
  sym__prec5 = 33,
  sym_match = 34,
  sym_arrow = 35,
  sym__prec6 = 36,
  sym_terms = 37,
  sym__term = 38,
  sym_nested_pattern = 39,
  sym_nested_trie = 40,
  sym_quote = 41,
  sym_char_trie = 42,
  aux_sym_terms_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_POUND_LBRACE] = "#{",
  [anon_sym_RBRACE_POUND] = "}#",
  [sym_key] = "key",
  [sym_variable] = "variable",
  [sym_var_pattern] = "var_pattern",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [sym_pattern] = "pattern",
  [sym__prec1] = "_prec1",
  [sym_semicolon] = "semicolon",
  [sym_newline_sep] = "newline_sep",
  [sym__prec2] = "_prec2",
  [sym_long_match] = "long_match",
  [sym_long_arrow] = "long_arrow",
  [sym__prec3] = "_prec3",
  [sym_comma] = "comma",
  [sym__prec4] = "_prec4",
  [sym_infix] = "infix",
  [sym__prec5] = "_prec5",
  [sym_match] = "match",
  [sym_arrow] = "arrow",
  [sym__prec6] = "_prec6",
  [sym_terms] = "terms",
  [sym__term] = "_term",
  [sym_nested_pattern] = "nested_pattern",
  [sym_nested_trie] = "nested_trie",
  [sym_quote] = "quote",
  [sym_char_trie] = "char_trie",
  [aux_sym_terms_repeat1] = "terms_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_POUND_LBRACE] = anon_sym_POUND_LBRACE,
  [anon_sym_RBRACE_POUND] = anon_sym_RBRACE_POUND,
  [sym_key] = sym_key,
  [sym_variable] = sym_variable,
  [sym_var_pattern] = sym_var_pattern,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [sym_pattern] = sym_pattern,
  [sym__prec1] = sym__prec1,
  [sym_semicolon] = sym_semicolon,
  [sym_newline_sep] = sym_newline_sep,
  [sym__prec2] = sym__prec2,
  [sym_long_match] = sym_long_match,
  [sym_long_arrow] = sym_long_arrow,
  [sym__prec3] = sym__prec3,
  [sym_comma] = sym_comma,
  [sym__prec4] = sym__prec4,
  [sym_infix] = sym_infix,
  [sym__prec5] = sym__prec5,
  [sym_match] = sym_match,
  [sym_arrow] = sym_arrow,
  [sym__prec6] = sym__prec6,
  [sym_terms] = sym_terms,
  [sym__term] = sym__term,
  [sym_nested_pattern] = sym_nested_pattern,
  [sym_nested_trie] = sym_nested_trie,
  [sym_quote] = sym_quote,
  [sym_char_trie] = sym_char_trie,
  [aux_sym_terms_repeat1] = aux_sym_terms_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_var_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__prec1] = {
    .visible = false,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_newline_sep] = {
    .visible = true,
    .named = true,
  },
  [sym__prec2] = {
    .visible = false,
    .named = true,
  },
  [sym_long_match] = {
    .visible = true,
    .named = true,
  },
  [sym_long_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym__prec3] = {
    .visible = false,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym__prec4] = {
    .visible = false,
    .named = true,
  },
  [sym_infix] = {
    .visible = true,
    .named = true,
  },
  [sym__prec5] = {
    .visible = false,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [sym__prec6] = {
    .visible = false,
    .named = true,
  },
  [sym_terms] = {
    .visible = true,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_nested_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_trie] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_char_trie] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_terms_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_inner = 1,
  field_lhs = 2,
  field_op = 3,
  field_rhs = 4,
  field_trailing = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_inner] = "inner",
  [field_lhs] = "lhs",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_trailing] = "trailing",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 3},
  [14] = {.index = 23, .length = 3},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_op, 0},
  [1] =
    {field_rhs, 1},
  [2] =
    {field_trailing, 1},
  [3] =
    {field_op, 0},
    {field_trailing, 1},
  [5] =
    {field_op, 0},
    {field_rhs, 1},
  [7] =
    {field_lhs, 0},
  [8] =
    {field_lhs, 0},
    {field_op, 1},
  [10] =
    {field_rhs, 2},
    {field_trailing, 1},
  [12] =
    {field_inner, 1},
  [13] =
    {field_op, 0},
    {field_rhs, 2},
    {field_trailing, 1},
  [16] =
    {field_lhs, 0},
    {field_rhs, 2},
  [18] =
    {field_lhs, 0},
    {field_trailing, 2},
  [20] =
    {field_lhs, 0},
    {field_op, 1},
    {field_trailing, 2},
  [23] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [26] =
    {field_lhs, 0},
    {field_rhs, 3},
    {field_trailing, 2},
  [29] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 3},
    {field_trailing, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 7,
  [11] = 4,
  [12] = 12,
  [13] = 3,
  [14] = 12,
  [15] = 5,
  [16] = 2,
  [17] = 9,
  [18] = 2,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 6,
  [23] = 3,
  [24] = 24,
  [25] = 5,
  [26] = 24,
  [27] = 27,
  [28] = 19,
  [29] = 20,
  [30] = 21,
  [31] = 27,
  [32] = 27,
  [33] = 21,
  [34] = 20,
  [35] = 35,
  [36] = 19,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 37,
  [41] = 41,
  [42] = 35,
  [43] = 37,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 41,
  [48] = 48,
  [49] = 49,
  [50] = 38,
  [51] = 41,
  [52] = 46,
  [53] = 45,
  [54] = 49,
  [55] = 48,
  [56] = 45,
  [57] = 46,
  [58] = 48,
  [59] = 49,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 60,
  [64] = 60,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 70,
  [74] = 69,
  [75] = 65,
  [76] = 67,
  [77] = 71,
  [78] = 66,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 94,
  [101] = 87,
  [102] = 83,
  [103] = 81,
  [104] = 83,
  [105] = 81,
  [106] = 82,
  [107] = 82,
  [108] = 93,
  [109] = 86,
  [110] = 86,
  [111] = 87,
  [112] = 91,
  [113] = 113,
  [114] = 93,
  [115] = 90,
  [116] = 94,
  [117] = 91,
  [118] = 90,
  [119] = 119,
  [120] = 95,
  [121] = 89,
  [122] = 88,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 95,
  [127] = 92,
  [128] = 85,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 96,
  [134] = 99,
  [135] = 113,
  [136] = 97,
  [137] = 113,
  [138] = 98,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 123,
  [145] = 125,
  [146] = 132,
  [147] = 119,
  [148] = 139,
  [149] = 129,
  [150] = 130,
  [151] = 131,
  [152] = 124,
  [153] = 139,
  [154] = 142,
  [155] = 155,
  [156] = 143,
  [157] = 157,
  [158] = 140,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 141,
  [164] = 155,
  [165] = 157,
  [166] = 162,
  [167] = 159,
};

static inline bool sym_key_character_set_1(int32_t c) {
  return (c < 7734
    ? (c < 913
      ? (c < 422
        ? (c < 327
          ? (c < 288
            ? (c < 268
              ? (c < 258
                ? (c < 216
                  ? (c < 192
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 214)
                  : (c <= 222 || c == 256))
                : (c <= 258 || (c < 264
                  ? (c < 262
                    ? c == 260
                    : c <= 262)
                  : (c <= 264 || c == 266))))
              : (c <= 268 || (c < 278
                ? (c < 274
                  ? (c < 272
                    ? c == 270
                    : c <= 272)
                  : (c <= 274 || c == 276))
                : (c <= 278 || (c < 284
                  ? (c < 282
                    ? c == 280
                    : c <= 282)
                  : (c <= 284 || c == 286))))))
            : (c <= 288 || (c < 308
              ? (c < 298
                ? (c < 294
                  ? (c < 292
                    ? c == 290
                    : c <= 292)
                  : (c <= 294 || c == 296))
                : (c <= 298 || (c < 304
                  ? (c < 302
                    ? c == 300
                    : c <= 302)
                  : (c <= 304 || c == 306))))
              : (c <= 308 || (c < 319
                ? (c < 315
                  ? (c < 313
                    ? c == 310
                    : c <= 313)
                  : (c <= 315 || c == 317))
                : (c <= 319 || (c < 323
                  ? c == 321
                  : (c <= 323 || c == 325))))))))
          : (c <= 327 || (c < 366
            ? (c < 348
              ? (c < 338
                ? (c < 334
                  ? (c < 332
                    ? c == 330
                    : c <= 332)
                  : (c <= 334 || c == 336))
                : (c <= 338 || (c < 344
                  ? (c < 342
                    ? c == 340
                    : c <= 342)
                  : (c <= 344 || c == 346))))
              : (c <= 348 || (c < 358
                ? (c < 354
                  ? (c < 352
                    ? c == 350
                    : c <= 352)
                  : (c <= 354 || c == 356))
                : (c <= 358 || (c < 362
                  ? c == 360
                  : (c <= 362 || c == 364))))))
            : (c <= 366 || (c < 390
              ? (c < 376
                ? (c < 372
                  ? (c < 370
                    ? c == 368
                    : c <= 370)
                  : (c <= 372 || c == 374))
                : (c <= 377 || (c < 385
                  ? (c < 381
                    ? c == 379
                    : c <= 381)
                  : (c <= 386 || c == 388))))
              : (c <= 391 || (c < 412
                ? (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))
                : (c <= 413 || (c < 418
                  ? (c >= 415 && c <= 416)
                  : (c <= 418 || c == 420))))))))))
        : (c <= 423 || (c < 520
          ? (c < 478
            ? (c < 458
              ? (c < 437
                ? (c < 430
                  ? (c < 428
                    ? c == 425
                    : c <= 428)
                  : (c <= 431 || (c >= 433 && c <= 435)))
                : (c <= 437 || (c < 452
                  ? (c < 444
                    ? (c >= 439 && c <= 440)
                    : c <= 444)
                  : (c <= 452 || c == 455))))
              : (c <= 458 || (c < 469
                ? (c < 465
                  ? (c < 463
                    ? c == 461
                    : c <= 463)
                  : (c <= 465 || c == 467))
                : (c <= 469 || (c < 473
                  ? c == 471
                  : (c <= 473 || c == 475))))))
            : (c <= 478 || (c < 500
              ? (c < 488
                ? (c < 484
                  ? (c < 482
                    ? c == 480
                    : c <= 482)
                  : (c <= 484 || c == 486))
                : (c <= 488 || (c < 494
                  ? (c < 492
                    ? c == 490
                    : c <= 492)
                  : (c <= 494 || c == 497))))
              : (c <= 500 || (c < 512
                ? (c < 508
                  ? (c < 506
                    ? (c >= 502 && c <= 504)
                    : c <= 506)
                  : (c <= 508 || c == 510))
                : (c <= 512 || (c < 516
                  ? c == 514
                  : (c <= 516 || c == 518))))))))
          : (c <= 520 || (c < 558
            ? (c < 540
              ? (c < 530
                ? (c < 526
                  ? (c < 524
                    ? c == 522
                    : c <= 524)
                  : (c <= 526 || c == 528))
                : (c <= 530 || (c < 536
                  ? (c < 534
                    ? c == 532
                    : c <= 534)
                  : (c <= 536 || c == 538))))
              : (c <= 540 || (c < 550
                ? (c < 546
                  ? (c < 544
                    ? c == 542
                    : c <= 544)
                  : (c <= 546 || c == 548))
                : (c <= 550 || (c < 554
                  ? c == 552
                  : (c <= 554 || c == 556))))))
            : (c <= 558 || (c < 590
              ? (c < 577
                ? (c < 570
                  ? (c < 562
                    ? c == 560
                    : c <= 562)
                  : (c <= 571 || (c >= 573 && c <= 574)))
                : (c <= 577 || (c < 586
                  ? (c < 584
                    ? (c >= 579 && c <= 582)
                    : c <= 584)
                  : (c <= 586 || c == 588))))
              : (c <= 590 || (c < 902
                ? (c < 886
                  ? (c < 882
                    ? c == 880
                    : c <= 882)
                  : (c <= 886 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 911)))))))))))))
      : (c <= 929 || (c < 1244
        ? (c < 1166
          ? (c < 1120
            ? (c < 996
              ? (c < 986
                ? (c < 978
                  ? (c < 975
                    ? (c >= 931 && c <= 939)
                    : c <= 975)
                  : (c <= 980 || c == 984))
                : (c <= 986 || (c < 992
                  ? (c < 990
                    ? c == 988
                    : c <= 990)
                  : (c <= 992 || c == 994))))
              : (c <= 996 || (c < 1006
                ? (c < 1002
                  ? (c < 1000
                    ? c == 998
                    : c <= 1000)
                  : (c <= 1002 || c == 1004))
                : (c <= 1006 || (c < 1017
                  ? (c < 1015
                    ? c == 1012
                    : c <= 1015)
                  : (c <= 1018 || (c >= 1021 && c <= 1071)))))))
            : (c <= 1120 || (c < 1140
              ? (c < 1130
                ? (c < 1126
                  ? (c < 1124
                    ? c == 1122
                    : c <= 1124)
                  : (c <= 1126 || c == 1128))
                : (c <= 1130 || (c < 1136
                  ? (c < 1134
                    ? c == 1132
                    : c <= 1134)
                  : (c <= 1136 || c == 1138))))
              : (c <= 1140 || (c < 1150
                ? (c < 1146
                  ? (c < 1144
                    ? c == 1142
                    : c <= 1144)
                  : (c <= 1146 || c == 1148))
                : (c <= 1150 || (c < 1162
                  ? c == 1152
                  : (c <= 1162 || c == 1164))))))))
          : (c <= 1166 || (c < 1204
            ? (c < 1186
              ? (c < 1176
                ? (c < 1172
                  ? (c < 1170
                    ? c == 1168
                    : c <= 1170)
                  : (c <= 1172 || c == 1174))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1196
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || c == 1194))
                : (c <= 1196 || (c < 1200
                  ? c == 1198
                  : (c <= 1200 || c == 1202))))))
            : (c <= 1204 || (c < 1225
              ? (c < 1214
                ? (c < 1210
                  ? (c < 1208
                    ? c == 1206
                    : c <= 1208)
                  : (c <= 1210 || c == 1212))
                : (c <= 1214 || (c < 1221
                  ? (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)
                  : (c <= 1221 || c == 1223))))
              : (c <= 1225 || (c < 1236
                ? (c < 1232
                  ? (c < 1229
                    ? c == 1227
                    : c <= 1229)
                  : (c <= 1232 || c == 1234))
                : (c <= 1236 || (c < 1240
                  ? c == 1238
                  : (c <= 1240 || c == 1242))))))))))
        : (c <= 1244 || (c < 1320
          ? (c < 1282
            ? (c < 1264
              ? (c < 1254
                ? (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))
                : (c <= 1254 || (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || c == 1262))))
              : (c <= 1264 || (c < 1274
                ? (c < 1270
                  ? (c < 1268
                    ? c == 1266
                    : c <= 1268)
                  : (c <= 1270 || c == 1272))
                : (c <= 1274 || (c < 1278
                  ? c == 1276
                  : (c <= 1278 || c == 1280))))))
            : (c <= 1282 || (c < 1302
              ? (c < 1292
                ? (c < 1288
                  ? (c < 1286
                    ? c == 1284
                    : c <= 1286)
                  : (c <= 1288 || c == 1290))
                : (c <= 1292 || (c < 1298
                  ? (c < 1296
                    ? c == 1294
                    : c <= 1296)
                  : (c <= 1298 || c == 1300))))
              : (c <= 1302 || (c < 1312
                ? (c < 1308
                  ? (c < 1306
                    ? c == 1304
                    : c <= 1306)
                  : (c <= 1308 || c == 1310))
                : (c <= 1312 || (c < 1316
                  ? c == 1314
                  : (c <= 1316 || c == 1318))))))))
          : (c <= 1320 || (c < 7696
            ? (c < 7357
              ? (c < 4256
                ? (c < 1326
                  ? (c < 1324
                    ? c == 1322
                    : c <= 1324)
                  : (c <= 1326 || (c >= 1329 && c <= 1366)))
                : (c <= 4293 || (c < 5024
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 5109 || (c >= 7312 && c <= 7354)))))
              : (c <= 7359 || (c < 7688
                ? (c < 7684
                  ? (c < 7682
                    ? c == 7680
                    : c <= 7682)
                  : (c <= 7684 || c == 7686))
                : (c <= 7688 || (c < 7692
                  ? c == 7690
                  : (c <= 7692 || c == 7694))))))
            : (c <= 7696 || (c < 7716
              ? (c < 7706
                ? (c < 7702
                  ? (c < 7700
                    ? c == 7698
                    : c <= 7700)
                  : (c <= 7702 || c == 7704))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7730
                  ? c == 7728
                  : (c <= 7730 || c == 7732))))))))))))))
    : (c <= 7734 || (c < 11428
      ? (c < 7896
        ? (c < 7812
          ? (c < 7774
            ? (c < 7754
              ? (c < 7744
                ? (c < 7740
                  ? (c < 7738
                    ? c == 7736
                    : c <= 7738)
                  : (c <= 7740 || c == 7742))
                : (c <= 7744 || (c < 7750
                  ? (c < 7748
                    ? c == 7746
                    : c <= 7748)
                  : (c <= 7750 || c == 7752))))
              : (c <= 7754 || (c < 7764
                ? (c < 7760
                  ? (c < 7758
                    ? c == 7756
                    : c <= 7758)
                  : (c <= 7760 || c == 7762))
                : (c <= 7764 || (c < 7770
                  ? (c < 7768
                    ? c == 7766
                    : c <= 7768)
                  : (c <= 7770 || c == 7772))))))
            : (c <= 7774 || (c < 7794
              ? (c < 7784
                ? (c < 7780
                  ? (c < 7778
                    ? c == 7776
                    : c <= 7778)
                  : (c <= 7780 || c == 7782))
                : (c <= 7784 || (c < 7790
                  ? (c < 7788
                    ? c == 7786
                    : c <= 7788)
                  : (c <= 7790 || c == 7792))))
              : (c <= 7794 || (c < 7804
                ? (c < 7800
                  ? (c < 7798
                    ? c == 7796
                    : c <= 7798)
                  : (c <= 7800 || c == 7802))
                : (c <= 7804 || (c < 7808
                  ? c == 7806
                  : (c <= 7808 || c == 7810))))))))
          : (c <= 7812 || (c < 7858
            ? (c < 7840
              ? (c < 7822
                ? (c < 7818
                  ? (c < 7816
                    ? c == 7814
                    : c <= 7816)
                  : (c <= 7818 || c == 7820))
                : (c <= 7822 || (c < 7828
                  ? (c < 7826
                    ? c == 7824
                    : c <= 7826)
                  : (c <= 7828 || c == 7838))))
              : (c <= 7840 || (c < 7850
                ? (c < 7846
                  ? (c < 7844
                    ? c == 7842
                    : c <= 7844)
                  : (c <= 7846 || c == 7848))
                : (c <= 7850 || (c < 7854
                  ? c == 7852
                  : (c <= 7854 || c == 7856))))))
            : (c <= 7858 || (c < 7878
              ? (c < 7868
                ? (c < 7864
                  ? (c < 7862
                    ? c == 7860
                    : c <= 7862)
                  : (c <= 7864 || c == 7866))
                : (c <= 7868 || (c < 7874
                  ? (c < 7872
                    ? c == 7870
                    : c <= 7872)
                  : (c <= 7874 || c == 7876))))
              : (c <= 7878 || (c < 7888
                ? (c < 7884
                  ? (c < 7882
                    ? c == 7880
                    : c <= 7882)
                  : (c <= 7884 || c == 7886))
                : (c <= 7888 || (c < 7892
                  ? c == 7890
                  : (c <= 7892 || c == 7894))))))))))
        : (c <= 7896 || (c < 8464
          ? (c < 7934
            ? (c < 7916
              ? (c < 7906
                ? (c < 7902
                  ? (c < 7900
                    ? c == 7898
                    : c <= 7900)
                  : (c <= 7902 || c == 7904))
                : (c <= 7906 || (c < 7912
                  ? (c < 7910
                    ? c == 7908
                    : c <= 7910)
                  : (c <= 7912 || c == 7914))))
              : (c <= 7916 || (c < 7926
                ? (c < 7922
                  ? (c < 7920
                    ? c == 7918
                    : c <= 7920)
                  : (c <= 7922 || c == 7924))
                : (c <= 7926 || (c < 7930
                  ? c == 7928
                  : (c <= 7930 || c == 7932))))))
            : (c <= 7934 || (c < 8040
              ? (c < 8008
                ? (c < 7976
                  ? (c < 7960
                    ? (c >= 7944 && c <= 7951)
                    : c <= 7965)
                  : (c <= 7983 || (c >= 7992 && c <= 7999)))
                : (c <= 8013 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || c == 8031))))
              : (c <= 8047 || (c < 8184
                ? (c < 8152
                  ? (c < 8136
                    ? (c >= 8120 && c <= 8123)
                    : c <= 8139)
                  : (c <= 8155 || (c >= 8168 && c <= 8172)))
                : (c <= 8187 || (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8459 && c <= 8461)))))))))
          : (c <= 8466 || (c < 11381
            ? (c < 8579
              ? (c < 8488
                ? (c < 8484
                  ? (c < 8473
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8510
                  ? (c < 8496
                    ? (c >= 8490 && c <= 8493)
                    : c <= 8499)
                  : (c <= 8511 || c == 8517))))
              : (c <= 8579 || (c < 11369
                ? (c < 11362
                  ? (c < 11360
                    ? (c >= 11264 && c <= 11311)
                    : c <= 11360)
                  : (c <= 11364 || c == 11367))
                : (c <= 11369 || (c < 11373
                  ? c == 11371
                  : (c <= 11376 || c == 11378))))))
            : (c <= 11381 || (c < 11410
              ? (c < 11400
                ? (c < 11396
                  ? (c < 11394
                    ? (c >= 11390 && c <= 11392)
                    : c <= 11394)
                  : (c <= 11396 || c == 11398))
                : (c <= 11400 || (c < 11406
                  ? (c < 11404
                    ? c == 11402
                    : c <= 11404)
                  : (c <= 11406 || c == 11408))))
              : (c <= 11410 || (c < 11420
                ? (c < 11416
                  ? (c < 11414
                    ? c == 11412
                    : c <= 11414)
                  : (c <= 11416 || c == 11418))
                : (c <= 11420 || (c < 11424
                  ? c == 11422
                  : (c <= 11424 || c == 11426))))))))))))
      : (c <= 11428 || (c < 42796
        ? (c < 42568
          ? (c < 11468
            ? (c < 11448
              ? (c < 11438
                ? (c < 11434
                  ? (c < 11432
                    ? c == 11430
                    : c <= 11432)
                  : (c <= 11434 || c == 11436))
                : (c <= 11438 || (c < 11444
                  ? (c < 11442
                    ? c == 11440
                    : c <= 11442)
                  : (c <= 11444 || c == 11446))))
              : (c <= 11448 || (c < 11458
                ? (c < 11454
                  ? (c < 11452
                    ? c == 11450
                    : c <= 11452)
                  : (c <= 11454 || c == 11456))
                : (c <= 11458 || (c < 11464
                  ? (c < 11462
                    ? c == 11460
                    : c <= 11462)
                  : (c <= 11464 || c == 11466))))))
            : (c <= 11468 || (c < 11488
              ? (c < 11478
                ? (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))
                : (c <= 11478 || (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || c == 11486))))
              : (c <= 11488 || (c < 42560
                ? (c < 11501
                  ? (c < 11499
                    ? c == 11490
                    : c <= 11499)
                  : (c <= 11501 || c == 11506))
                : (c <= 42560 || (c < 42564
                  ? c == 42562
                  : (c <= 42564 || c == 42566))))))))
          : (c <= 42568 || (c < 42624
            ? (c < 42588
              ? (c < 42578
                ? (c < 42574
                  ? (c < 42572
                    ? c == 42570
                    : c <= 42572)
                  : (c <= 42574 || c == 42576))
                : (c <= 42578 || (c < 42584
                  ? (c < 42582
                    ? c == 42580
                    : c <= 42582)
                  : (c <= 42584 || c == 42586))))
              : (c <= 42588 || (c < 42598
                ? (c < 42594
                  ? (c < 42592
                    ? c == 42590
                    : c <= 42592)
                  : (c <= 42594 || c == 42596))
                : (c <= 42598 || (c < 42602
                  ? c == 42600
                  : (c <= 42602 || c == 42604))))))
            : (c <= 42624 || (c < 42644
              ? (c < 42634
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || c == 42632))
                : (c <= 42634 || (c < 42640
                  ? (c < 42638
                    ? c == 42636
                    : c <= 42638)
                  : (c <= 42640 || c == 42642))))
              : (c <= 42644 || (c < 42788
                ? (c < 42650
                  ? (c < 42648
                    ? c == 42646
                    : c <= 42648)
                  : (c <= 42650 || c == 42786))
                : (c <= 42788 || (c < 42792
                  ? c == 42790
                  : (c <= 42792 || c == 42794))))))))))
        : (c <= 42796 || (c < 42884
          ? (c < 42836
            ? (c < 42818
              ? (c < 42808
                ? (c < 42804
                  ? (c < 42802
                    ? c == 42798
                    : c <= 42802)
                  : (c <= 42804 || c == 42806))
                : (c <= 42808 || (c < 42814
                  ? (c < 42812
                    ? c == 42810
                    : c <= 42812)
                  : (c <= 42814 || c == 42816))))
              : (c <= 42818 || (c < 42828
                ? (c < 42824
                  ? (c < 42822
                    ? c == 42820
                    : c <= 42822)
                  : (c <= 42824 || c == 42826))
                : (c <= 42828 || (c < 42832
                  ? c == 42830
                  : (c <= 42832 || c == 42834))))))
            : (c <= 42836 || (c < 42856
              ? (c < 42846
                ? (c < 42842
                  ? (c < 42840
                    ? c == 42838
                    : c <= 42840)
                  : (c <= 42842 || c == 42844))
                : (c <= 42846 || (c < 42852
                  ? (c < 42850
                    ? c == 42848
                    : c <= 42850)
                  : (c <= 42852 || c == 42854))))
              : (c <= 42856 || (c < 42875
                ? (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))
                : (c <= 42875 || (c < 42880
                  ? (c >= 42877 && c <= 42878)
                  : (c <= 42880 || c == 42882))))))))
          : (c <= 42884 || (c < 42936
            ? (c < 42910
              ? (c < 42898
                ? (c < 42893
                  ? (c < 42891
                    ? c == 42886
                    : c <= 42891)
                  : (c <= 42893 || c == 42896))
                : (c <= 42898 || (c < 42906
                  ? (c < 42904
                    ? c == 42902
                    : c <= 42904)
                  : (c <= 42906 || c == 42908))))
              : (c <= 42910 || (c < 42920
                ? (c < 42916
                  ? (c < 42914
                    ? c == 42912
                    : c <= 42914)
                  : (c <= 42916 || c == 42918))
                : (c <= 42920 || (c < 42928
                  ? (c >= 42922 && c <= 42926)
                  : (c <= 42932 || c == 42934))))))
            : (c <= 42936 || (c < 42968
              ? (c < 42946
                ? (c < 42942
                  ? (c < 42940
                    ? c == 42938
                    : c <= 42940)
                  : (c <= 42942 || c == 42944))
                : (c <= 42946 || (c < 42960
                  ? (c < 42953
                    ? (c >= 42948 && c <= 42951)
                    : c <= 42953)
                  : (c <= 42960 || c == 42966))))
              : (c <= 42968 || (c < 66928
                ? (c < 66560
                  ? (c < 65313
                    ? c == 42997
                    : c <= 65338)
                  : (c <= 66599 || (c >= 66736 && c <= 66771)))
                : (c <= 66938 || (c < 66956
                  ? (c >= 66940 && c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))))))))))))))));
}

static inline bool sym_key_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < '_'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= '_' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_variable_character_set_1(int32_t c) {
  return (c < 8160
    ? (c < 4349
      ? (c < 661
        ? (c < 445
          ? (c < 223
            ? (c < 181
              ? (c >= 'a' && c <= 'z')
              : c <= 181)
            : (c <= 246 || (c >= 248 && c <= 442)))
          : (c <= 447 || (c < 460
            ? (c < 457
              ? c == 454
              : c <= 457)
            : (c <= 496 || (c >= 499 && c <= 659)))))
        : (c <= 687 || (c < 940
          ? (c < 891
            ? (c < 887
              ? (c >= 881 && c <= 883)
              : c <= 887)
            : (c <= 893 || c == 912))
          : (c <= 1013 || (c < 1376
            ? (c < 1163
              ? (c >= 1016 && c <= 1153)
              : c <= 1327)
            : (c <= 1416 || (c >= 4304 && c <= 4346)))))))
      : (c <= 4351 || (c < 8064
        ? (c < 7545
          ? (c < 7424
            ? (c < 7296
              ? (c >= 5112 && c <= 5117)
              : c <= 7304)
            : (c <= 7467 || (c >= 7531 && c <= 7543)))
          : (c <= 7578 || (c < 8016
            ? (c < 7968
              ? (c >= 7681 && c <= 7957)
              : c <= 8005)
            : (c <= 8023 || (c >= 8032 && c <= 8061)))))
        : (c <= 8071 || (c < 8126
          ? (c < 8112
            ? (c < 8096
              ? (c >= 8080 && c <= 8087)
              : c <= 8103)
            : (c <= 8116 || (c >= 8118 && c <= 8119)))
          : (c <= 8126 || (c < 8144
            ? (c < 8134
              ? (c >= 8130 && c <= 8132)
              : c <= 8135)
            : (c <= 8147 || (c >= 8150 && c <= 8151)))))))))
    : (c <= 8167 || (c < 42865
      ? (c < 11312
        ? (c < 8505
          ? (c < 8458
            ? (c < 8182
              ? (c >= 8178 && c <= 8180)
              : c <= 8183)
            : (c <= 8467 || (c >= 8495 && c <= 8500)))
          : (c <= 8505 || (c < 8526
            ? (c < 8518
              ? (c >= 8508 && c <= 8509)
              : c <= 8521)
            : (c <= 8526 || c == 8580))))
        : (c <= 11387 || (c < 11559
          ? (c < 11507
            ? (c < 11500
              ? (c >= 11393 && c <= 11492)
              : c <= 11502)
            : (c <= 11507 || (c >= 11520 && c <= 11557)))
          : (c <= 11559 || (c < 42625
            ? (c < 42561
              ? c == 11565
              : c <= 42605)
            : (c <= 42651 || (c >= 42787 && c <= 42863)))))))
      : (c <= 42887 || (c < 43888
        ? (c < 42965
          ? (c < 42961
            ? (c < 42897
              ? (c >= 42892 && c <= 42894)
              : c <= 42954)
            : (c <= 42961 || c == 42963))
          : (c <= 42969 || (c < 43824
            ? (c < 43002
              ? c == 42998
              : c <= 43002)
            : (c <= 43866 || (c >= 43872 && c <= 43880)))))
        : (c <= 43967 || (c < 66776
          ? (c < 65345
            ? (c < 64275
              ? (c >= 64256 && c <= 64262)
              : c <= 64279)
            : (c <= 65370 || (c >= 66600 && c <= 66639)))
          : (c <= 66811 || (c < 66995
            ? (c < 66979
              ? (c >= 66967 && c <= 66977)
              : c <= 66993)
            : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))));
}

static inline bool sym_var_pattern_character_set_1(int32_t c) {
  return (c < 7749
    ? (c < 987
      ? (c < 424
        ? (c < 326
          ? (c < 287
            ? (c < 267
              ? (c < 257
                ? (c < 223
                  ? (c < 181
                    ? (c >= 'a' && c <= 'z')
                    : c <= 181)
                  : (c <= 246 || (c >= 248 && c <= 255)))
                : (c <= 257 || (c < 263
                  ? (c < 261
                    ? c == 259
                    : c <= 261)
                  : (c <= 263 || c == 265))))
              : (c <= 267 || (c < 277
                ? (c < 273
                  ? (c < 271
                    ? c == 269
                    : c <= 271)
                  : (c <= 273 || c == 275))
                : (c <= 277 || (c < 283
                  ? (c < 281
                    ? c == 279
                    : c <= 281)
                  : (c <= 283 || c == 285))))))
            : (c <= 287 || (c < 307
              ? (c < 297
                ? (c < 293
                  ? (c < 291
                    ? c == 289
                    : c <= 291)
                  : (c <= 293 || c == 295))
                : (c <= 297 || (c < 303
                  ? (c < 301
                    ? c == 299
                    : c <= 301)
                  : (c <= 303 || c == 305))))
              : (c <= 307 || (c < 318
                ? (c < 314
                  ? (c < 311
                    ? c == 309
                    : c <= 312)
                  : (c <= 314 || c == 316))
                : (c <= 318 || (c < 322
                  ? c == 320
                  : (c <= 322 || c == 324))))))))
          : (c <= 326 || (c < 367
            ? (c < 347
              ? (c < 337
                ? (c < 333
                  ? (c < 331
                    ? (c >= 328 && c <= 329)
                    : c <= 331)
                  : (c <= 333 || c == 335))
                : (c <= 337 || (c < 343
                  ? (c < 341
                    ? c == 339
                    : c <= 341)
                  : (c <= 343 || c == 345))))
              : (c <= 347 || (c < 357
                ? (c < 353
                  ? (c < 351
                    ? c == 349
                    : c <= 351)
                  : (c <= 353 || c == 355))
                : (c <= 357 || (c < 363
                  ? (c < 361
                    ? c == 359
                    : c <= 361)
                  : (c <= 363 || c == 365))))))
            : (c <= 367 || (c < 392
              ? (c < 378
                ? (c < 373
                  ? (c < 371
                    ? c == 369
                    : c <= 371)
                  : (c <= 373 || c == 375))
                : (c <= 378 || (c < 387
                  ? (c < 382
                    ? c == 380
                    : c <= 384)
                  : (c <= 387 || c == 389))))
              : (c <= 392 || (c < 414
                ? (c < 405
                  ? (c < 402
                    ? (c >= 396 && c <= 397)
                    : c <= 402)
                  : (c <= 405 || (c >= 409 && c <= 411)))
                : (c <= 414 || (c < 419
                  ? c == 417
                  : (c <= 419 || c == 421))))))))))
        : (c <= 424 || (c < 523
          ? (c < 481
            ? (c < 460
              ? (c < 438
                ? (c < 432
                  ? (c < 429
                    ? (c >= 426 && c <= 427)
                    : c <= 429)
                  : (c <= 432 || c == 436))
                : (c <= 438 || (c < 454
                  ? (c < 445
                    ? (c >= 441 && c <= 442)
                    : c <= 447)
                  : (c <= 454 || c == 457))))
              : (c <= 460 || (c < 470
                ? (c < 466
                  ? (c < 464
                    ? c == 462
                    : c <= 464)
                  : (c <= 466 || c == 468))
                : (c <= 470 || (c < 476
                  ? (c < 474
                    ? c == 472
                    : c <= 474)
                  : (c <= 477 || c == 479))))))
            : (c <= 481 || (c < 505
              ? (c < 491
                ? (c < 487
                  ? (c < 485
                    ? c == 483
                    : c <= 485)
                  : (c <= 487 || c == 489))
                : (c <= 491 || (c < 499
                  ? (c < 495
                    ? c == 493
                    : c <= 496)
                  : (c <= 499 || c == 501))))
              : (c <= 505 || (c < 515
                ? (c < 511
                  ? (c < 509
                    ? c == 507
                    : c <= 509)
                  : (c <= 511 || c == 513))
                : (c <= 515 || (c < 519
                  ? c == 517
                  : (c <= 519 || c == 521))))))))
          : (c <= 523 || (c < 563
            ? (c < 543
              ? (c < 533
                ? (c < 529
                  ? (c < 527
                    ? c == 525
                    : c <= 527)
                  : (c <= 529 || c == 531))
                : (c <= 533 || (c < 539
                  ? (c < 537
                    ? c == 535
                    : c <= 537)
                  : (c <= 539 || c == 541))))
              : (c <= 543 || (c < 553
                ? (c < 549
                  ? (c < 547
                    ? c == 545
                    : c <= 547)
                  : (c <= 549 || c == 551))
                : (c <= 553 || (c < 559
                  ? (c < 557
                    ? c == 555
                    : c <= 557)
                  : (c <= 559 || c == 561))))))
            : (c <= 569 || (c < 881
              ? (c < 585
                ? (c < 578
                  ? (c < 575
                    ? c == 572
                    : c <= 576)
                  : (c <= 578 || c == 583))
                : (c <= 585 || (c < 591
                  ? (c < 589
                    ? c == 587
                    : c <= 589)
                  : (c <= 659 || (c >= 661 && c <= 687)))))
              : (c <= 881 || (c < 940
                ? (c < 891
                  ? (c < 887
                    ? c == 883
                    : c <= 887)
                  : (c <= 893 || c == 912))
                : (c <= 974 || (c < 981
                  ? (c >= 976 && c <= 977)
                  : (c <= 983 || c == 985))))))))))))
      : (c <= 987 || (c < 1257
        ? (c < 1177
          ? (c < 1131
            ? (c < 1007
              ? (c < 997
                ? (c < 993
                  ? (c < 991
                    ? c == 989
                    : c <= 991)
                  : (c <= 993 || c == 995))
                : (c <= 997 || (c < 1003
                  ? (c < 1001
                    ? c == 999
                    : c <= 1001)
                  : (c <= 1003 || c == 1005))))
              : (c <= 1011 || (c < 1121
                ? (c < 1019
                  ? (c < 1016
                    ? c == 1013
                    : c <= 1016)
                  : (c <= 1020 || (c >= 1072 && c <= 1119)))
                : (c <= 1121 || (c < 1127
                  ? (c < 1125
                    ? c == 1123
                    : c <= 1125)
                  : (c <= 1127 || c == 1129))))))
            : (c <= 1131 || (c < 1151
              ? (c < 1141
                ? (c < 1137
                  ? (c < 1135
                    ? c == 1133
                    : c <= 1135)
                  : (c <= 1137 || c == 1139))
                : (c <= 1141 || (c < 1147
                  ? (c < 1145
                    ? c == 1143
                    : c <= 1145)
                  : (c <= 1147 || c == 1149))))
              : (c <= 1151 || (c < 1169
                ? (c < 1165
                  ? (c < 1163
                    ? c == 1153
                    : c <= 1163)
                  : (c <= 1165 || c == 1167))
                : (c <= 1169 || (c < 1173
                  ? c == 1171
                  : (c <= 1173 || c == 1175))))))))
          : (c <= 1177 || (c < 1218
            ? (c < 1197
              ? (c < 1187
                ? (c < 1183
                  ? (c < 1181
                    ? c == 1179
                    : c <= 1181)
                  : (c <= 1183 || c == 1185))
                : (c <= 1187 || (c < 1193
                  ? (c < 1191
                    ? c == 1189
                    : c <= 1191)
                  : (c <= 1193 || c == 1195))))
              : (c <= 1197 || (c < 1207
                ? (c < 1203
                  ? (c < 1201
                    ? c == 1199
                    : c <= 1201)
                  : (c <= 1203 || c == 1205))
                : (c <= 1207 || (c < 1213
                  ? (c < 1211
                    ? c == 1209
                    : c <= 1211)
                  : (c <= 1213 || c == 1215))))))
            : (c <= 1218 || (c < 1239
              ? (c < 1228
                ? (c < 1224
                  ? (c < 1222
                    ? c == 1220
                    : c <= 1222)
                  : (c <= 1224 || c == 1226))
                : (c <= 1228 || (c < 1235
                  ? (c < 1233
                    ? (c >= 1230 && c <= 1231)
                    : c <= 1233)
                  : (c <= 1235 || c == 1237))))
              : (c <= 1239 || (c < 1249
                ? (c < 1245
                  ? (c < 1243
                    ? c == 1241
                    : c <= 1243)
                  : (c <= 1245 || c == 1247))
                : (c <= 1249 || (c < 1253
                  ? c == 1251
                  : (c <= 1253 || c == 1255))))))))))
        : (c <= 1257 || (c < 5112
          ? (c < 1297
            ? (c < 1277
              ? (c < 1267
                ? (c < 1263
                  ? (c < 1261
                    ? c == 1259
                    : c <= 1261)
                  : (c <= 1263 || c == 1265))
                : (c <= 1267 || (c < 1273
                  ? (c < 1271
                    ? c == 1269
                    : c <= 1271)
                  : (c <= 1273 || c == 1275))))
              : (c <= 1277 || (c < 1287
                ? (c < 1283
                  ? (c < 1281
                    ? c == 1279
                    : c <= 1281)
                  : (c <= 1283 || c == 1285))
                : (c <= 1287 || (c < 1293
                  ? (c < 1291
                    ? c == 1289
                    : c <= 1291)
                  : (c <= 1293 || c == 1295))))))
            : (c <= 1297 || (c < 1317
              ? (c < 1307
                ? (c < 1303
                  ? (c < 1301
                    ? c == 1299
                    : c <= 1301)
                  : (c <= 1303 || c == 1305))
                : (c <= 1307 || (c < 1313
                  ? (c < 1311
                    ? c == 1309
                    : c <= 1311)
                  : (c <= 1313 || c == 1315))))
              : (c <= 1317 || (c < 1327
                ? (c < 1323
                  ? (c < 1321
                    ? c == 1319
                    : c <= 1321)
                  : (c <= 1323 || c == 1325))
                : (c <= 1327 || (c < 4304
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 4346 || (c >= 4349 && c <= 4351)))))))))
          : (c <= 5117 || (c < 7711
            ? (c < 7691
              ? (c < 7681
                ? (c < 7531
                  ? (c < 7424
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7467)
                  : (c <= 7543 || (c >= 7545 && c <= 7578)))
                : (c <= 7681 || (c < 7687
                  ? (c < 7685
                    ? c == 7683
                    : c <= 7685)
                  : (c <= 7687 || c == 7689))))
              : (c <= 7691 || (c < 7701
                ? (c < 7697
                  ? (c < 7695
                    ? c == 7693
                    : c <= 7695)
                  : (c <= 7697 || c == 7699))
                : (c <= 7701 || (c < 7707
                  ? (c < 7705
                    ? c == 7703
                    : c <= 7705)
                  : (c <= 7707 || c == 7709))))))
            : (c <= 7711 || (c < 7731
              ? (c < 7721
                ? (c < 7717
                  ? (c < 7715
                    ? c == 7713
                    : c <= 7715)
                  : (c <= 7717 || c == 7719))
                : (c <= 7721 || (c < 7727
                  ? (c < 7725
                    ? c == 7723
                    : c <= 7725)
                  : (c <= 7727 || c == 7729))))
              : (c <= 7731 || (c < 7741
                ? (c < 7737
                  ? (c < 7735
                    ? c == 7733
                    : c <= 7735)
                  : (c <= 7737 || c == 7739))
                : (c <= 7741 || (c < 7745
                  ? c == 7743
                  : (c <= 7745 || c == 7747))))))))))))))
    : (c <= 7749 || (c < 11447
      ? (c < 7913
        ? (c < 7827
          ? (c < 7789
            ? (c < 7769
              ? (c < 7759
                ? (c < 7755
                  ? (c < 7753
                    ? c == 7751
                    : c <= 7753)
                  : (c <= 7755 || c == 7757))
                : (c <= 7759 || (c < 7765
                  ? (c < 7763
                    ? c == 7761
                    : c <= 7763)
                  : (c <= 7765 || c == 7767))))
              : (c <= 7769 || (c < 7779
                ? (c < 7775
                  ? (c < 7773
                    ? c == 7771
                    : c <= 7773)
                  : (c <= 7775 || c == 7777))
                : (c <= 7779 || (c < 7785
                  ? (c < 7783
                    ? c == 7781
                    : c <= 7783)
                  : (c <= 7785 || c == 7787))))))
            : (c <= 7789 || (c < 7809
              ? (c < 7799
                ? (c < 7795
                  ? (c < 7793
                    ? c == 7791
                    : c <= 7793)
                  : (c <= 7795 || c == 7797))
                : (c <= 7799 || (c < 7805
                  ? (c < 7803
                    ? c == 7801
                    : c <= 7803)
                  : (c <= 7805 || c == 7807))))
              : (c <= 7809 || (c < 7819
                ? (c < 7815
                  ? (c < 7813
                    ? c == 7811
                    : c <= 7813)
                  : (c <= 7815 || c == 7817))
                : (c <= 7819 || (c < 7823
                  ? c == 7821
                  : (c <= 7823 || c == 7825))))))))
          : (c <= 7827 || (c < 7875
            ? (c < 7855
              ? (c < 7845
                ? (c < 7841
                  ? (c < 7839
                    ? (c >= 7829 && c <= 7837)
                    : c <= 7839)
                  : (c <= 7841 || c == 7843))
                : (c <= 7845 || (c < 7851
                  ? (c < 7849
                    ? c == 7847
                    : c <= 7849)
                  : (c <= 7851 || c == 7853))))
              : (c <= 7855 || (c < 7865
                ? (c < 7861
                  ? (c < 7859
                    ? c == 7857
                    : c <= 7859)
                  : (c <= 7861 || c == 7863))
                : (c <= 7865 || (c < 7871
                  ? (c < 7869
                    ? c == 7867
                    : c <= 7869)
                  : (c <= 7871 || c == 7873))))))
            : (c <= 7875 || (c < 7895
              ? (c < 7885
                ? (c < 7881
                  ? (c < 7879
                    ? c == 7877
                    : c <= 7879)
                  : (c <= 7881 || c == 7883))
                : (c <= 7885 || (c < 7891
                  ? (c < 7889
                    ? c == 7887
                    : c <= 7889)
                  : (c <= 7891 || c == 7893))))
              : (c <= 7895 || (c < 7905
                ? (c < 7901
                  ? (c < 7899
                    ? c == 7897
                    : c <= 7899)
                  : (c <= 7901 || c == 7903))
                : (c <= 7905 || (c < 7909
                  ? c == 7907
                  : (c <= 7909 || c == 7911))))))))))
        : (c <= 7913 || (c < 8518
          ? (c < 8080
            ? (c < 7933
              ? (c < 7923
                ? (c < 7919
                  ? (c < 7917
                    ? c == 7915
                    : c <= 7917)
                  : (c <= 7919 || c == 7921))
                : (c <= 7923 || (c < 7929
                  ? (c < 7927
                    ? c == 7925
                    : c <= 7927)
                  : (c <= 7929 || c == 7931))))
              : (c <= 7933 || (c < 8000
                ? (c < 7968
                  ? (c < 7952
                    ? (c >= 7935 && c <= 7943)
                    : c <= 7957)
                  : (c <= 7975 || (c >= 7984 && c <= 7991)))
                : (c <= 8005 || (c < 8048
                  ? (c < 8032
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8039)
                  : (c <= 8061 || (c >= 8064 && c <= 8071)))))))
            : (c <= 8087 || (c < 8178
              ? (c < 8130
                ? (c < 8118
                  ? (c < 8112
                    ? (c >= 8096 && c <= 8103)
                    : c <= 8116)
                  : (c <= 8119 || c == 8126))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8135)
                    : c <= 8147)
                  : (c <= 8151 || (c >= 8160 && c <= 8167)))))
              : (c <= 8180 || (c < 8495
                ? (c < 8462
                  ? (c < 8458
                    ? (c >= 8182 && c <= 8183)
                    : c <= 8458)
                  : (c <= 8463 || c == 8467))
                : (c <= 8495 || (c < 8505
                  ? c == 8500
                  : (c <= 8505 || (c >= 8508 && c <= 8509)))))))))
          : (c <= 8521 || (c < 11409
            ? (c < 11379
              ? (c < 11365
                ? (c < 11312
                  ? (c < 8580
                    ? c == 8526
                    : c <= 8580)
                  : (c <= 11359 || c == 11361))
                : (c <= 11366 || (c < 11372
                  ? (c < 11370
                    ? c == 11368
                    : c <= 11370)
                  : (c <= 11372 || c == 11377))))
              : (c <= 11380 || (c < 11399
                ? (c < 11395
                  ? (c < 11393
                    ? (c >= 11382 && c <= 11387)
                    : c <= 11393)
                  : (c <= 11395 || c == 11397))
                : (c <= 11399 || (c < 11405
                  ? (c < 11403
                    ? c == 11401
                    : c <= 11403)
                  : (c <= 11405 || c == 11407))))))
            : (c <= 11409 || (c < 11429
              ? (c < 11419
                ? (c < 11415
                  ? (c < 11413
                    ? c == 11411
                    : c <= 11413)
                  : (c <= 11415 || c == 11417))
                : (c <= 11419 || (c < 11425
                  ? (c < 11423
                    ? c == 11421
                    : c <= 11423)
                  : (c <= 11425 || c == 11427))))
              : (c <= 11429 || (c < 11439
                ? (c < 11435
                  ? (c < 11433
                    ? c == 11431
                    : c <= 11433)
                  : (c <= 11435 || c == 11437))
                : (c <= 11439 || (c < 11443
                  ? c == 11441
                  : (c <= 11443 || c == 11445))))))))))))
      : (c <= 11447 || (c < 42813
        ? (c < 42581
          ? (c < 11487
            ? (c < 11467
              ? (c < 11457
                ? (c < 11453
                  ? (c < 11451
                    ? c == 11449
                    : c <= 11451)
                  : (c <= 11453 || c == 11455))
                : (c <= 11457 || (c < 11463
                  ? (c < 11461
                    ? c == 11459
                    : c <= 11461)
                  : (c <= 11463 || c == 11465))))
              : (c <= 11467 || (c < 11477
                ? (c < 11473
                  ? (c < 11471
                    ? c == 11469
                    : c <= 11471)
                  : (c <= 11473 || c == 11475))
                : (c <= 11477 || (c < 11483
                  ? (c < 11481
                    ? c == 11479
                    : c <= 11481)
                  : (c <= 11483 || c == 11485))))))
            : (c <= 11487 || (c < 42563
              ? (c < 11507
                ? (c < 11500
                  ? (c < 11491
                    ? c == 11489
                    : c <= 11492)
                  : (c <= 11500 || c == 11502))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || c == 42561))))
              : (c <= 42563 || (c < 42573
                ? (c < 42569
                  ? (c < 42567
                    ? c == 42565
                    : c <= 42567)
                  : (c <= 42569 || c == 42571))
                : (c <= 42573 || (c < 42577
                  ? c == 42575
                  : (c <= 42577 || c == 42579))))))))
          : (c <= 42581 || (c < 42639
            ? (c < 42601
              ? (c < 42591
                ? (c < 42587
                  ? (c < 42585
                    ? c == 42583
                    : c <= 42585)
                  : (c <= 42587 || c == 42589))
                : (c <= 42591 || (c < 42597
                  ? (c < 42595
                    ? c == 42593
                    : c <= 42595)
                  : (c <= 42597 || c == 42599))))
              : (c <= 42601 || (c < 42629
                ? (c < 42625
                  ? (c < 42605
                    ? c == 42603
                    : c <= 42605)
                  : (c <= 42625 || c == 42627))
                : (c <= 42629 || (c < 42635
                  ? (c < 42633
                    ? c == 42631
                    : c <= 42633)
                  : (c <= 42635 || c == 42637))))))
            : (c <= 42639 || (c < 42793
              ? (c < 42649
                ? (c < 42645
                  ? (c < 42643
                    ? c == 42641
                    : c <= 42643)
                  : (c <= 42645 || c == 42647))
                : (c <= 42649 || (c < 42789
                  ? (c < 42787
                    ? c == 42651
                    : c <= 42787)
                  : (c <= 42789 || c == 42791))))
              : (c <= 42793 || (c < 42805
                ? (c < 42799
                  ? (c < 42797
                    ? c == 42795
                    : c <= 42797)
                  : (c <= 42801 || c == 42803))
                : (c <= 42805 || (c < 42809
                  ? c == 42807
                  : (c <= 42809 || c == 42811))))))))))
        : (c <= 42813 || (c < 42905
          ? (c < 42853
            ? (c < 42833
              ? (c < 42823
                ? (c < 42819
                  ? (c < 42817
                    ? c == 42815
                    : c <= 42817)
                  : (c <= 42819 || c == 42821))
                : (c <= 42823 || (c < 42829
                  ? (c < 42827
                    ? c == 42825
                    : c <= 42827)
                  : (c <= 42829 || c == 42831))))
              : (c <= 42833 || (c < 42843
                ? (c < 42839
                  ? (c < 42837
                    ? c == 42835
                    : c <= 42837)
                  : (c <= 42839 || c == 42841))
                : (c <= 42843 || (c < 42849
                  ? (c < 42847
                    ? c == 42845
                    : c <= 42847)
                  : (c <= 42849 || c == 42851))))))
            : (c <= 42853 || (c < 42881
              ? (c < 42863
                ? (c < 42859
                  ? (c < 42857
                    ? c == 42855
                    : c <= 42857)
                  : (c <= 42859 || c == 42861))
                : (c <= 42863 || (c < 42876
                  ? (c < 42874
                    ? (c >= 42865 && c <= 42872)
                    : c <= 42874)
                  : (c <= 42876 || c == 42879))))
              : (c <= 42881 || (c < 42894
                ? (c < 42887
                  ? (c < 42885
                    ? c == 42883
                    : c <= 42885)
                  : (c <= 42887 || c == 42892))
                : (c <= 42894 || (c < 42899
                  ? c == 42897
                  : (c <= 42901 || c == 42903))))))))
          : (c <= 42905 || (c < 42961
            ? (c < 42933
              ? (c < 42915
                ? (c < 42911
                  ? (c < 42909
                    ? c == 42907
                    : c <= 42909)
                  : (c <= 42911 || c == 42913))
                : (c <= 42915 || (c < 42921
                  ? (c < 42919
                    ? c == 42917
                    : c <= 42919)
                  : (c <= 42921 || c == 42927))))
              : (c <= 42933 || (c < 42943
                ? (c < 42939
                  ? (c < 42937
                    ? c == 42935
                    : c <= 42937)
                  : (c <= 42939 || c == 42941))
                : (c <= 42943 || (c < 42952
                  ? (c < 42947
                    ? c == 42945
                    : c <= 42947)
                  : (c <= 42952 || c == 42954))))))
            : (c <= 42961 || (c < 64256
              ? (c < 42998
                ? (c < 42967
                  ? (c < 42965
                    ? c == 42963
                    : c <= 42965)
                  : (c <= 42967 || c == 42969))
                : (c <= 42998 || (c < 43872
                  ? (c < 43824
                    ? c == 43002
                    : c <= 43866)
                  : (c <= 43880 || (c >= 43888 && c <= 43967)))))
              : (c <= 64262 || (c < 66967
                ? (c < 66600
                  ? (c < 65345
                    ? (c >= 64275 && c <= 64279)
                    : c <= 65370)
                  : (c <= 66639 || (c >= 66776 && c <= 66811)))
                : (c <= 66977 || (c < 66995
                  ? (c >= 66979 && c <= 66993)
                  : (c <= 67001 || (c >= 67003 && c <= 67004)))))))))))))))));
}

static inline bool sym_symbol_character_set_1(int32_t c) {
  return (c < 8592
    ? (c < 3199
      ? (c < 885
        ? (c < 174
          ? (c < '^'
            ? (c < '/'
              ? (c < '+'
                ? (c >= '!' && c <= '&')
                : c <= '+')
              : (c <= '@' || c == '\\'))
            : (c <= '~' || (c < 168
              ? (c >= 162 && c <= 166)
              : (c <= 169 || c == 172))))
          : (c <= 177 || (c < 722
            ? (c < 215
              ? (c < 184
                ? c == 180
                : c <= 184)
              : (c <= 247 || (c >= 706 && c <= 709)))
            : (c <= 735 || (c < 749
              ? (c >= 741 && c <= 747)
              : (c <= 749 || (c >= 751 && c <= 767)))))))
        : (c <= 885 || (c < 1789
          ? (c < 1547
            ? (c < 1421
              ? (c < 1014
                ? (c >= 900 && c <= 901)
                : c <= 1154)
              : (c <= 1423 || (c >= 1542 && c <= 1544)))
            : (c <= 1547 || (c < 1758
              ? (c >= 1550 && c <= 1551)
              : (c <= 1758 || c == 1769))))
          : (c <= 1790 || (c < 2554
            ? (c < 2184
              ? (c < 2046
                ? c == 2038
                : c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))
            : (c <= 2555 || (c < 2928
              ? c == 2801
              : (c <= 2928 || (c >= 3059 && c <= 3066)))))))))
      : (c <= 3199 || (c < 6107
        ? (c < 3894
          ? (c < 3859
            ? (c < 3647
              ? (c < 3449
                ? c == 3407
                : c <= 3449)
              : (c <= 3647 || (c >= 3841 && c <= 3843)))
            : (c <= 3859 || (c < 3866
              ? (c >= 3861 && c <= 3863)
              : (c <= 3871 || c == 3892))))
          : (c <= 3894 || (c < 4053
            ? (c < 4039
              ? (c < 4030
                ? c == 3896
                : c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))
            : (c <= 4056 || (c < 5008
              ? (c >= 4254 && c <= 4255)
              : (c <= 5017 || c == 5741))))))
        : (c <= 6107 || (c < 8260
          ? (c < 8125
            ? (c < 7009
              ? (c < 6622
                ? c == 6464
                : c <= 6655)
              : (c <= 7018 || (c >= 7028 && c <= 7036)))
            : (c <= 8129 || (c < 8157
              ? (c >= 8141 && c <= 8143)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))))
          : (c <= 8260 || (c < 8352
            ? (c < 8314
              ? c == 8274
              : (c <= 8316 || (c >= 8330 && c <= 8332)))
            : (c <= 8384 || (c < 8506
              ? (c >= 8448 && c <= 8494)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))))))))
    : (c <= 8967 || (c < 19904
      ? (c < 12032
        ? (c < 10649
          ? (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10183
              ? (c >= 10132 && c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))))
          : (c <= 10711 || (c < 11493
            ? (c < 11126
              ? (c < 10750
                ? (c >= 10716 && c <= 10747)
                : c <= 11123)
              : (c <= 11157 || (c >= 11159 && c <= 11263)))
            : (c <= 11498 || (c < 11904
              ? (c >= 11856 && c <= 11857)
              : (c <= 11929 || (c >= 11931 && c <= 12019)))))))
        : (c <= 12245 || (c < 12694
          ? (c < 12342
            ? (c < 12306
              ? (c < 12292
                ? (c >= 12272 && c <= 12283)
                : c <= 12292)
              : (c <= 12307 || c == 12320))
            : (c <= 12343 || (c < 12443
              ? (c >= 12350 && c <= 12351)
              : (c <= 12444 || (c >= 12688 && c <= 12689)))))
          : (c <= 12703 || (c < 12880
            ? (c < 12800
              ? (c >= 12736 && c <= 12771)
              : (c <= 12830 || (c >= 12842 && c <= 12871)))
            : (c <= 12880 || (c < 12938
              ? (c >= 12896 && c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))))))))
      : (c <= 19967 || (c < 65284
        ? (c < 43882
          ? (c < 43048
            ? (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))
            : (c <= 43051 || (c < 43639
              ? (c >= 43062 && c <= 43065)
              : (c <= 43641 || c == 43867))))
          : (c <= 43883 || (c < 65020
            ? (c < 64832
              ? (c < 64434
                ? c == 64297
                : c <= 64450)
              : (c <= 64847 || c == 64975))
            : (c <= 65023 || (c < 65124
              ? c == 65122
              : (c <= 65126 || c == 65129))))))
        : (c <= 65284 || (c < 65532
          ? (c < 65372
            ? (c < 65342
              ? (c < 65308
                ? c == 65291
                : c <= 65310)
              : (c <= 65342 || c == 65344))
            : (c <= 65372 || (c < 65504
              ? c == 65374
              : (c <= 65510 || (c >= 65512 && c <= 65518)))))
          : (c <= 65533 || (c < 65936
            ? (c < 65913
              ? (c >= 65847 && c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_2(int32_t c) {
  return (c < 8478
    ? (c < 3059
      ? (c < 749
        ? (c < 168
          ? (c < '\\'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < '<'
                ? c == '/'
                : c <= '@')))
            : (c <= '\\' || (c < '|'
              ? (c < '`'
                ? c == '^'
                : c <= '`')
              : (c <= '~' || (c >= 162 && c <= 166)))))
          : (c <= 169 || (c < 215
            ? (c < 180
              ? (c < 174
                ? c == 172
                : c <= 177)
              : (c <= 180 || c == 184))
            : (c <= 215 || (c < 722
              ? (c < 706
                ? c == 247
                : c <= 709)
              : (c <= 735 || (c >= 741 && c <= 747)))))))
        : (c <= 749 || (c < 1758
          ? (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : c <= 885)
              : (c <= 901 || c == 1014))
            : (c <= 1154 || (c < 1547
              ? (c < 1542
                ? (c >= 1421 && c <= 1423)
                : c <= 1544)
              : (c <= 1547 || (c >= 1550 && c <= 1551)))))
          : (c <= 1758 || (c < 2184
            ? (c < 2038
              ? (c < 1789
                ? c == 1769
                : c <= 1790)
              : (c <= 2038 || (c >= 2046 && c <= 2047)))
            : (c <= 2184 || (c < 2801
              ? (c < 2554
                ? (c >= 2546 && c <= 2547)
                : c <= 2555)
              : (c <= 2801 || c == 2928))))))))
      : (c <= 3066 || (c < 6464
        ? (c < 3894
          ? (c < 3841
            ? (c < 3449
              ? (c < 3407
                ? c == 3199
                : c <= 3407)
              : (c <= 3449 || c == 3647))
            : (c <= 3843 || (c < 3866
              ? (c < 3861
                ? c == 3859
                : c <= 3863)
              : (c <= 3871 || c == 3892))))
          : (c <= 3894 || (c < 4053
            ? (c < 4039
              ? (c < 4030
                ? c == 3896
                : c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))
            : (c <= 4056 || (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))))))
        : (c <= 6464 || (c < 8260
          ? (c < 8127
            ? (c < 7028
              ? (c < 7009
                ? (c >= 6622 && c <= 6655)
                : c <= 7018)
              : (c <= 7036 || c == 8125))
            : (c <= 8129 || (c < 8173
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))))
          : (c <= 8260 || (c < 8448
            ? (c < 8330
              ? (c < 8314
                ? c == 8274
                : c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))
            : (c <= 8449 || (c < 8468
              ? (c < 8456
                ? (c >= 8451 && c <= 8454)
                : c <= 8457)
              : (c <= 8468 || (c >= 8470 && c <= 8472)))))))))))
    : (c <= 8483 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8506
            ? (c < 8489
              ? (c < 8487
                ? c == 8485
                : c <= 8487)
              : (c <= 8489 || c == 8494))
            : (c <= 8507 || (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_3(int32_t c) {
  return (c < 8478
    ? (c < 3059
      ? (c < 749
        ? (c < 168
          ? (c < '\\'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < '<'
                ? c == '/'
                : c <= '@')))
            : (c <= '\\' || (c < '~'
              ? (c < '|'
                ? c == '^'
                : c <= '|')
              : (c <= '~' || (c >= 162 && c <= 166)))))
          : (c <= 169 || (c < 215
            ? (c < 180
              ? (c < 174
                ? c == 172
                : c <= 177)
              : (c <= 180 || c == 184))
            : (c <= 215 || (c < 722
              ? (c < 706
                ? c == 247
                : c <= 709)
              : (c <= 735 || (c >= 741 && c <= 747)))))))
        : (c <= 749 || (c < 1758
          ? (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : c <= 885)
              : (c <= 901 || c == 1014))
            : (c <= 1154 || (c < 1547
              ? (c < 1542
                ? (c >= 1421 && c <= 1423)
                : c <= 1544)
              : (c <= 1547 || (c >= 1550 && c <= 1551)))))
          : (c <= 1758 || (c < 2184
            ? (c < 2038
              ? (c < 1789
                ? c == 1769
                : c <= 1790)
              : (c <= 2038 || (c >= 2046 && c <= 2047)))
            : (c <= 2184 || (c < 2801
              ? (c < 2554
                ? (c >= 2546 && c <= 2547)
                : c <= 2555)
              : (c <= 2801 || c == 2928))))))))
      : (c <= 3066 || (c < 6464
        ? (c < 3894
          ? (c < 3841
            ? (c < 3449
              ? (c < 3407
                ? c == 3199
                : c <= 3407)
              : (c <= 3449 || c == 3647))
            : (c <= 3843 || (c < 3866
              ? (c < 3861
                ? c == 3859
                : c <= 3863)
              : (c <= 3871 || c == 3892))))
          : (c <= 3894 || (c < 4053
            ? (c < 4039
              ? (c < 4030
                ? c == 3896
                : c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))
            : (c <= 4056 || (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))))))
        : (c <= 6464 || (c < 8260
          ? (c < 8127
            ? (c < 7028
              ? (c < 7009
                ? (c >= 6622 && c <= 6655)
                : c <= 7018)
              : (c <= 7036 || c == 8125))
            : (c <= 8129 || (c < 8173
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))))
          : (c <= 8260 || (c < 8448
            ? (c < 8330
              ? (c < 8314
                ? c == 8274
                : c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))
            : (c <= 8449 || (c < 8468
              ? (c < 8456
                ? (c >= 8451 && c <= 8454)
                : c <= 8457)
              : (c <= 8468 || (c >= 8470 && c <= 8472)))))))))))
    : (c <= 8483 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8506
            ? (c < 8489
              ? (c < 8487
                ? c == 8485
                : c <= 8487)
              : (c <= 8489 || c == 8494))
            : (c <= 8507 || (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_4(int32_t c) {
  return (c < 8478
    ? (c < 3059
      ? (c < 749
        ? (c < 168
          ? (c < '<'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || c == '/'))
            : (c <= '@' || (c < '|'
              ? (c < '^'
                ? c == '\\'
                : c <= '^')
              : (c <= '~' || (c >= 162 && c <= 166)))))
          : (c <= 169 || (c < 215
            ? (c < 180
              ? (c < 174
                ? c == 172
                : c <= 177)
              : (c <= 180 || c == 184))
            : (c <= 215 || (c < 722
              ? (c < 706
                ? c == 247
                : c <= 709)
              : (c <= 735 || (c >= 741 && c <= 747)))))))
        : (c <= 749 || (c < 1758
          ? (c < 1154
            ? (c < 900
              ? (c < 885
                ? (c >= 751 && c <= 767)
                : c <= 885)
              : (c <= 901 || c == 1014))
            : (c <= 1154 || (c < 1547
              ? (c < 1542
                ? (c >= 1421 && c <= 1423)
                : c <= 1544)
              : (c <= 1547 || (c >= 1550 && c <= 1551)))))
          : (c <= 1758 || (c < 2184
            ? (c < 2038
              ? (c < 1789
                ? c == 1769
                : c <= 1790)
              : (c <= 2038 || (c >= 2046 && c <= 2047)))
            : (c <= 2184 || (c < 2801
              ? (c < 2554
                ? (c >= 2546 && c <= 2547)
                : c <= 2555)
              : (c <= 2801 || c == 2928))))))))
      : (c <= 3066 || (c < 6464
        ? (c < 3894
          ? (c < 3841
            ? (c < 3449
              ? (c < 3407
                ? c == 3199
                : c <= 3407)
              : (c <= 3449 || c == 3647))
            : (c <= 3843 || (c < 3866
              ? (c < 3861
                ? c == 3859
                : c <= 3863)
              : (c <= 3871 || c == 3892))))
          : (c <= 3894 || (c < 4053
            ? (c < 4039
              ? (c < 4030
                ? c == 3896
                : c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))
            : (c <= 4056 || (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))))))
        : (c <= 6464 || (c < 8260
          ? (c < 8127
            ? (c < 7028
              ? (c < 7009
                ? (c >= 6622 && c <= 6655)
                : c <= 7018)
              : (c <= 7036 || c == 8125))
            : (c <= 8129 || (c < 8173
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8159)
              : (c <= 8175 || (c >= 8189 && c <= 8190)))))
          : (c <= 8260 || (c < 8448
            ? (c < 8330
              ? (c < 8314
                ? c == 8274
                : c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))
            : (c <= 8449 || (c < 8468
              ? (c < 8456
                ? (c >= 8451 && c <= 8454)
                : c <= 8457)
              : (c <= 8468 || (c >= 8470 && c <= 8472)))))))))))
    : (c <= 8483 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8506
            ? (c < 8489
              ? (c < 8487
                ? c == 8485
                : c <= 8487)
              : (c <= 8489 || c == 8494))
            : (c <= 8507 || (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_5(int32_t c) {
  return (c < 8448
    ? (c < 2554
      ? (c < 722
        ? (c < '~'
          ? (c < ':'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || c == '/'))
            : (c <= ':' || (c < '^'
              ? (c < '\\'
                ? (c >= '<' && c <= '@')
                : c <= '\\')
              : (c <= '`' || c == '|'))))
          : (c <= '~' || (c < 180
            ? (c < 172
              ? (c < 168
                ? (c >= 162 && c <= 166)
                : c <= 169)
              : (c <= 172 || (c >= 174 && c <= 177)))
            : (c <= 180 || (c < 215
              ? c == 184
              : (c <= 247 || (c >= 706 && c <= 709)))))))
        : (c <= 735 || (c < 1547
          ? (c < 900
            ? (c < 751
              ? (c < 749
                ? (c >= 741 && c <= 747)
                : c <= 749)
              : (c <= 767 || c == 885))
            : (c <= 901 || (c < 1421
              ? (c >= 1014 && c <= 1154)
              : (c <= 1423 || (c >= 1542 && c <= 1544)))))
          : (c <= 1547 || (c < 2038
            ? (c < 1769
              ? (c < 1758
                ? (c >= 1550 && c <= 1551)
                : c <= 1758)
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2184
              ? (c >= 2046 && c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))))))))
      : (c <= 2555 || (c < 4053
        ? (c < 3859
          ? (c < 3407
            ? (c < 3059
              ? (c < 2928
                ? c == 2801
                : c <= 2928)
              : (c <= 3066 || c == 3199))
            : (c <= 3407 || (c < 3647
              ? c == 3449
              : (c <= 3647 || (c >= 3841 && c <= 3843)))))
          : (c <= 3859 || (c < 3896
            ? (c < 3892
              ? (c < 3866
                ? (c >= 3861 && c <= 3863)
                : c <= 3871)
              : (c <= 3892 || c == 3894))
            : (c <= 3896 || (c < 4039
              ? (c >= 4030 && c <= 4037)
              : (c <= 4044 || (c >= 4046 && c <= 4047)))))))
        : (c <= 4056 || (c < 8125
          ? (c < 6464
            ? (c < 5741
              ? (c < 5008
                ? (c >= 4254 && c <= 4255)
                : c <= 5017)
              : (c <= 5741 || c == 6107))
            : (c <= 6464 || (c < 7009
              ? (c >= 6622 && c <= 6655)
              : (c <= 7018 || (c >= 7028 && c <= 7036)))))
          : (c <= 8129 || (c < 8274
            ? (c < 8189
              ? (c < 8157
                ? (c >= 8141 && c <= 8143)
                : c <= 8175)
              : (c <= 8190 || c == 8260))
            : (c <= 8274 || (c < 8330
              ? (c >= 8314 && c <= 8316)
              : (c <= 8332 || (c >= 8352 && c <= 8384)))))))))))
    : (c <= 8494 || (c < 12992
      ? (c < 11904
        ? (c < 10183
          ? (c < 9003
            ? (c < 8592
              ? (c < 8586
                ? (c >= 8506 && c <= 8527)
                : c <= 8587)
              : (c <= 8967 || (c >= 8972 && c <= 9000)))
            : (c <= 9254 || (c < 9472
              ? (c < 9372
                ? (c >= 9280 && c <= 9290)
                : c <= 9449)
              : (c <= 10087 || (c >= 10132 && c <= 10180)))))
          : (c <= 10213 || (c < 11126
            ? (c < 10716
              ? (c < 10649
                ? (c >= 10224 && c <= 10626)
                : c <= 10711)
              : (c <= 10747 || (c >= 10750 && c <= 11123)))
            : (c <= 11157 || (c < 11493
              ? (c >= 11159 && c <= 11263)
              : (c <= 11498 || (c >= 11856 && c <= 11857)))))))
        : (c <= 11929 || (c < 12443
          ? (c < 12306
            ? (c < 12272
              ? (c < 12032
                ? (c >= 11931 && c <= 12019)
                : c <= 12245)
              : (c <= 12283 || c == 12292))
            : (c <= 12307 || (c < 12342
              ? c == 12320
              : (c <= 12343 || (c >= 12350 && c <= 12351)))))
          : (c <= 12444 || (c < 12842
            ? (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))
            : (c <= 12871 || (c < 12896
              ? c == 12880
              : (c <= 12927 || (c >= 12938 && c <= 12976)))))))))
      : (c <= 13311 || (c < 65129
        ? (c < 43867
          ? (c < 42889
            ? (c < 42752
              ? (c < 42128
                ? (c >= 19904 && c <= 19967)
                : c <= 42182)
              : (c <= 42774 || (c >= 42784 && c <= 42785)))
            : (c <= 42890 || (c < 43062
              ? (c >= 43048 && c <= 43051)
              : (c <= 43065 || (c >= 43639 && c <= 43641)))))
          : (c <= 43867 || (c < 64975
            ? (c < 64434
              ? (c < 64297
                ? (c >= 43882 && c <= 43883)
                : c <= 64297)
              : (c <= 64450 || (c >= 64832 && c <= 64847)))
            : (c <= 64975 || (c < 65122
              ? (c >= 65020 && c <= 65023)
              : (c <= 65122 || (c >= 65124 && c <= 65126)))))))
        : (c <= 65129 || (c < 65512
          ? (c < 65344
            ? (c < 65308
              ? (c < 65291
                ? c == 65284
                : c <= 65291)
              : (c <= 65310 || c == 65342))
            : (c <= 65344 || (c < 65374
              ? c == 65372
              : (c <= 65374 || (c >= 65504 && c <= 65510)))))
          : (c <= 65518 || (c < 65936
            ? (c < 65913
              ? (c < 65847
                ? (c >= 65532 && c <= 65533)
                : c <= 65855)
              : (c <= 65929 || (c >= 65932 && c <= 65934)))
            : (c <= 65948 || (c < 66000
              ? c == 65952
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_6(int32_t c) {
  return (c < 8470
    ? (c < 2801
      ? (c < 722
        ? (c < '~'
          ? (c < '<'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < ':'
                ? c == '/'
                : c <= ':')))
            : (c <= '@' || (c < '`'
              ? (c < '^'
                ? c == '\\'
                : c <= '^')
              : (c <= '`' || c == '|'))))
          : (c <= '~' || (c < 180
            ? (c < 172
              ? (c < 168
                ? (c >= 162 && c <= 166)
                : c <= 169)
              : (c <= 172 || (c >= 174 && c <= 177)))
            : (c <= 180 || (c < 247
              ? (c < 215
                ? c == 184
                : c <= 215)
              : (c <= 247 || (c >= 706 && c <= 709)))))))
        : (c <= 735 || (c < 1547
          ? (c < 900
            ? (c < 751
              ? (c < 749
                ? (c >= 741 && c <= 747)
                : c <= 749)
              : (c <= 767 || c == 885))
            : (c <= 901 || (c < 1421
              ? (c < 1154
                ? c == 1014
                : c <= 1154)
              : (c <= 1423 || (c >= 1542 && c <= 1544)))))
          : (c <= 1547 || (c < 2038
            ? (c < 1769
              ? (c < 1758
                ? (c >= 1550 && c <= 1551)
                : c <= 1758)
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2546
              ? (c < 2184
                ? (c >= 2046 && c <= 2047)
                : c <= 2184)
              : (c <= 2547 || (c >= 2554 && c <= 2555)))))))))
      : (c <= 2801 || (c < 6107
        ? (c < 3892
          ? (c < 3647
            ? (c < 3199
              ? (c < 3059
                ? c == 2928
                : c <= 3066)
              : (c <= 3199 || (c < 3449
                ? c == 3407
                : c <= 3449)))
            : (c <= 3647 || (c < 3861
              ? (c < 3859
                ? (c >= 3841 && c <= 3843)
                : c <= 3859)
              : (c <= 3863 || (c >= 3866 && c <= 3871)))))
          : (c <= 3892 || (c < 4046
            ? (c < 4030
              ? (c < 3896
                ? c == 3894
                : c <= 3896)
              : (c <= 4037 || (c >= 4039 && c <= 4044)))
            : (c <= 4047 || (c < 5008
              ? (c < 4254
                ? (c >= 4053 && c <= 4056)
                : c <= 4255)
              : (c <= 5017 || c == 5741))))))
        : (c <= 6107 || (c < 8189
          ? (c < 8125
            ? (c < 7009
              ? (c < 6622
                ? c == 6464
                : c <= 6655)
              : (c <= 7018 || (c >= 7028 && c <= 7036)))
            : (c <= 8125 || (c < 8157
              ? (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)
              : (c <= 8159 || (c >= 8173 && c <= 8175)))))
          : (c <= 8190 || (c < 8352
            ? (c < 8314
              ? (c < 8274
                ? c == 8260
                : c <= 8274)
              : (c <= 8316 || (c >= 8330 && c <= 8332)))
            : (c <= 8384 || (c < 8456
              ? (c < 8451
                ? (c >= 8448 && c <= 8449)
                : c <= 8454)
              : (c <= 8457 || c == 8468))))))))))
    : (c <= 8472 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8506
            ? (c < 8487
              ? (c < 8485
                ? (c >= 8478 && c <= 8483)
                : c <= 8485)
              : (c <= 8487 || (c < 8494
                ? c == 8489
                : c <= 8494)))
            : (c <= 8507 || (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_7(int32_t c) {
  return (c < 8470
    ? (c < 2801
      ? (c < 722
        ? (c < '~'
          ? (c < '<'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < '/'
                ? c == '-'
                : c <= '/')))
            : (c <= '@' || (c < '`'
              ? (c < '^'
                ? c == '\\'
                : c <= '^')
              : (c <= '`' || c == '|'))))
          : (c <= '~' || (c < 180
            ? (c < 172
              ? (c < 168
                ? (c >= 162 && c <= 166)
                : c <= 169)
              : (c <= 172 || (c >= 174 && c <= 177)))
            : (c <= 180 || (c < 247
              ? (c < 215
                ? c == 184
                : c <= 215)
              : (c <= 247 || (c >= 706 && c <= 709)))))))
        : (c <= 735 || (c < 1547
          ? (c < 900
            ? (c < 751
              ? (c < 749
                ? (c >= 741 && c <= 747)
                : c <= 749)
              : (c <= 767 || c == 885))
            : (c <= 901 || (c < 1421
              ? (c < 1154
                ? c == 1014
                : c <= 1154)
              : (c <= 1423 || (c >= 1542 && c <= 1544)))))
          : (c <= 1547 || (c < 2038
            ? (c < 1769
              ? (c < 1758
                ? (c >= 1550 && c <= 1551)
                : c <= 1758)
              : (c <= 1769 || (c >= 1789 && c <= 1790)))
            : (c <= 2038 || (c < 2546
              ? (c < 2184
                ? (c >= 2046 && c <= 2047)
                : c <= 2184)
              : (c <= 2547 || (c >= 2554 && c <= 2555)))))))))
      : (c <= 2801 || (c < 6107
        ? (c < 3892
          ? (c < 3647
            ? (c < 3199
              ? (c < 3059
                ? c == 2928
                : c <= 3066)
              : (c <= 3199 || (c < 3449
                ? c == 3407
                : c <= 3449)))
            : (c <= 3647 || (c < 3861
              ? (c < 3859
                ? (c >= 3841 && c <= 3843)
                : c <= 3859)
              : (c <= 3863 || (c >= 3866 && c <= 3871)))))
          : (c <= 3892 || (c < 4046
            ? (c < 4030
              ? (c < 3896
                ? c == 3894
                : c <= 3896)
              : (c <= 4037 || (c >= 4039 && c <= 4044)))
            : (c <= 4047 || (c < 5008
              ? (c < 4254
                ? (c >= 4053 && c <= 4056)
                : c <= 4255)
              : (c <= 5017 || c == 5741))))))
        : (c <= 6107 || (c < 8189
          ? (c < 8125
            ? (c < 7009
              ? (c < 6622
                ? c == 6464
                : c <= 6655)
              : (c <= 7018 || (c >= 7028 && c <= 7036)))
            : (c <= 8125 || (c < 8157
              ? (c < 8141
                ? (c >= 8127 && c <= 8129)
                : c <= 8143)
              : (c <= 8159 || (c >= 8173 && c <= 8175)))))
          : (c <= 8190 || (c < 8352
            ? (c < 8314
              ? (c < 8274
                ? c == 8260
                : c <= 8274)
              : (c <= 8316 || (c >= 8330 && c <= 8332)))
            : (c <= 8384 || (c < 8456
              ? (c < 8451
                ? (c >= 8448 && c <= 8449)
                : c <= 8454)
              : (c <= 8457 || c == 8468))))))))))
    : (c <= 8472 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8506
            ? (c < 8487
              ? (c < 8485
                ? (c >= 8478 && c <= 8483)
                : c <= 8485)
              : (c <= 8487 || (c < 8494
                ? c == 8489
                : c <= 8494)))
            : (c <= 8507 || (c < 8527
              ? (c < 8522
                ? (c >= 8512 && c <= 8516)
                : c <= 8525)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_8(int32_t c) {
  return (c < 8468
    ? (c < 2554
      ? (c < 706
        ? (c < '|'
          ? (c < ':'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < '/'
                ? c == '-'
                : c <= '/')))
            : (c <= ':' || (c < '^'
              ? (c < '\\'
                ? (c >= '<' && c <= '@')
                : c <= '\\')
              : (c <= '^' || c == '`'))))
          : (c <= '|' || (c < 174
            ? (c < 168
              ? (c < 162
                ? c == '~'
                : c <= 166)
              : (c <= 169 || c == 172))
            : (c <= 177 || (c < 215
              ? (c < 184
                ? c == 180
                : c <= 184)
              : (c <= 215 || c == 247))))))
        : (c <= 709 || (c < 1542
          ? (c < 885
            ? (c < 749
              ? (c < 741
                ? (c >= 722 && c <= 735)
                : c <= 747)
              : (c <= 749 || (c >= 751 && c <= 767)))
            : (c <= 885 || (c < 1154
              ? (c < 1014
                ? (c >= 900 && c <= 901)
                : c <= 1014)
              : (c <= 1154 || (c >= 1421 && c <= 1423)))))
          : (c <= 1544 || (c < 1789
            ? (c < 1758
              ? (c < 1550
                ? c == 1547
                : c <= 1551)
              : (c <= 1758 || c == 1769))
            : (c <= 1790 || (c < 2184
              ? (c < 2046
                ? c == 2038
                : c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))))))))
      : (c <= 2555 || (c < 5741
        ? (c < 3866
          ? (c < 3449
            ? (c < 3059
              ? (c < 2928
                ? c == 2801
                : c <= 2928)
              : (c <= 3066 || (c < 3407
                ? c == 3199
                : c <= 3407)))
            : (c <= 3449 || (c < 3859
              ? (c < 3841
                ? c == 3647
                : c <= 3843)
              : (c <= 3859 || (c >= 3861 && c <= 3863)))))
          : (c <= 3871 || (c < 4039
            ? (c < 3896
              ? (c < 3894
                ? c == 3892
                : c <= 3894)
              : (c <= 3896 || (c >= 4030 && c <= 4037)))
            : (c <= 4044 || (c < 4254
              ? (c < 4053
                ? (c >= 4046 && c <= 4047)
                : c <= 4056)
              : (c <= 4255 || (c >= 5008 && c <= 5017)))))))
        : (c <= 5741 || (c < 8173
          ? (c < 7028
            ? (c < 6622
              ? (c < 6464
                ? c == 6107
                : c <= 6464)
              : (c <= 6655 || (c >= 7009 && c <= 7018)))
            : (c <= 7036 || (c < 8141
              ? (c < 8127
                ? c == 8125
                : c <= 8129)
              : (c <= 8143 || (c >= 8157 && c <= 8159)))))
          : (c <= 8175 || (c < 8330
            ? (c < 8274
              ? (c < 8260
                ? (c >= 8189 && c <= 8190)
                : c <= 8260)
              : (c <= 8274 || (c >= 8314 && c <= 8316)))
            : (c <= 8332 || (c < 8451
              ? (c < 8448
                ? (c >= 8352 && c <= 8384)
                : c <= 8449)
              : (c <= 8454 || (c >= 8456 && c <= 8457)))))))))))
    : (c <= 8468 || (c < 12800
      ? (c < 10649
        ? (c < 8586
          ? (c < 8494
            ? (c < 8485
              ? (c < 8478
                ? (c >= 8470 && c <= 8472)
                : c <= 8483)
              : (c <= 8485 || (c < 8489
                ? c == 8487
                : c <= 8489)))
            : (c <= 8494 || (c < 8522
              ? (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)
              : (c <= 8525 || c == 8527))))
          : (c <= 8587 || (c < 9372
            ? (c < 9003
              ? (c < 8972
                ? (c >= 8592 && c <= 8967)
                : c <= 9000)
              : (c <= 9254 || (c >= 9280 && c <= 9290)))
            : (c <= 9449 || (c < 10183
              ? (c < 10132
                ? (c >= 9472 && c <= 10087)
                : c <= 10180)
              : (c <= 10213 || (c >= 10224 && c <= 10626)))))))
        : (c <= 10711 || (c < 12272
          ? (c < 11493
            ? (c < 11126
              ? (c < 10750
                ? (c >= 10716 && c <= 10747)
                : c <= 11123)
              : (c <= 11157 || (c >= 11159 && c <= 11263)))
            : (c <= 11498 || (c < 11931
              ? (c < 11904
                ? (c >= 11856 && c <= 11857)
                : c <= 11929)
              : (c <= 12019 || (c >= 12032 && c <= 12245)))))
          : (c <= 12283 || (c < 12350
            ? (c < 12320
              ? (c < 12306
                ? c == 12292
                : c <= 12307)
              : (c <= 12320 || (c >= 12342 && c <= 12343)))
            : (c <= 12351 || (c < 12694
              ? (c < 12688
                ? (c >= 12443 && c <= 12444)
                : c <= 12689)
              : (c <= 12703 || (c >= 12736 && c <= 12771)))))))))
      : (c <= 12830 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12896
              ? (c < 12880
                ? (c >= 12842 && c <= 12871)
                : c <= 12880)
              : (c <= 12927 || (c < 12992
                ? (c >= 12938 && c <= 12976)
                : c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static inline bool sym_symbol_character_set_9(int32_t c) {
  return (c < 8468
    ? (c < 2554
      ? (c < 706
        ? (c < '|'
          ? (c < ':'
            ? (c < '*'
              ? (c < '$'
                ? c == '!'
                : c <= '&')
              : (c <= '+' || (c < '/'
                ? c == '-'
                : c <= '/')))
            : (c <= ':' || (c < '^'
              ? (c < '\\'
                ? (c >= '<' && c <= '@')
                : c <= '\\')
              : (c <= '^' || c == '`'))))
          : (c <= '|' || (c < 174
            ? (c < 168
              ? (c < 162
                ? c == '~'
                : c <= 166)
              : (c <= 169 || c == 172))
            : (c <= 177 || (c < 215
              ? (c < 184
                ? c == 180
                : c <= 184)
              : (c <= 215 || c == 247))))))
        : (c <= 709 || (c < 1542
          ? (c < 885
            ? (c < 749
              ? (c < 741
                ? (c >= 722 && c <= 735)
                : c <= 747)
              : (c <= 749 || (c >= 751 && c <= 767)))
            : (c <= 885 || (c < 1154
              ? (c < 1014
                ? (c >= 900 && c <= 901)
                : c <= 1014)
              : (c <= 1154 || (c >= 1421 && c <= 1423)))))
          : (c <= 1544 || (c < 1789
            ? (c < 1758
              ? (c < 1550
                ? c == 1547
                : c <= 1551)
              : (c <= 1758 || c == 1769))
            : (c <= 1790 || (c < 2184
              ? (c < 2046
                ? c == 2038
                : c <= 2047)
              : (c <= 2184 || (c >= 2546 && c <= 2547)))))))))
      : (c <= 2555 || (c < 5008
        ? (c < 3861
          ? (c < 3407
            ? (c < 3059
              ? (c < 2928
                ? c == 2801
                : c <= 2928)
              : (c <= 3066 || c == 3199))
            : (c <= 3407 || (c < 3841
              ? (c < 3647
                ? c == 3449
                : c <= 3647)
              : (c <= 3843 || c == 3859))))
          : (c <= 3863 || (c < 4030
            ? (c < 3894
              ? (c < 3892
                ? (c >= 3866 && c <= 3871)
                : c <= 3892)
              : (c <= 3894 || c == 3896))
            : (c <= 4037 || (c < 4053
              ? (c < 4046
                ? (c >= 4039 && c <= 4044)
                : c <= 4047)
              : (c <= 4056 || (c >= 4254 && c <= 4255)))))))
        : (c <= 5017 || (c < 8173
          ? (c < 7009
            ? (c < 6464
              ? (c < 6107
                ? c == 5741
                : c <= 6107)
              : (c <= 6464 || (c >= 6622 && c <= 6655)))
            : (c <= 7018 || (c < 8141
              ? (c < 8125
                ? (c >= 7028 && c <= 7036)
                : c <= 8129)
              : (c <= 8143 || (c >= 8157 && c <= 8159)))))
          : (c <= 8175 || (c < 8330
            ? (c < 8274
              ? (c < 8260
                ? (c >= 8189 && c <= 8190)
                : c <= 8260)
              : (c <= 8274 || (c >= 8314 && c <= 8316)))
            : (c <= 8332 || (c < 8451
              ? (c < 8448
                ? (c >= 8352 && c <= 8384)
                : c <= 8449)
              : (c <= 8454 || (c >= 8456 && c <= 8457)))))))))))
    : (c <= 8468 || (c < 12842
      ? (c < 10716
        ? (c < 8592
          ? (c < 8494
            ? (c < 8485
              ? (c < 8478
                ? (c >= 8470 && c <= 8472)
                : c <= 8483)
              : (c <= 8485 || (c < 8489
                ? c == 8487
                : c <= 8489)))
            : (c <= 8494 || (c < 8522
              ? (c < 8512
                ? (c >= 8506 && c <= 8507)
                : c <= 8516)
              : (c <= 8527 || (c >= 8586 && c <= 8587)))))
          : (c <= 8967 || (c < 9472
            ? (c < 9280
              ? (c < 9003
                ? (c >= 8972 && c <= 9000)
                : c <= 9254)
              : (c <= 9290 || (c >= 9372 && c <= 9449)))
            : (c <= 10087 || (c < 10224
              ? (c < 10183
                ? (c >= 10132 && c <= 10180)
                : c <= 10213)
              : (c <= 10626 || (c >= 10649 && c <= 10711)))))))
        : (c <= 10747 || (c < 12292
          ? (c < 11856
            ? (c < 11159
              ? (c < 11126
                ? (c >= 10750 && c <= 11123)
                : c <= 11157)
              : (c <= 11263 || (c >= 11493 && c <= 11498)))
            : (c <= 11857 || (c < 12032
              ? (c < 11931
                ? (c >= 11904 && c <= 11929)
                : c <= 12019)
              : (c <= 12245 || (c >= 12272 && c <= 12283)))))
          : (c <= 12292 || (c < 12443
            ? (c < 12342
              ? (c < 12320
                ? (c >= 12306 && c <= 12307)
                : c <= 12320)
              : (c <= 12343 || (c >= 12350 && c <= 12351)))
            : (c <= 12444 || (c < 12736
              ? (c < 12694
                ? (c >= 12688 && c <= 12689)
                : c <= 12703)
              : (c <= 12771 || (c >= 12800 && c <= 12830)))))))))
      : (c <= 12871 || (c < 65122
        ? (c < 43048
          ? (c < 19904
            ? (c < 12938
              ? (c < 12896
                ? c == 12880
                : c <= 12927)
              : (c <= 12976 || (c >= 12992 && c <= 13311)))
            : (c <= 19967 || (c < 42784
              ? (c < 42752
                ? (c >= 42128 && c <= 42182)
                : c <= 42774)
              : (c <= 42785 || (c >= 42889 && c <= 42890)))))
          : (c <= 43051 || (c < 64297
            ? (c < 43867
              ? (c < 43639
                ? (c >= 43062 && c <= 43065)
                : c <= 43641)
              : (c <= 43867 || (c >= 43882 && c <= 43883)))
            : (c <= 64297 || (c < 64975
              ? (c < 64832
                ? (c >= 64434 && c <= 64450)
                : c <= 64847)
              : (c <= 64975 || (c >= 65020 && c <= 65023)))))))
        : (c <= 65122 || (c < 65504
          ? (c < 65308
            ? (c < 65284
              ? (c < 65129
                ? (c >= 65124 && c <= 65126)
                : c <= 65129)
              : (c <= 65284 || c == 65291))
            : (c <= 65310 || (c < 65372
              ? (c < 65344
                ? c == 65342
                : c <= 65344)
              : (c <= 65372 || c == 65374))))
          : (c <= 65510 || (c < 65932
            ? (c < 65847
              ? (c < 65532
                ? (c >= 65512 && c <= 65518)
                : c <= 65533)
              : (c <= 65855 || (c >= 65913 && c <= 65929)))
            : (c <= 65934 || (c < 66000
              ? (c < 65952
                ? (c >= 65936 && c <= 65948)
                : c <= 65952)
              : (c <= 66044 || (c >= 67703 && c <= 67704)))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(41);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(7);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(8);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 10:
      if (sym_var_pattern_character_set_1(lookahead)) ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(45);
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(45);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(7);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_key);
      if (sym_key_character_set_2(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_variable);
      if (sym_key_character_set_2(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_var_pattern);
      if (sym_key_character_set_2(lookahead)) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '_') ADVANCE(8);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '_') ADVANCE(8);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '>') ADVANCE(22);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(43);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '_') ADVANCE(8);
      if (sym_key_character_set_1(lookahead)) ADVANCE(31);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(32);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(18);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '>') ADVANCE(19);
      if (sym_symbol_character_set_8(lookahead)) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_var_pattern_character_set_1(lookahead)) ADVANCE(33);
      if (sym_symbol_character_set_9(lookahead)) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_8(lookahead)) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 14},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 12},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 12},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 13},
  [162] = {.lex_state = 12},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 13},
  [165] = {.lex_state = 13},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_POUND_LBRACE] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [sym_var_pattern] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_pattern] = STATE(161),
    [sym__prec1] = STATE(160),
    [sym_semicolon] = STATE(160),
    [sym_newline_sep] = STATE(160),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__prec1] = STATE(141),
    [sym_semicolon] = STATE(141),
    [sym_newline_sep] = STATE(141),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__prec1] = STATE(140),
    [sym_semicolon] = STATE(140),
    [sym_newline_sep] = STATE(140),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__prec1] = STATE(162),
    [sym_semicolon] = STATE(162),
    [sym_newline_sep] = STATE(162),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [sym_key] = ACTIONS(41),
    [sym_variable] = ACTIONS(39),
    [sym_var_pattern] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_symbol] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__prec1] = STATE(143),
    [sym_semicolon] = STATE(143),
    [sym_newline_sep] = STATE(143),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__prec1] = STATE(142),
    [sym_semicolon] = STATE(142),
    [sym_newline_sep] = STATE(142),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__prec1] = STATE(165),
    [sym_semicolon] = STATE(165),
    [sym_newline_sep] = STATE(165),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__prec1] = STATE(154),
    [sym_semicolon] = STATE(154),
    [sym_newline_sep] = STATE(154),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(45),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__prec1] = STATE(155),
    [sym_semicolon] = STATE(155),
    [sym_newline_sep] = STATE(155),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__prec1] = STATE(157),
    [sym_semicolon] = STATE(157),
    [sym_newline_sep] = STATE(157),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__prec1] = STATE(162),
    [sym_semicolon] = STATE(162),
    [sym_newline_sep] = STATE(162),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(39),
    [anon_sym_LF] = ACTIONS(39),
    [anon_sym_COLON_COLON] = ACTIONS(39),
    [anon_sym_DASH_DASH_GT] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(41),
    [anon_sym_DASH_GT] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [anon_sym_POUND_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE_POUND] = ACTIONS(39),
    [sym_key] = ACTIONS(41),
    [sym_variable] = ACTIONS(39),
    [sym_var_pattern] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [sym_string] = ACTIONS(39),
    [sym_symbol] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__prec1] = STATE(159),
    [sym_semicolon] = STATE(159),
    [sym_newline_sep] = STATE(159),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(81),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__prec1] = STATE(158),
    [sym_semicolon] = STATE(158),
    [sym_newline_sep] = STATE(158),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(37),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__prec1] = STATE(167),
    [sym_semicolon] = STATE(167),
    [sym_newline_sep] = STATE(167),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(83),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__prec1] = STATE(156),
    [sym_semicolon] = STATE(156),
    [sym_newline_sep] = STATE(156),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(43),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__prec1] = STATE(163),
    [sym_semicolon] = STATE(163),
    [sym_newline_sep] = STATE(163),
    [sym__prec2] = STATE(153),
    [sym_long_match] = STATE(153),
    [sym_long_arrow] = STATE(153),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(51),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(35),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__prec1] = STATE(164),
    [sym_semicolon] = STATE(164),
    [sym_newline_sep] = STATE(164),
    [sym__prec2] = STATE(139),
    [sym_long_match] = STATE(139),
    [sym_long_arrow] = STATE(139),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__prec1] = STATE(141),
    [sym_semicolon] = STATE(141),
    [sym_newline_sep] = STATE(141),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__prec2] = STATE(130),
    [sym_long_match] = STATE(130),
    [sym_long_arrow] = STATE(130),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__prec2] = STATE(123),
    [sym_long_match] = STATE(123),
    [sym_long_arrow] = STATE(123),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__prec2] = STATE(125),
    [sym_long_match] = STATE(125),
    [sym_long_arrow] = STATE(125),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__prec1] = STATE(142),
    [sym_semicolon] = STATE(142),
    [sym_newline_sep] = STATE(142),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(45),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__prec1] = STATE(140),
    [sym_semicolon] = STATE(140),
    [sym_newline_sep] = STATE(140),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__prec1] = STATE(166),
    [sym_semicolon] = STATE(166),
    [sym_newline_sep] = STATE(166),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(113),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__prec1] = STATE(143),
    [sym_semicolon] = STATE(143),
    [sym_newline_sep] = STATE(143),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__prec1] = STATE(162),
    [sym_semicolon] = STATE(162),
    [sym_newline_sep] = STATE(162),
    [sym__prec2] = STATE(148),
    [sym_long_match] = STATE(148),
    [sym_long_arrow] = STATE(148),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym__prec2] = STATE(129),
    [sym_long_match] = STATE(129),
    [sym_long_arrow] = STATE(129),
    [sym__prec3] = STATE(113),
    [sym_comma] = STATE(113),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym__prec2] = STATE(150),
    [sym_long_match] = STATE(150),
    [sym_long_arrow] = STATE(150),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(107),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [sym__prec2] = STATE(144),
    [sym_long_match] = STATE(144),
    [sym_long_arrow] = STATE(144),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(109),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [sym__prec2] = STATE(145),
    [sym_long_match] = STATE(145),
    [sym_long_arrow] = STATE(145),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(111),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [sym__prec2] = STATE(149),
    [sym_long_match] = STATE(149),
    [sym_long_arrow] = STATE(149),
    [sym__prec3] = STATE(137),
    [sym_comma] = STATE(137),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(53),
    [anon_sym_DASH_DASH_GT] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(117),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [sym__prec2] = STATE(129),
    [sym_long_match] = STATE(129),
    [sym_long_arrow] = STATE(129),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(117),
    [anon_sym_LF] = ACTIONS(117),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(117),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [sym__prec2] = STATE(125),
    [sym_long_match] = STATE(125),
    [sym_long_arrow] = STATE(125),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LF] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__prec2] = STATE(123),
    [sym_long_match] = STATE(123),
    [sym_long_arrow] = STATE(123),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(109),
    [anon_sym_LF] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(109),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__prec3] = STATE(98),
    [sym_comma] = STATE(98),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_DASH_DASH_GT] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__prec2] = STATE(130),
    [sym_long_match] = STATE(130),
    [sym_long_arrow] = STATE(130),
    [sym__prec3] = STATE(135),
    [sym_comma] = STATE(135),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LF] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [sym__prec3] = STATE(99),
    [sym_comma] = STATE(99),
    [sym__prec4] = STATE(95),
    [sym_infix] = STATE(95),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_DASH_DASH_GT] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(121),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [sym__prec4] = STATE(85),
    [sym_infix] = STATE(85),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_DASH_DASH_GT] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [sym__prec3] = STATE(138),
    [sym_comma] = STATE(138),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_DASH_DASH_GT] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(119),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [sym__prec3] = STATE(134),
    [sym_comma] = STATE(134),
    [sym__prec4] = STATE(120),
    [sym_infix] = STATE(120),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_DASH_DASH_GT] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(121),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [sym__prec4] = STATE(89),
    [sym_infix] = STATE(89),
    [sym__prec5] = STATE(82),
    [sym_match] = STATE(82),
    [sym_arrow] = STATE(82),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_DASH_DASH_GT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [sym__prec3] = STATE(98),
    [sym_comma] = STATE(98),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(119),
    [anon_sym_LF] = ACTIONS(119),
    [anon_sym_COLON_COLON] = ACTIONS(119),
    [anon_sym_DASH_DASH_GT] = ACTIONS(119),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(119),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__prec3] = STATE(99),
    [sym_comma] = STATE(99),
    [sym__prec4] = STATE(126),
    [sym_infix] = STATE(126),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(121),
    [anon_sym_LF] = ACTIONS(121),
    [anon_sym_COLON_COLON] = ACTIONS(121),
    [anon_sym_DASH_DASH_GT] = ACTIONS(121),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(121),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [sym__prec4] = STATE(128),
    [sym_infix] = STATE(128),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_DASH_DASH_GT] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(123),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [sym__prec5] = STATE(91),
    [sym_match] = STATE(91),
    [sym_arrow] = STATE(91),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_DASH_DASH_GT] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [sym__prec5] = STATE(90),
    [sym_match] = STATE(90),
    [sym_arrow] = STATE(90),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [sym__prec4] = STATE(121),
    [sym_infix] = STATE(121),
    [sym__prec5] = STATE(107),
    [sym_match] = STATE(107),
    [sym_arrow] = STATE(107),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_DASH_DASH_GT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(125),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [sym__prec5] = STATE(83),
    [sym_match] = STATE(83),
    [sym_arrow] = STATE(83),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_DASH_DASH_GT] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [sym__prec5] = STATE(81),
    [sym_match] = STATE(81),
    [sym_arrow] = STATE(81),
    [sym__prec6] = STATE(79),
    [sym_terms] = STATE(79),
    [sym__term] = STATE(60),
    [sym_nested_pattern] = STATE(60),
    [sym_nested_trie] = STATE(60),
    [sym_quote] = STATE(60),
    [sym_char_trie] = STATE(60),
    [aux_sym_terms_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_DASH_DASH_GT] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(29),
    [sym_variable] = ACTIONS(31),
    [sym_var_pattern] = ACTIONS(31),
    [sym_number] = ACTIONS(31),
    [sym_string] = ACTIONS(31),
    [sym_symbol] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [sym__prec4] = STATE(85),
    [sym_infix] = STATE(85),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LF] = ACTIONS(123),
    [anon_sym_COLON_COLON] = ACTIONS(123),
    [anon_sym_DASH_DASH_GT] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(123),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [sym__prec4] = STATE(89),
    [sym_infix] = STATE(89),
    [sym__prec5] = STATE(106),
    [sym_match] = STATE(106),
    [sym_arrow] = STATE(106),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_LF] = ACTIONS(125),
    [anon_sym_COLON_COLON] = ACTIONS(125),
    [anon_sym_DASH_DASH_GT] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(105),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [sym__prec5] = STATE(118),
    [sym_match] = STATE(118),
    [sym_arrow] = STATE(118),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(131),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [sym__prec5] = STATE(117),
    [sym_match] = STATE(117),
    [sym_arrow] = STATE(117),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_DASH_DASH_GT] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(127),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [sym__prec5] = STATE(105),
    [sym_match] = STATE(105),
    [sym_arrow] = STATE(105),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_DASH_DASH_GT] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(139),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [sym__prec5] = STATE(104),
    [sym_match] = STATE(104),
    [sym_arrow] = STATE(104),
    [sym__prec6] = STATE(84),
    [sym_terms] = STATE(84),
    [sym__term] = STATE(63),
    [sym_nested_pattern] = STATE(63),
    [sym_nested_trie] = STATE(63),
    [sym_quote] = STATE(63),
    [sym_char_trie] = STATE(63),
    [aux_sym_terms_repeat1] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_DASH_DASH_GT] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_DASH_GT] = ACTIONS(61),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(135),
    [sym_key] = ACTIONS(71),
    [sym_variable] = ACTIONS(73),
    [sym_var_pattern] = ACTIONS(73),
    [sym_number] = ACTIONS(73),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym__prec5] = STATE(112),
    [sym_match] = STATE(112),
    [sym_arrow] = STATE(112),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LF] = ACTIONS(127),
    [anon_sym_COLON_COLON] = ACTIONS(127),
    [anon_sym_DASH_DASH_GT] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(129),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__prec5] = STATE(115),
    [sym_match] = STATE(115),
    [sym_arrow] = STATE(115),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(131),
    [anon_sym_LF] = ACTIONS(131),
    [anon_sym_COLON_COLON] = ACTIONS(131),
    [anon_sym_DASH_DASH_GT] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(131),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(133),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [sym__prec5] = STATE(102),
    [sym_match] = STATE(102),
    [sym_arrow] = STATE(102),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_LF] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(135),
    [anon_sym_DASH_DASH_GT] = ACTIONS(135),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(135),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [sym__prec5] = STATE(103),
    [sym_match] = STATE(103),
    [sym_arrow] = STATE(103),
    [sym__prec6] = STATE(80),
    [sym_terms] = STATE(80),
    [sym__term] = STATE(64),
    [sym_nested_pattern] = STATE(64),
    [sym_nested_trie] = STATE(64),
    [sym_quote] = STATE(64),
    [sym_char_trie] = STATE(64),
    [aux_sym_terms_repeat1] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_LF] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(139),
    [anon_sym_DASH_DASH_GT] = ACTIONS(139),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_DASH_GT] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(139),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(101),
    [sym_variable] = ACTIONS(103),
    [sym_var_pattern] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [sym_symbol] = ACTIONS(141),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [sym__term] = STATE(61),
    [sym_nested_pattern] = STATE(61),
    [sym_nested_trie] = STATE(61),
    [sym_quote] = STATE(61),
    [sym_char_trie] = STATE(61),
    [aux_sym_terms_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_DASH_DASH_GT] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(143),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(147),
    [sym_variable] = ACTIONS(149),
    [sym_var_pattern] = ACTIONS(149),
    [sym_number] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [sym_symbol] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__term] = STATE(61),
    [sym_nested_pattern] = STATE(61),
    [sym_nested_trie] = STATE(61),
    [sym_quote] = STATE(61),
    [sym_char_trie] = STATE(61),
    [aux_sym_terms_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_BQUOTE] = ACTIONS(161),
    [anon_sym_POUND_LBRACE] = ACTIONS(164),
    [sym_key] = ACTIONS(167),
    [sym_variable] = ACTIONS(170),
    [sym_var_pattern] = ACTIONS(170),
    [sym_number] = ACTIONS(170),
    [sym_string] = ACTIONS(170),
    [sym_symbol] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym__term] = STATE(62),
    [sym_nested_pattern] = STATE(62),
    [sym_nested_trie] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_char_trie] = STATE(62),
    [aux_sym_terms_repeat1] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_LF] = ACTIONS(151),
    [anon_sym_COLON_COLON] = ACTIONS(151),
    [anon_sym_DASH_DASH_GT] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_COLON] = ACTIONS(153),
    [anon_sym_DASH_GT] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_BQUOTE] = ACTIONS(179),
    [anon_sym_POUND_LBRACE] = ACTIONS(182),
    [anon_sym_RBRACE_POUND] = ACTIONS(151),
    [sym_key] = ACTIONS(185),
    [sym_variable] = ACTIONS(188),
    [sym_var_pattern] = ACTIONS(188),
    [sym_number] = ACTIONS(188),
    [sym_string] = ACTIONS(188),
    [sym_symbol] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym__term] = STATE(62),
    [sym_nested_pattern] = STATE(62),
    [sym_nested_trie] = STATE(62),
    [sym_quote] = STATE(62),
    [sym_char_trie] = STATE(62),
    [aux_sym_terms_repeat1] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_DASH_DASH_GT] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_POUND_LBRACE] = ACTIONS(69),
    [anon_sym_RBRACE_POUND] = ACTIONS(143),
    [sym_key] = ACTIONS(191),
    [sym_variable] = ACTIONS(193),
    [sym_var_pattern] = ACTIONS(193),
    [sym_number] = ACTIONS(193),
    [sym_string] = ACTIONS(193),
    [sym_symbol] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym__term] = STATE(61),
    [sym_nested_pattern] = STATE(61),
    [sym_nested_trie] = STATE(61),
    [sym_quote] = STATE(61),
    [sym_char_trie] = STATE(61),
    [aux_sym_terms_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(143),
    [anon_sym_LF] = ACTIONS(143),
    [anon_sym_COLON_COLON] = ACTIONS(143),
    [anon_sym_DASH_DASH_GT] = ACTIONS(143),
    [anon_sym_COMMA] = ACTIONS(143),
    [anon_sym_COLON] = ACTIONS(145),
    [anon_sym_DASH_GT] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(143),
    [anon_sym_POUND_LBRACE] = ACTIONS(27),
    [sym_key] = ACTIONS(147),
    [sym_variable] = ACTIONS(149),
    [sym_var_pattern] = ACTIONS(149),
    [sym_number] = ACTIONS(149),
    [sym_string] = ACTIONS(149),
    [sym_symbol] = ACTIONS(145),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(195), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [28] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(199), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [56] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(203), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(207), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(211), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(215), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(219), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(207), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(215), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(211), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(195), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(203), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(219), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 4,
      anon_sym_COLON,
      anon_sym_POUND_LBRACE,
      sym_key,
      sym_symbol,
    ACTIONS(199), 14,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BQUOTE,
      anon_sym_RBRACE_POUND,
      sym_variable,
      sym_var_pattern,
      sym_number,
      sym_string,
  [378] = 5,
    ACTIONS(225), 1,
      anon_sym_COLON,
    ACTIONS(227), 1,
      anon_sym_DASH_GT,
    ACTIONS(229), 1,
      sym_symbol,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(223), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [401] = 5,
    ACTIONS(229), 1,
      sym_symbol,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_DASH_GT,
    ACTIONS(223), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [422] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_symbol,
    ACTIONS(237), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [439] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_symbol,
    ACTIONS(241), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [456] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_symbol,
    ACTIONS(245), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [473] = 5,
    ACTIONS(229), 1,
      sym_symbol,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_COLON,
    ACTIONS(251), 1,
      anon_sym_DASH_GT,
    ACTIONS(223), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [494] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [509] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_symbol,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [526] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_symbol,
    ACTIONS(259), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [543] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [558] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [573] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(267), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [590] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_symbol,
    ACTIONS(271), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [607] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(275), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [622] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_symbol,
    ACTIONS(277), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [639] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [656] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(285), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [672] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [686] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(291), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [700] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(293), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [714] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(295), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [728] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [743] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_symbol,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [758] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_symbol,
    ACTIONS(245), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [773] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_symbol,
    ACTIONS(237), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [788] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_symbol,
    ACTIONS(245), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [803] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_symbol,
    ACTIONS(237), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [818] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_symbol,
    ACTIONS(241), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [833] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_symbol,
    ACTIONS(241), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [848] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_symbol,
    ACTIONS(277), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [863] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_symbol,
    ACTIONS(255), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [878] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_symbol,
    ACTIONS(255), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [893] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_symbol,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [908] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_symbol,
    ACTIONS(271), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [923] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_COLON_COLON,
    ACTIONS(305), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [940] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_symbol,
    ACTIONS(277), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [955] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(267), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [970] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_symbol,
    ACTIONS(281), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [985] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym_symbol,
    ACTIONS(271), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1000] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_symbol,
    ACTIONS(267), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1015] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(307), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1027] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(285), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RBRACE_POUND,
  [1041] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(265), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1053] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(263), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1065] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(311), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1077] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(313), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1089] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(315), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1101] = 3,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(285), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_BQUOTE,
  [1115] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(275), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1127] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RBRACE_POUND,
  [1139] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(319), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1151] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(321), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1163] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(323), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1175] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1187] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(289), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RBRACE_POUND,
  [1198] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(295), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RBRACE_POUND,
  [1209] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_COLON_COLON,
    ACTIONS(329), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_BQUOTE,
  [1224] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(291), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RBRACE_POUND,
  [1235] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_COLON_COLON,
    ACTIONS(333), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1250] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(293), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RBRACE_POUND,
  [1261] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_SEMI,
    ACTIONS(339), 1,
      anon_sym_LF,
    ACTIONS(335), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1276] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1286] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(343), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1296] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(345), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1306] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [1316] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1325] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1334] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1343] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1352] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_BQUOTE,
    ACTIONS(349), 1,
      anon_sym_SEMI,
    ACTIONS(351), 1,
      anon_sym_LF,
  [1365] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1374] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1383] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1392] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RBRACE_POUND,
  [1401] = 4,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_RBRACE_POUND,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_LF,
  [1414] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE_POUND,
  [1421] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [1428] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_RBRACE_POUND,
  [1435] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
  [1442] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_RBRACE_POUND,
  [1449] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_RBRACE_POUND,
  [1456] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
  [1463] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(365), 1,
      ts_builtin_sym_end,
  [1470] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_BQUOTE,
  [1477] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_RBRACE_POUND,
  [1484] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [1491] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
  [1498] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_BQUOTE,
  [1505] = 2,
    ACTIONS(231), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_RBRACE_POUND,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(65)] = 0,
  [SMALL_STATE(66)] = 28,
  [SMALL_STATE(67)] = 56,
  [SMALL_STATE(68)] = 84,
  [SMALL_STATE(69)] = 112,
  [SMALL_STATE(70)] = 140,
  [SMALL_STATE(71)] = 168,
  [SMALL_STATE(72)] = 196,
  [SMALL_STATE(73)] = 222,
  [SMALL_STATE(74)] = 248,
  [SMALL_STATE(75)] = 274,
  [SMALL_STATE(76)] = 300,
  [SMALL_STATE(77)] = 326,
  [SMALL_STATE(78)] = 352,
  [SMALL_STATE(79)] = 378,
  [SMALL_STATE(80)] = 401,
  [SMALL_STATE(81)] = 422,
  [SMALL_STATE(82)] = 439,
  [SMALL_STATE(83)] = 456,
  [SMALL_STATE(84)] = 473,
  [SMALL_STATE(85)] = 494,
  [SMALL_STATE(86)] = 509,
  [SMALL_STATE(87)] = 526,
  [SMALL_STATE(88)] = 543,
  [SMALL_STATE(89)] = 558,
  [SMALL_STATE(90)] = 573,
  [SMALL_STATE(91)] = 590,
  [SMALL_STATE(92)] = 607,
  [SMALL_STATE(93)] = 622,
  [SMALL_STATE(94)] = 639,
  [SMALL_STATE(95)] = 656,
  [SMALL_STATE(96)] = 672,
  [SMALL_STATE(97)] = 686,
  [SMALL_STATE(98)] = 700,
  [SMALL_STATE(99)] = 714,
  [SMALL_STATE(100)] = 728,
  [SMALL_STATE(101)] = 743,
  [SMALL_STATE(102)] = 758,
  [SMALL_STATE(103)] = 773,
  [SMALL_STATE(104)] = 788,
  [SMALL_STATE(105)] = 803,
  [SMALL_STATE(106)] = 818,
  [SMALL_STATE(107)] = 833,
  [SMALL_STATE(108)] = 848,
  [SMALL_STATE(109)] = 863,
  [SMALL_STATE(110)] = 878,
  [SMALL_STATE(111)] = 893,
  [SMALL_STATE(112)] = 908,
  [SMALL_STATE(113)] = 923,
  [SMALL_STATE(114)] = 940,
  [SMALL_STATE(115)] = 955,
  [SMALL_STATE(116)] = 970,
  [SMALL_STATE(117)] = 985,
  [SMALL_STATE(118)] = 1000,
  [SMALL_STATE(119)] = 1015,
  [SMALL_STATE(120)] = 1027,
  [SMALL_STATE(121)] = 1041,
  [SMALL_STATE(122)] = 1053,
  [SMALL_STATE(123)] = 1065,
  [SMALL_STATE(124)] = 1077,
  [SMALL_STATE(125)] = 1089,
  [SMALL_STATE(126)] = 1101,
  [SMALL_STATE(127)] = 1115,
  [SMALL_STATE(128)] = 1127,
  [SMALL_STATE(129)] = 1139,
  [SMALL_STATE(130)] = 1151,
  [SMALL_STATE(131)] = 1163,
  [SMALL_STATE(132)] = 1175,
  [SMALL_STATE(133)] = 1187,
  [SMALL_STATE(134)] = 1198,
  [SMALL_STATE(135)] = 1209,
  [SMALL_STATE(136)] = 1224,
  [SMALL_STATE(137)] = 1235,
  [SMALL_STATE(138)] = 1250,
  [SMALL_STATE(139)] = 1261,
  [SMALL_STATE(140)] = 1276,
  [SMALL_STATE(141)] = 1286,
  [SMALL_STATE(142)] = 1296,
  [SMALL_STATE(143)] = 1306,
  [SMALL_STATE(144)] = 1316,
  [SMALL_STATE(145)] = 1325,
  [SMALL_STATE(146)] = 1334,
  [SMALL_STATE(147)] = 1343,
  [SMALL_STATE(148)] = 1352,
  [SMALL_STATE(149)] = 1365,
  [SMALL_STATE(150)] = 1374,
  [SMALL_STATE(151)] = 1383,
  [SMALL_STATE(152)] = 1392,
  [SMALL_STATE(153)] = 1401,
  [SMALL_STATE(154)] = 1414,
  [SMALL_STATE(155)] = 1421,
  [SMALL_STATE(156)] = 1428,
  [SMALL_STATE(157)] = 1435,
  [SMALL_STATE(158)] = 1442,
  [SMALL_STATE(159)] = 1449,
  [SMALL_STATE(160)] = 1456,
  [SMALL_STATE(161)] = 1463,
  [SMALL_STATE(162)] = 1470,
  [SMALL_STATE(163)] = 1477,
  [SMALL_STATE(164)] = 1484,
  [SMALL_STATE(165)] = 1491,
  [SMALL_STATE(166)] = 1498,
  [SMALL_STATE(167)] = 1505,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 2, .production_id = 6),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 2, .production_id = 6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 2, .production_id = 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 2, .production_id = 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 2, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 1, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 2, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terms, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terms, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(9),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(10),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(26),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(12),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(61),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(61),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(17),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(7),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(24),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(14),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(62),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(62),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_trie, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_trie, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_pattern, 3, .production_id = 9),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_pattern, 3, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_trie, 3, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_trie, 3, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_trie, 3, .production_id = 9),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_trie, 3, .production_id = 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_pattern, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_pattern, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_trie, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_trie, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec5, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prec5, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec4, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2, .production_id = 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2, .production_id = 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 2, .production_id = 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 8),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3, .production_id = 8),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 8),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 8),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 10),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 14),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 11),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3, .production_id = 11),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 11),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 11),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 4, .production_id = 16),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, .production_id = 15),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, .production_id = 15),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 15),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 15),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec3, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 3, .production_id = 8),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 4, .production_id = 15),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 2, .production_id = 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 3, .production_id = 11),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec2, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 3, .production_id = 8),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 3, .production_id = 11),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 4, .production_id = 15),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 3, .production_id = 11),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 2, .production_id = 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 2, .production_id = 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 4, .production_id = 15),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 3, .production_id = 8),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec1, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 2, .production_id = 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 2, .production_id = 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 3, .production_id = 11),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 3, .production_id = 11),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sifu(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
