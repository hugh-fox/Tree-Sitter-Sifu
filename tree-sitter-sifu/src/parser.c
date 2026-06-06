#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 97
#define LARGE_STATE_COUNT 41
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
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
  sym_key = 14,
  sym_variable = 15,
  sym_var_pattern = 16,
  sym_number = 17,
  sym_string = 18,
  sym_symbol = 19,
  sym_comment = 20,
  sym_pattern = 21,
  sym__prec1 = 22,
  sym_semicolon = 23,
  sym_newline_sep = 24,
  sym__prec2 = 25,
  sym_long_match = 26,
  sym_long_arrow = 27,
  sym__prec3 = 28,
  sym_comma = 29,
  sym__prec4 = 30,
  sym_infix = 31,
  sym__prec5 = 32,
  sym_match = 33,
  sym_arrow = 34,
  sym__prec6 = 35,
  sym_terms = 36,
  sym__term = 37,
  sym_nested_pattern = 38,
  sym_nested_trie = 39,
  sym_quote = 40,
  aux_sym_terms_repeat1 = 41,
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
  [8] = 8,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 2,
  [16] = 3,
  [17] = 4,
  [18] = 10,
  [19] = 14,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 25,
  [33] = 24,
  [34] = 31,
  [35] = 28,
  [36] = 30,
  [37] = 29,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 47,
  [67] = 53,
  [68] = 55,
  [69] = 56,
  [70] = 60,
  [71] = 59,
  [72] = 49,
  [73] = 73,
  [74] = 48,
  [75] = 50,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 62,
  [85] = 85,
  [86] = 73,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 85,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
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

