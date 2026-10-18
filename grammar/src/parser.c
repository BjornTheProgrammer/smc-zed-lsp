#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym_identifier = 1,
  sym__newline = 2,
  anon_sym_define = 3,
  anon_sym_COMMA = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_label = 7,
  sym_number = 8,
  sym_char = 9,
  anon_sym_EQ = 10,
  anon_sym_BANG_EQ = 11,
  anon_sym_GT_EQ = 12,
  anon_sym_LT = 13,
  anon_sym_BANG = 14,
  anon_sym_BANG0 = 15,
  anon_sym_BANG_DASH = 16,
  anon_sym_DASH = 17,
  sym_comment = 18,
  sym_source_file = 19,
  sym__statement = 20,
  sym_define = 21,
  sym_label_definition = 22,
  sym_instruction = 23,
  sym__operand = 24,
  sym_memory = 25,
  sym_symbol = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_instruction_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__newline] = "_newline",
  [anon_sym_define] = "define",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_label] = "label",
  [sym_number] = "number",
  [sym_char] = "char",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_BANG] = "!",
  [anon_sym_BANG0] = "!0",
  [anon_sym_BANG_DASH] = "!-",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_define] = "define",
  [sym_label_definition] = "label_definition",
  [sym_instruction] = "instruction",
  [sym__operand] = "_operand",
  [sym_memory] = "memory",
  [sym_symbol] = "symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_instruction_repeat1] = "instruction_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__newline] = sym__newline,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_label] = sym_label,
  [sym_number] = sym_number,
  [sym_char] = sym_char,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_BANG0] = anon_sym_BANG0,
  [anon_sym_BANG_DASH] = anon_sym_BANG_DASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_define] = sym_define,
  [sym_label_definition] = sym_label_definition,
  [sym_instruction] = sym_instruction,
  [sym__operand] = sym__operand,
  [sym_memory] = sym_memory,
  [sym_symbol] = sym_symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_instruction_repeat1] = aux_sym_instruction_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_define] = {
    .visible = true,
    .named = true,
  },
  [sym_label_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_mnemonic = 1,
  field_name = 2,
  field_operand = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_mnemonic] = "mnemonic",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mnemonic, 0},
  [1] =
    {field_operand, 0},
  [2] =
    {field_mnemonic, 0},
    {field_operand, 1, .inherited = true},
  [4] =
    {field_name, 1},
    {field_value, 2},
  [6] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
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
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '\n', 13,
        '!', 30,
        ',', 14,
        '-', 33,
        '.', 11,
        '/', 1,
        '0', 19,
        '<', 29,
        '=', 26,
        '>', 4,
        '[', 15,
        ']', 16,
        '"', 5,
        '\'', 5,
        '#', 35,
        ';', 35,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(25);
      if (lookahead == '0' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(21);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG0);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_BANG_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_define);
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
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_BANG0] = ACTIONS(1),
    [anon_sym_BANG_DASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__statement] = STATE(15),
    [sym_define] = STATE(15),
    [sym_label_definition] = STATE(13),
    [sym_instruction] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [anon_sym_define] = ACTIONS(11),
    [sym_label] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__operand] = STATE(9),
    [sym_memory] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_instruction_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [sym__newline] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_label] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_char] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_BANG0] = ACTIONS(23),
    [anon_sym_BANG_DASH] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__operand] = STATE(9),
    [sym_memory] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_instruction_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_identifier] = ACTIONS(17),
    [sym__newline] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_label] = ACTIONS(17),
    [sym_number] = ACTIONS(17),
    [sym_char] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_BANG0] = ACTIONS(23),
    [anon_sym_BANG_DASH] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__operand] = STATE(9),
    [sym_memory] = STATE(9),
    [sym_symbol] = STATE(9),
    [aux_sym_instruction_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym__newline] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_label] = ACTIONS(33),
    [sym_number] = ACTIONS(33),
    [sym_char] = ACTIONS(33),
    [anon_sym_EQ] = ACTIONS(42),
    [anon_sym_BANG_EQ] = ACTIONS(42),
    [anon_sym_GT_EQ] = ACTIONS(42),
    [anon_sym_LT] = ACTIONS(42),
    [anon_sym_BANG] = ACTIONS(45),
    [anon_sym_BANG0] = ACTIONS(42),
    [anon_sym_BANG_DASH] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
    [sym__newline] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [sym_label] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_char] = ACTIONS(48),
    [anon_sym_EQ] = ACTIONS(48),
    [anon_sym_BANG_EQ] = ACTIONS(48),
    [anon_sym_GT_EQ] = ACTIONS(48),
    [anon_sym_LT] = ACTIONS(48),
    [anon_sym_BANG] = ACTIONS(50),
    [anon_sym_BANG0] = ACTIONS(48),
    [anon_sym_BANG_DASH] = ACTIONS(48),
    [anon_sym_DASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_identifier] = ACTIONS(52),
    [sym__newline] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [sym_label] = ACTIONS(52),
    [sym_number] = ACTIONS(52),
    [sym_char] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(52),
    [anon_sym_BANG_EQ] = ACTIONS(52),
    [anon_sym_GT_EQ] = ACTIONS(52),
    [anon_sym_LT] = ACTIONS(52),
    [anon_sym_BANG] = ACTIONS(54),
    [anon_sym_BANG0] = ACTIONS(52),
    [anon_sym_BANG_DASH] = ACTIONS(52),
    [anon_sym_DASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__operand] = STATE(18),
    [sym_memory] = STATE(18),
    [sym_symbol] = STATE(18),
    [sym_identifier] = ACTIONS(56),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_label] = ACTIONS(56),
    [sym_number] = ACTIONS(56),
    [sym_char] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_BANG0] = ACTIONS(23),
    [anon_sym_BANG_DASH] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__operand] = STATE(21),
    [sym_memory] = STATE(21),
    [sym_symbol] = STATE(21),
    [sym_identifier] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_label] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [sym_char] = ACTIONS(58),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_BANG_EQ] = ACTIONS(23),
    [anon_sym_GT_EQ] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_BANG0] = ACTIONS(23),
    [anon_sym_BANG_DASH] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_identifier] = ACTIONS(60),
    [sym__newline] = ACTIONS(60),
    [anon_sym_COMMA] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(60),
    [sym_label] = ACTIONS(60),
    [sym_number] = ACTIONS(60),
    [sym_char] = ACTIONS(60),
    [anon_sym_EQ] = ACTIONS(60),
    [anon_sym_BANG_EQ] = ACTIONS(60),
    [anon_sym_GT_EQ] = ACTIONS(60),
    [anon_sym_LT] = ACTIONS(60),
    [anon_sym_BANG] = ACTIONS(62),
    [anon_sym_BANG0] = ACTIONS(60),
    [anon_sym_BANG_DASH] = ACTIONS(60),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_define,
    ACTIONS(13), 1,
      sym_label,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      sym_label_definition,
    STATE(17), 3,
      sym__statement,
      sym_define,
      sym_instruction,
  [30] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(73), 1,
      sym__newline,
    ACTIONS(76), 1,
      anon_sym_define,
    ACTIONS(79), 1,
      sym_label,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(13), 1,
      sym_label_definition,
    STATE(22), 3,
      sym__statement,
      sym_define,
      sym_instruction,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 2,
      anon_sym_define,
      sym_identifier,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_label,
  [73] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 1,
      sym_identifier,
    STATE(16), 1,
      sym_instruction,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym__newline,
  [87] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym__newline,
      sym_identifier,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      sym__newline,
  [106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      sym__newline,
  [114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__newline,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym__newline,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_identifier,
  [139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_RBRACK,
  [153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 30,
  [SMALL_STATE(12)] = 60,
  [SMALL_STATE(13)] = 73,
  [SMALL_STATE(14)] = 87,
  [SMALL_STATE(15)] = 96,
  [SMALL_STATE(16)] = 106,
  [SMALL_STATE(17)] = 114,
  [SMALL_STATE(18)] = 124,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 139,
  [SMALL_STATE(21)] = 146,
  [SMALL_STATE(22)] = 153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5), SHIFT_REPEAT(5),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 2, 0, 5), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_repeat1, 1, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_instruction_repeat1, 1, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_definition, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define, 3, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_smc(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
