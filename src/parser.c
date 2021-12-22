#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_On = 6,
  anon_sym_branch = 7,
  anon_sym_Your = 8,
  anon_sym_is = 9,
  anon_sym_up = 10,
  anon_sym_to = 11,
  anon_sym_date = 12,
  anon_sym_with = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__branch_declaration_token1 = 15,
  anon_sym_SQUOTE_DOT = 16,
  anon_sym_HEAD = 17,
  anon_sym_detached = 18,
  anon_sym_at = 19,
  anon_sym_Conflicts = 20,
  anon_sym_COLON = 21,
  anon_sym_Untracked = 22,
  anon_sym_files = 23,
  anon_sym_Changes = 24,
  anon_sym_be = 25,
  anon_sym_committed = 26,
  anon_sym_newfile = 27,
  anon_sym_modified = 28,
  anon_sym_renamed = 29,
  anon_sym_deleted = 30,
  anon_sym_DASH_GT = 31,
  sym_commit = 32,
  sym__word = 33,
  aux_sym_path_token1 = 34,
  sym_item = 35,
  sym_source = 36,
  sym__body_line = 37,
  sym_subject = 38,
  sym_message = 39,
  sym_comment = 40,
  sym__comment_body = 41,
  sym__branch_declaration = 42,
  sym_header = 43,
  sym_change = 44,
  sym_path = 45,
  aux_sym_source_repeat1 = 46,
  aux_sym_subject_repeat1 = 47,
  aux_sym_message_repeat1 = 48,
  aux_sym__comment_body_repeat1 = 49,
  aux_sym_path_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_On] = "On",
  [anon_sym_branch] = "branch",
  [anon_sym_Your] = "Your",
  [anon_sym_is] = "is",
  [anon_sym_up] = "up",
  [anon_sym_to] = "to",
  [anon_sym_date] = "date",
  [anon_sym_with] = "with",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__branch_declaration_token1] = "branch",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_detached] = "detached",
  [anon_sym_at] = "at",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_COLON] = ":",
  [anon_sym_Untracked] = "Untracked",
  [anon_sym_files] = "files",
  [anon_sym_Changes] = "Changes",
  [anon_sym_be] = "be",
  [anon_sym_committed] = "committed",
  [anon_sym_newfile] = "new file",
  [anon_sym_modified] = "modified",
  [anon_sym_renamed] = "renamed",
  [anon_sym_deleted] = "deleted",
  [anon_sym_DASH_GT] = "->",
  [sym_commit] = "commit",
  [sym__word] = "_word",
  [aux_sym_path_token1] = "path_token1",
  [sym_item] = "item",
  [sym_source] = "source",
  [sym__body_line] = "_body_line",
  [sym_subject] = "subject",
  [sym_message] = "message",
  [sym_comment] = "comment",
  [sym__comment_body] = "_comment_body",
  [sym__branch_declaration] = "_branch_declaration",
  [sym_header] = "header",
  [sym_change] = "change",
  [sym_path] = "path",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_Your] = anon_sym_Your,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__branch_declaration_token1] = aux_sym__branch_declaration_token1,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_detached] = anon_sym_detached,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Untracked] = anon_sym_Untracked,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_Changes] = anon_sym_Changes,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_committed] = anon_sym_committed,
  [anon_sym_newfile] = anon_sym_newfile,
  [anon_sym_modified] = anon_sym_modified,
  [anon_sym_renamed] = anon_sym_renamed,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_commit] = sym_commit,
  [sym__word] = sym__word,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [sym_item] = sym_item,
  [sym_source] = sym_source,
  [sym__body_line] = sym__body_line,
  [sym_subject] = sym_subject,
  [sym_message] = sym_message,
  [sym_comment] = sym_comment,
  [sym__comment_body] = sym__comment_body,
  [sym__branch_declaration] = sym__branch_declaration,
  [sym_header] = sym_header,
  [sym_change] = sym_change,
  [sym_path] = sym_path,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Your] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_up] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__branch_declaration_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HEAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_detached] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_at] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Conflicts] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Untracked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Changes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_be] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_committed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newfile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_renamed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__body_line] = {
    .visible = false,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_body] = {
    .visible = false,
    .named = true,
  },
  [sym__branch_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_change] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_kind, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = aux_sym__branch_declaration_token1,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\'') ADVANCE(128);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == 'C') ADVANCE(49);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(68);
      if (lookahead == 'U') ADVANCE(72);
      if (lookahead == 'Y') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(31);
      if (lookahead == 'c') ADVANCE(75);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'w') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(113);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(148);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(186);
      if (lookahead == 'Y') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(149);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(131);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 52:
      if (lookahead == 'h') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(44);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 66:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 81:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 84:
      if (lookahead == 's') ADVANCE(135);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 95:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(95)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 96:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(96)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(130);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(104)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(116);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 105:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(105)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(204);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 106:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(186);
      if (lookahead == 'Y') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(106)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(149);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 107:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 108:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 109:
      if (eof) ADVANCE(110);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(113);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(116);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(131);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(148);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(186);
      if (lookahead == 'Y') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(149);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(111);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(95)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 106},
  [4] = {.lex_state = 104},
  [5] = {.lex_state = 104},
  [6] = {.lex_state = 104},
  [7] = {.lex_state = 104},
  [8] = {.lex_state = 104},
  [9] = {.lex_state = 104},
  [10] = {.lex_state = 104},
  [11] = {.lex_state = 104},
  [12] = {.lex_state = 104},
  [13] = {.lex_state = 105},
  [14] = {.lex_state = 105},
  [15] = {.lex_state = 107},
  [16] = {.lex_state = 108},
  [17] = {.lex_state = 109},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 109},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 104},
  [26] = {.lex_state = 108},
  [27] = {.lex_state = 107},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 108},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 95},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 96},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_Your] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_DOT] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_detached] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_Conflicts] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Untracked] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_Changes] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [anon_sym_committed] = ACTIONS(1),
    [anon_sym_newfile] = ACTIONS(1),
    [anon_sym_modified] = ACTIONS(1),
    [anon_sym_renamed] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(45),
    [sym_subject] = STATE(31),
    [sym_message] = STATE(65),
    [sym_comment] = STATE(39),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_HEAD,
    ACTIONS(21), 1,
      anon_sym_Conflicts,
    ACTIONS(23), 1,
      anon_sym_Untracked,
    ACTIONS(25), 1,
      anon_sym_Changes,
    ACTIONS(29), 1,
      sym__word,
    STATE(22), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(27), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
    STATE(32), 4,
      sym__comment_body,
      sym__branch_declaration,
      sym_header,
      sym_change,
  [43] = 11,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_HEAD,
    ACTIONS(21), 1,
      anon_sym_Conflicts,
    ACTIONS(23), 1,
      anon_sym_Untracked,
    ACTIONS(25), 1,
      anon_sym_Changes,
    ACTIONS(31), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(27), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
    STATE(32), 4,
      sym__comment_body,
      sym__branch_declaration,
      sym_header,
      sym_change,
  [83] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [104] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_source_token1,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [125] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_source_token1,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [146] = 6,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(52), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [167] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [188] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [209] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [230] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [251] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(64), 2,
      sym_message,
      sym_comment,
  [272] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(68), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [286] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    ACTIONS(75), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [300] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_source_token1,
    ACTIONS(79), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
  [313] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym_source_token1,
    ACTIONS(86), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__comment_body_repeat1,
  [326] = 4,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_source_token1,
    ACTIONS(93), 1,
      aux_sym_subject_token2,
    STATE(20), 1,
      aux_sym_subject_repeat1,
  [339] = 3,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(97), 2,
      sym__word,
      sym_item,
  [350] = 3,
    ACTIONS(99), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(101), 2,
      sym__word,
      sym_item,
  [361] = 4,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_source_token1,
    ACTIONS(108), 1,
      aux_sym_subject_token2,
    STATE(21), 1,
      aux_sym_subject_repeat1,
  [374] = 4,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      aux_sym_source_token1,
    ACTIONS(114), 1,
      aux_sym_subject_token2,
    STATE(21), 1,
      aux_sym_subject_repeat1,
  [387] = 4,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_source_token1,
    ACTIONS(121), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__comment_body_repeat1,
  [400] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_source_token1,
    ACTIONS(123), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
  [413] = 3,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      aux_sym_message_repeat1,
    ACTIONS(127), 2,
      sym__word,
      sym_item,
  [424] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(131), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [433] = 3,
    ACTIONS(84), 1,
      aux_sym_source_token1,
    ACTIONS(133), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__comment_body_repeat1,
  [443] = 3,
    ACTIONS(136), 1,
      aux_sym_path_token1,
    STATE(23), 1,
      aux_sym_path_repeat1,
    STATE(36), 1,
      sym_path,
  [453] = 2,
    ACTIONS(140), 1,
      anon_sym_DASH_GT,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [461] = 3,
    ACTIONS(142), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    STATE(28), 1,
      sym_path,
  [471] = 3,
    ACTIONS(119), 1,
      aux_sym_source_token1,
    ACTIONS(144), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__comment_body_repeat1,
  [481] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      aux_sym_source_token1,
  [488] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [493] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [498] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [503] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [508] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [513] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [518] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [523] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      aux_sym_source_token1,
  [530] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [535] = 1,
    ACTIONS(166), 1,
      anon_sym_detached,
  [539] = 1,
    ACTIONS(168), 1,
      sym_commit,
  [543] = 1,
    ACTIONS(170), 1,
      anon_sym_up,
  [547] = 1,
    ACTIONS(172), 1,
      anon_sym_committed,
  [551] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [555] = 1,
    ACTIONS(176), 1,
      anon_sym_be,
  [559] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [563] = 1,
    ACTIONS(180), 1,
      anon_sym_to,
  [567] = 1,
    ACTIONS(182), 1,
      anon_sym_at,
  [571] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [575] = 1,
    ACTIONS(186), 1,
      anon_sym_is,
  [579] = 1,
    ACTIONS(188), 1,
      sym__word,
  [583] = 1,
    ACTIONS(190), 1,
      anon_sym_date,
  [587] = 1,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [591] = 1,
    ACTIONS(194), 1,
      anon_sym_to,
  [595] = 1,
    ACTIONS(196), 1,
      anon_sym_with,
  [599] = 1,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
  [603] = 1,
    ACTIONS(200), 1,
      aux_sym__branch_declaration_token1,
  [607] = 1,
    ACTIONS(202), 1,
      anon_sym_SQUOTE_DOT,
  [611] = 1,
    ACTIONS(204), 1,
      anon_sym_files,
  [615] = 1,
    ACTIONS(206), 1,
      anon_sym_COLON,
  [619] = 1,
    ACTIONS(208), 1,
      anon_sym_branch,
  [623] = 1,
    ACTIONS(210), 1,
      anon_sym_branch,
  [627] = 1,
    ACTIONS(212), 1,
      aux_sym_source_token1,
  [631] = 1,
    ACTIONS(162), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 83,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 125,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 209,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 272,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 300,
  [SMALL_STATE(16)] = 313,
  [SMALL_STATE(17)] = 326,
  [SMALL_STATE(18)] = 339,
  [SMALL_STATE(19)] = 350,
  [SMALL_STATE(20)] = 361,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 387,
  [SMALL_STATE(23)] = 400,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 424,
  [SMALL_STATE(26)] = 433,
  [SMALL_STATE(27)] = 443,
  [SMALL_STATE(28)] = 453,
  [SMALL_STATE(29)] = 461,
  [SMALL_STATE(30)] = 471,
  [SMALL_STATE(31)] = 481,
  [SMALL_STATE(32)] = 488,
  [SMALL_STATE(33)] = 493,
  [SMALL_STATE(34)] = 498,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 513,
  [SMALL_STATE(38)] = 518,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 535,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 543,
  [SMALL_STATE(44)] = 547,
  [SMALL_STATE(45)] = 551,
  [SMALL_STATE(46)] = 555,
  [SMALL_STATE(47)] = 559,
  [SMALL_STATE(48)] = 563,
  [SMALL_STATE(49)] = 567,
  [SMALL_STATE(50)] = 571,
  [SMALL_STATE(51)] = 575,
  [SMALL_STATE(52)] = 579,
  [SMALL_STATE(53)] = 583,
  [SMALL_STATE(54)] = 587,
  [SMALL_STATE(55)] = 591,
  [SMALL_STATE(56)] = 595,
  [SMALL_STATE(57)] = 599,
  [SMALL_STATE(58)] = 603,
  [SMALL_STATE(59)] = 607,
  [SMALL_STATE(60)] = 611,
  [SMALL_STATE(61)] = 615,
  [SMALL_STATE(62)] = 619,
  [SMALL_STATE(63)] = 623,
  [SMALL_STATE(64)] = 627,
  [SMALL_STATE(65)] = 631,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(16),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(19),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(26),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitcommit(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