static inline bool sym_symbol_character_set_4(int32_t c) {
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

static inline bool sym_symbol_character_set_5(int32_t c) {
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

static inline bool sym_symbol_character_set_7(int32_t c) {
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
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (sym_symbol_character_set_2(lookahead)) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(5);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 7:
      if (sym_var_pattern_character_set_1(lookahead)) ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(40);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      if (sym_symbol_character_set_1(lookahead)) ADVANCE(41);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ',') ADVANCE(17);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (sym_symbol_character_set_3(lookahead)) ADVANCE(41);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(15);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '_') ADVANCE(4);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_key);
      if (sym_key_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_variable);
      if (sym_key_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_var_pattern);
      if (sym_key_character_set_2(lookahead)) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '>') ADVANCE(16);
      if (lookahead == '_') ADVANCE(5);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '_') ADVANCE(5);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(41);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead == '>') ADVANCE(19);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(39);
      if (sym_symbol_character_set_5(lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '>') ADVANCE(19);
      if (lookahead == '_') ADVANCE(5);
      if (sym_key_character_set_1(lookahead)) ADVANCE(27);
      if (sym_variable_character_set_1(lookahead)) ADVANCE(28);
      if (sym_symbol_character_set_4(lookahead)) ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(15);
      if (sym_symbol_character_set_6(lookahead)) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '>') ADVANCE(16);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_var_pattern_character_set_1(lookahead)) ADVANCE(29);
      if (sym_symbol_character_set_8(lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (sym_symbol_character_set_7(lookahead)) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 9},
  [38] = {.lex_state = 9},
  [39] = {.lex_state = 9},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 9},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 9},
  [77] = {.lex_state = 9},
  [78] = {.lex_state = 9},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 9},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 9},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 9},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
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
    [sym_pattern] = STATE(92),
    [sym__prec1] = STATE(93),
    [sym_semicolon] = STATE(93),
    [sym_newline_sep] = STATE(93),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
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
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [2] = {
    [sym__prec1] = STATE(88),
    [sym_semicolon] = STATE(88),
    [sym_newline_sep] = STATE(88),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
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
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [sym__prec1] = STATE(87),
    [sym_semicolon] = STATE(87),
    [sym_newline_sep] = STATE(87),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
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
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [4] = {
    [sym__prec1] = STATE(90),
    [sym_semicolon] = STATE(90),
    [sym_newline_sep] = STATE(90),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [5] = {
    [sym__prec1] = STATE(89),
    [sym_semicolon] = STATE(89),
    [sym_newline_sep] = STATE(89),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [sym__prec1] = STATE(96),
    [sym_semicolon] = STATE(96),
    [sym_newline_sep] = STATE(96),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_SEMI] = ACTIONS(43),
    [anon_sym_LF] = ACTIONS(43),
    [anon_sym_COLON_COLON] = ACTIONS(43),
    [anon_sym_DASH_DASH_GT] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_COLON] = ACTIONS(45),
    [anon_sym_DASH_GT] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_BQUOTE] = ACTIONS(43),
    [sym_key] = ACTIONS(45),
    [sym_variable] = ACTIONS(43),
    [sym_var_pattern] = ACTIONS(43),
    [sym_number] = ACTIONS(43),
    [sym_string] = ACTIONS(43),
    [sym_symbol] = ACTIONS(45),
    [sym_comment] = ACTIONS(33),
  },
  [7] = {
    [sym__prec1] = STATE(94),
    [sym_semicolon] = STATE(94),
    [sym_newline_sep] = STATE(94),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [8] = {
    [sym__prec1] = STATE(95),
    [sym_semicolon] = STATE(95),
    [sym_newline_sep] = STATE(95),
    [sym__prec2] = STATE(85),
    [sym_long_match] = STATE(85),
    [sym_long_arrow] = STATE(85),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [9] = {
    [sym__prec1] = STATE(89),
    [sym_semicolon] = STATE(89),
    [sym_newline_sep] = STATE(89),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [10] = {
    [sym__prec2] = STATE(80),
    [sym_long_match] = STATE(80),
    [sym_long_arrow] = STATE(80),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [11] = {
    [sym__prec1] = STATE(96),
    [sym_semicolon] = STATE(96),
    [sym_newline_sep] = STATE(96),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [12] = {
    [sym__prec2] = STATE(81),
    [sym_long_match] = STATE(81),
    [sym_long_arrow] = STATE(81),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [13] = {
    [sym__prec2] = STATE(83),
    [sym_long_match] = STATE(83),
    [sym_long_arrow] = STATE(83),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [14] = {
    [sym__prec2] = STATE(79),
    [sym_long_match] = STATE(79),
    [sym_long_arrow] = STATE(79),
    [sym__prec3] = STATE(73),
    [sym_comma] = STATE(73),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(11),
    [anon_sym_DASH_DASH_GT] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [15] = {
    [sym__prec1] = STATE(88),
    [sym_semicolon] = STATE(88),
    [sym_newline_sep] = STATE(88),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(35),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [16] = {
    [sym__prec1] = STATE(87),
    [sym_semicolon] = STATE(87),
    [sym_newline_sep] = STATE(87),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [17] = {
    [sym__prec1] = STATE(90),
    [sym_semicolon] = STATE(90),
    [sym_newline_sep] = STATE(90),
    [sym__prec2] = STATE(91),
    [sym_long_match] = STATE(91),
    [sym_long_arrow] = STATE(91),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LF] = ACTIONS(53),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(39),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [18] = {
    [sym__prec2] = STATE(80),
    [sym_long_match] = STATE(80),
    [sym_long_arrow] = STATE(80),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(71),
    [anon_sym_LF] = ACTIONS(71),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(71),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [19] = {
    [sym__prec2] = STATE(79),
    [sym_long_match] = STATE(79),
    [sym_long_arrow] = STATE(79),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LF] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [20] = {
    [sym__prec2] = STATE(83),
    [sym_long_match] = STATE(83),
    [sym_long_arrow] = STATE(83),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(77),
    [anon_sym_LF] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(77),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [21] = {
    [sym__prec3] = STATE(64),
    [sym_comma] = STATE(64),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_DASH_DASH_GT] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [22] = {
    [sym__prec3] = STATE(65),
    [sym_comma] = STATE(65),
    [sym__prec4] = STATE(62),
    [sym_infix] = STATE(62),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_DASH_DASH_GT] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [23] = {
    [sym__prec2] = STATE(81),
    [sym_long_match] = STATE(81),
    [sym_long_arrow] = STATE(81),
    [sym__prec3] = STATE(86),
    [sym_comma] = STATE(86),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LF] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(55),
    [anon_sym_DASH_DASH_GT] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(75),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [24] = {
    [sym__prec4] = STATE(58),
    [sym_infix] = STATE(58),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_DASH_DASH_GT] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [25] = {
    [sym__prec4] = STATE(54),
    [sym_infix] = STATE(54),
    [sym__prec5] = STATE(50),
    [sym_match] = STATE(50),
    [sym_arrow] = STATE(50),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_DASH_DASH_GT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [26] = {
    [sym__prec3] = STATE(64),
    [sym_comma] = STATE(64),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LF] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_DASH_DASH_GT] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [27] = {
    [sym__prec3] = STATE(65),
    [sym_comma] = STATE(65),
    [sym__prec4] = STATE(84),
    [sym_infix] = STATE(84),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(83),
    [anon_sym_LF] = ACTIONS(83),
    [anon_sym_COLON_COLON] = ACTIONS(83),
    [anon_sym_DASH_DASH_GT] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(83),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [28] = {
    [sym__prec5] = STATE(48),
    [sym_match] = STATE(48),
    [sym_arrow] = STATE(48),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_DASH_GT] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(91),
    [sym_comment] = ACTIONS(33),
  },
  [29] = {
    [sym__prec5] = STATE(60),
    [sym_match] = STATE(60),
    [sym_arrow] = STATE(60),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(95),
    [sym_comment] = ACTIONS(33),
  },
  [30] = {
    [sym__prec5] = STATE(59),
    [sym_match] = STATE(59),
    [sym_arrow] = STATE(59),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_DASH_DASH_GT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(99),
    [sym_comment] = ACTIONS(33),
  },
  [31] = {
    [sym__prec5] = STATE(53),
    [sym_match] = STATE(53),
    [sym_arrow] = STATE(53),
    [sym__prec6] = STATE(46),
    [sym_terms] = STATE(46),
    [sym__term] = STATE(39),
    [sym_nested_pattern] = STATE(39),
    [sym_nested_trie] = STATE(39),
    [sym_quote] = STATE(39),
    [aux_sym_terms_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_DASH_DASH_GT] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(17),
    [anon_sym_DASH_GT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(27),
    [sym_variable] = ACTIONS(29),
    [sym_var_pattern] = ACTIONS(29),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(103),
    [sym_comment] = ACTIONS(33),
  },
  [32] = {
    [sym__prec4] = STATE(54),
    [sym_infix] = STATE(54),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_LF] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_DASH_DASH_GT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [33] = {
    [sym__prec4] = STATE(58),
    [sym_infix] = STATE(58),
    [sym__prec5] = STATE(75),
    [sym_match] = STATE(75),
    [sym_arrow] = STATE(75),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_LF] = ACTIONS(85),
    [anon_sym_COLON_COLON] = ACTIONS(85),
    [anon_sym_DASH_DASH_GT] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [34] = {
    [sym__prec5] = STATE(67),
    [sym_match] = STATE(67),
    [sym_arrow] = STATE(67),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(101),
    [anon_sym_LF] = ACTIONS(101),
    [anon_sym_COLON_COLON] = ACTIONS(101),
    [anon_sym_DASH_DASH_GT] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(101),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(103),
    [sym_comment] = ACTIONS(33),
  },
  [35] = {
    [sym__prec5] = STATE(74),
    [sym_match] = STATE(74),
    [sym_arrow] = STATE(74),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LF] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_DASH_DASH_GT] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(91),
    [sym_comment] = ACTIONS(33),
  },
  [36] = {
    [sym__prec5] = STATE(71),
    [sym_match] = STATE(71),
    [sym_arrow] = STATE(71),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(97),
    [anon_sym_LF] = ACTIONS(97),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [anon_sym_DASH_DASH_GT] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(97),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(99),
    [sym_comment] = ACTIONS(33),
  },
  [37] = {
    [sym__prec5] = STATE(70),
    [sym_match] = STATE(70),
    [sym_arrow] = STATE(70),
    [sym__prec6] = STATE(51),
    [sym_terms] = STATE(51),
    [sym__term] = STATE(40),
    [sym_nested_pattern] = STATE(40),
    [sym_nested_trie] = STATE(40),
    [sym_quote] = STATE(40),
    [aux_sym_terms_repeat1] = STATE(40),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LF] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(93),
    [anon_sym_DASH_DASH_GT] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_DASH_GT] = ACTIONS(63),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(93),
    [sym_key] = ACTIONS(65),
    [sym_variable] = ACTIONS(67),
    [sym_var_pattern] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [sym_string] = ACTIONS(67),
    [sym_symbol] = ACTIONS(95),
    [sym_comment] = ACTIONS(33),
  },
  [38] = {
    [sym__term] = STATE(38),
    [sym_nested_pattern] = STATE(38),
    [sym_nested_trie] = STATE(38),
    [sym_quote] = STATE(38),
    [aux_sym_terms_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LF] = ACTIONS(105),
    [anon_sym_COLON_COLON] = ACTIONS(105),
    [anon_sym_DASH_DASH_GT] = ACTIONS(105),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_DASH_GT] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(109),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_BQUOTE] = ACTIONS(115),
    [sym_key] = ACTIONS(118),
    [sym_variable] = ACTIONS(121),
    [sym_var_pattern] = ACTIONS(121),
    [sym_number] = ACTIONS(121),
    [sym_string] = ACTIONS(121),
    [sym_symbol] = ACTIONS(107),
    [sym_comment] = ACTIONS(33),
  },
  [39] = {
    [sym__term] = STATE(38),
    [sym_nested_pattern] = STATE(38),
    [sym_nested_trie] = STATE(38),
    [sym_quote] = STATE(38),
    [aux_sym_terms_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(124),
    [anon_sym_COLON_COLON] = ACTIONS(124),
    [anon_sym_DASH_DASH_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_BQUOTE] = ACTIONS(25),
    [sym_key] = ACTIONS(128),
    [sym_variable] = ACTIONS(130),
    [sym_var_pattern] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [sym_string] = ACTIONS(130),
    [sym_symbol] = ACTIONS(126),
    [sym_comment] = ACTIONS(33),
  },
  [40] = {
    [sym__term] = STATE(38),
    [sym_nested_pattern] = STATE(38),
    [sym_nested_trie] = STATE(38),
    [sym_quote] = STATE(38),
    [aux_sym_terms_repeat1] = STATE(38),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_LF] = ACTIONS(124),
    [anon_sym_COLON_COLON] = ACTIONS(124),
    [anon_sym_DASH_DASH_GT] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_DASH_GT] = ACTIONS(124),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_BQUOTE] = ACTIONS(124),
    [sym_key] = ACTIONS(128),
    [sym_variable] = ACTIONS(130),
    [sym_var_pattern] = ACTIONS(130),
    [sym_number] = ACTIONS(130),
    [sym_string] = ACTIONS(130),
    [sym_symbol] = ACTIONS(126),
    [sym_comment] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_COLON,
      sym_key,
      sym_symbol,
    ACTIONS(132), 16,
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
  [27] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(138), 3,
      anon_sym_COLON,
      sym_key,
      sym_symbol,
    ACTIONS(136), 16,
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
  [54] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(142), 3,
      anon_sym_COLON,
      sym_key,
      sym_symbol,
    ACTIONS(140), 16,
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
  [81] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_COLON,
      sym_key,
      sym_symbol,
    ACTIONS(144), 16,
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
  [108] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(150), 3,
      anon_sym_COLON,
      sym_key,
      sym_symbol,
    ACTIONS(148), 16,
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
  [135] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COLON,
    ACTIONS(156), 1,
      anon_sym_DASH_GT,
    ACTIONS(158), 1,
      sym_symbol,
    ACTIONS(152), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [158] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_symbol,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [175] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_symbol,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [192] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_symbol,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [209] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_symbol,
    ACTIONS(172), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [226] = 5,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_symbol,
    ACTIONS(176), 1,
      anon_sym_COLON,
    ACTIONS(178), 1,
      anon_sym_DASH_GT,
    ACTIONS(152), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [247] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(180), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [262] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_symbol,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [279] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(186), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [294] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_symbol,
    ACTIONS(188), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [311] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_symbol,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [328] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(196), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [343] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(198), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [358] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(200), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [375] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_symbol,
    ACTIONS(204), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [392] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(208), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [406] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [422] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(214), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [436] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(216), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [450] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [464] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_symbol,
    ACTIONS(160), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [479] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_symbol,
    ACTIONS(182), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [494] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_symbol,
    ACTIONS(188), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [509] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_symbol,
    ACTIONS(192), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [524] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_symbol,
    ACTIONS(204), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [539] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_symbol,
    ACTIONS(200), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [554] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_symbol,
    ACTIONS(168), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [569] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COLON_COLON,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [586] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym_symbol,
    ACTIONS(164), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [601] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_symbol,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_COMMA,
      anon_sym_BQUOTE,
  [616] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(228), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [628] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(230), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [640] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(232), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [652] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(234), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [664] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(236), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [676] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(238), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [688] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(240), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [700] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(242), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [712] = 3,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(210), 5,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_COLON_COLON,
      anon_sym_DASH_DASH_GT,
      anon_sym_BQUOTE,
  [726] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [741] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_COLON_COLON,
    ACTIONS(254), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(220), 3,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_BQUOTE,
  [756] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(256), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [766] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(258), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [776] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [786] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(262), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_BQUOTE,
  [796] = 4,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_BQUOTE,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_LF,
  [809] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [816] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(270), 1,
      ts_builtin_sym_end,
  [823] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
  [830] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [837] = 2,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_BQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(41)] = 0,
  [SMALL_STATE(42)] = 27,
  [SMALL_STATE(43)] = 54,
  [SMALL_STATE(44)] = 81,
  [SMALL_STATE(45)] = 108,
  [SMALL_STATE(46)] = 135,
  [SMALL_STATE(47)] = 158,
  [SMALL_STATE(48)] = 175,
  [SMALL_STATE(49)] = 192,
  [SMALL_STATE(50)] = 209,
  [SMALL_STATE(51)] = 226,
  [SMALL_STATE(52)] = 247,
  [SMALL_STATE(53)] = 262,
  [SMALL_STATE(54)] = 279,
  [SMALL_STATE(55)] = 294,
  [SMALL_STATE(56)] = 311,
  [SMALL_STATE(57)] = 328,
  [SMALL_STATE(58)] = 343,
  [SMALL_STATE(59)] = 358,
  [SMALL_STATE(60)] = 375,
  [SMALL_STATE(61)] = 392,
  [SMALL_STATE(62)] = 406,
  [SMALL_STATE(63)] = 422,
  [SMALL_STATE(64)] = 436,
  [SMALL_STATE(65)] = 450,
  [SMALL_STATE(66)] = 464,
  [SMALL_STATE(67)] = 479,
  [SMALL_STATE(68)] = 494,
  [SMALL_STATE(69)] = 509,
  [SMALL_STATE(70)] = 524,
  [SMALL_STATE(71)] = 539,
  [SMALL_STATE(72)] = 554,
  [SMALL_STATE(73)] = 569,
  [SMALL_STATE(74)] = 586,
  [SMALL_STATE(75)] = 601,
  [SMALL_STATE(76)] = 616,
  [SMALL_STATE(77)] = 628,
  [SMALL_STATE(78)] = 640,
  [SMALL_STATE(79)] = 652,
  [SMALL_STATE(80)] = 664,
  [SMALL_STATE(81)] = 676,
  [SMALL_STATE(82)] = 688,
  [SMALL_STATE(83)] = 700,
  [SMALL_STATE(84)] = 712,
  [SMALL_STATE(85)] = 726,
  [SMALL_STATE(86)] = 741,
  [SMALL_STATE(87)] = 756,
  [SMALL_STATE(88)] = 766,
  [SMALL_STATE(89)] = 776,
  [SMALL_STATE(90)] = 786,
  [SMALL_STATE(91)] = 796,
  [SMALL_STATE(92)] = 809,
  [SMALL_STATE(93)] = 816,
  [SMALL_STATE(94)] = 823,
  [SMALL_STATE(95)] = 830,
  [SMALL_STATE(96)] = 837,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 2, .production_id = 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 2, .production_id = 6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 2, .production_id = 6),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 2, .production_id = 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 2, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 2, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 1, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2, .production_id = 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(7),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(8),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(11),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(38),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_terms_repeat1, 2), SHIFT_REPEAT(38),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_terms, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_terms, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_pattern, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_pattern, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_trie, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_trie, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, .production_id = 9),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_trie, 3, .production_id = 9),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_trie, 3, .production_id = 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_pattern, 3, .production_id = 9),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_pattern, 3, .production_id = 9),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec5, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__prec5, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 8),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3, .production_id = 8),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 2, .production_id = 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 2, .production_id = 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 8),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 8),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec4, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 10),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 2, .production_id = 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 2, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 2, .production_id = 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 4, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 4, .production_id = 15),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 15),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 15),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 4, .production_id = 16),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix, 3, .production_id = 14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3, .production_id = 11),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 3, .production_id = 11),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arrow, 3, .production_id = 11),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arrow, 3, .production_id = 11),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 3, .production_id = 8),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec3, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 4, .production_id = 15),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 3, .production_id = 11),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma, 2, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec2, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 4, .production_id = 15),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 4, .production_id = 15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 3, .production_id = 8),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 2, .production_id = 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 2, .production_id = 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_arrow, 3, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 3, .production_id = 8),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_long_match, 3, .production_id = 11),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__prec1, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 2, .production_id = 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 2, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semicolon, 3, .production_id = 11),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_newline_sep, 3, .production_id = 11),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
