#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
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
  aux_sym__comment_body_token1 = 15,
  anon_sym_SQUOTE_DOT = 16,
  anon_sym_HEAD = 17,
  anon_sym_detached = 18,
  anon_sym_at = 19,
  anon_sym_Conflicts = 20,
  anon_sym_COLON = 21,
  anon_sym_Changes = 22,
  anon_sym_be = 23,
  anon_sym_committed = 24,
  anon_sym_newfile = 25,
  anon_sym_modified = 26,
  anon_sym_renamed = 27,
  anon_sym_deleted = 28,
  anon_sym_DASH_GT = 29,
  sym_commit = 30,
  sym__word = 31,
  aux_sym_path_token1 = 32,
  sym_item = 33,
  sym_source = 34,
  sym__body_line = 35,
  sym_subject = 36,
  sym_message = 37,
  sym_comment = 38,
  sym__comment_body = 39,
  sym_header = 40,
  sym_change = 41,
  sym_path = 42,
  aux_sym_source_repeat1 = 43,
  aux_sym_subject_repeat1 = 44,
  aux_sym_message_repeat1 = 45,
  aux_sym__comment_body_repeat1 = 46,
  aux_sym_path_repeat1 = 47,
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
  [aux_sym__comment_body_token1] = "branch",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_detached] = "detached",
  [anon_sym_at] = "at",
  [anon_sym_Conflicts] = "Conflicts",
  [anon_sym_COLON] = ":",
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
  [aux_sym__comment_body_token1] = aux_sym__comment_body_token1,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_detached] = anon_sym_detached,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_Conflicts] = anon_sym_Conflicts,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [aux_sym__comment_body_token1] = {
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
    [2] = aux_sym__comment_body_token1,
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
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\'') ADVANCE(116);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == 'C') ADVANCE(44);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(60);
      if (lookahead == 'Y') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(101);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(134);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'Y') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(136);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'h') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 47:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(111);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 83:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(181);
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(118);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(92)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(104);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 93:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(93)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(182);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 94:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'Y') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(94)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 95:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(95)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(184);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 96:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(96)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(136);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 97:
      if (eof) ADVANCE(98);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(102);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(104);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(117);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(134);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == 'Y') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(148);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(135);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(99);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(136);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(181);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(83)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 94},
  [3] = {.lex_state = 94},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 93},
  [14] = {.lex_state = 93},
  [15] = {.lex_state = 95},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 97},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 96},
  [20] = {.lex_state = 97},
  [21] = {.lex_state = 96},
  [22] = {.lex_state = 95},
  [23] = {.lex_state = 97},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 95},
  [28] = {.lex_state = 96},
  [29] = {.lex_state = 95},
  [30] = {.lex_state = 96},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 83},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_source] = STATE(44),
    [sym_subject] = STATE(34),
    [sym_message] = STATE(62),
    [sym_comment] = STATE(39),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      anon_sym_Changes,
    ACTIONS(27), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__comment_body_repeat1,
    STATE(31), 3,
      sym__comment_body,
      sym_header,
      sym_change,
    ACTIONS(25), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [39] = 10,
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
      anon_sym_Changes,
    ACTIONS(29), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
    STATE(31), 3,
      sym__comment_body,
      sym_header,
      sym_change,
    ACTIONS(25), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [75] = 6,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_source_token1,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [96] = 6,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_source_token1,
    ACTIONS(44), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [117] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_source_token1,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [138] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_source_token1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [159] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      aux_sym_source_token1,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [180] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      aux_sym_source_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [201] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      aux_sym_source_token1,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [222] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [243] = 6,
    ACTIONS(35), 1,
      aux_sym_message_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      aux_sym_source_token1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [264] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(66), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [278] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(72), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [292] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_source_token1,
    ACTIONS(77), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
  [305] = 3,
    ACTIONS(80), 1,
      aux_sym_source_token1,
    STATE(16), 1,
      aux_sym_message_repeat1,
    ACTIONS(82), 2,
      sym__word,
      sym_item,
  [316] = 4,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_source_token1,
    ACTIONS(89), 1,
      aux_sym_subject_token2,
    STATE(20), 1,
      aux_sym_subject_repeat1,
  [329] = 3,
    ACTIONS(91), 1,
      aux_sym_source_token1,
    STATE(16), 1,
      aux_sym_message_repeat1,
    ACTIONS(93), 2,
      sym__word,
      sym_item,
  [340] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(99), 1,
      sym__word,
    STATE(19), 1,
      aux_sym__comment_body_repeat1,
  [353] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      aux_sym_source_token1,
    ACTIONS(106), 1,
      aux_sym_subject_token2,
    STATE(23), 1,
      aux_sym_subject_repeat1,
  [366] = 4,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      aux_sym_source_token1,
    ACTIONS(112), 1,
      sym__word,
    STATE(19), 1,
      aux_sym__comment_body_repeat1,
  [379] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_source_token1,
    ACTIONS(114), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
  [392] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_source_token1,
    ACTIONS(120), 1,
      aux_sym_subject_token2,
    STATE(23), 1,
      aux_sym_subject_repeat1,
  [405] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(125), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [414] = 3,
    ACTIONS(127), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      aux_sym_message_repeat1,
    ACTIONS(129), 2,
      sym__word,
      sym_item,
  [425] = 2,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [433] = 3,
    ACTIONS(135), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    STATE(26), 1,
      sym_path,
  [443] = 3,
    ACTIONS(110), 1,
      aux_sym_source_token1,
    ACTIONS(137), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [453] = 3,
    ACTIONS(139), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(36), 1,
      sym_path,
  [463] = 3,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(141), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [473] = 1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [478] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [483] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [488] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 1,
      aux_sym_source_token1,
  [495] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [500] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [505] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [510] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [515] = 2,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(160), 1,
      aux_sym_source_token1,
  [522] = 1,
    ACTIONS(162), 1,
      anon_sym_branch,
  [526] = 1,
    ACTIONS(164), 1,
      anon_sym_committed,
  [530] = 1,
    ACTIONS(166), 1,
      anon_sym_up,
  [534] = 1,
    ACTIONS(168), 1,
      sym_commit,
  [538] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [542] = 1,
    ACTIONS(172), 1,
      anon_sym_to,
  [546] = 1,
    ACTIONS(174), 1,
      anon_sym_be,
  [550] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [554] = 1,
    ACTIONS(178), 1,
      anon_sym_at,
  [558] = 1,
    ACTIONS(180), 1,
      anon_sym_is,
  [562] = 1,
    ACTIONS(182), 1,
      anon_sym_date,
  [566] = 1,
    ACTIONS(184), 1,
      sym__word,
  [570] = 1,
    ACTIONS(186), 1,
      anon_sym_COLON,
  [574] = 1,
    ACTIONS(188), 1,
      anon_sym_with,
  [578] = 1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
  [582] = 1,
    ACTIONS(192), 1,
      aux_sym__comment_body_token1,
  [586] = 1,
    ACTIONS(194), 1,
      anon_sym_SQUOTE_DOT,
  [590] = 1,
    ACTIONS(196), 1,
      anon_sym_to,
  [594] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [598] = 1,
    ACTIONS(200), 1,
      anon_sym_detached,
  [602] = 1,
    ACTIONS(202), 1,
      anon_sym_branch,
  [606] = 1,
    ACTIONS(204), 1,
      aux_sym_source_token1,
  [610] = 1,
    ACTIONS(160), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 75,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 159,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 243,
  [SMALL_STATE(13)] = 264,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 292,
  [SMALL_STATE(16)] = 305,
  [SMALL_STATE(17)] = 316,
  [SMALL_STATE(18)] = 329,
  [SMALL_STATE(19)] = 340,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 379,
  [SMALL_STATE(23)] = 392,
  [SMALL_STATE(24)] = 405,
  [SMALL_STATE(25)] = 414,
  [SMALL_STATE(26)] = 425,
  [SMALL_STATE(27)] = 433,
  [SMALL_STATE(28)] = 443,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 463,
  [SMALL_STATE(31)] = 473,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 488,
  [SMALL_STATE(35)] = 495,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 505,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 515,
  [SMALL_STATE(40)] = 522,
  [SMALL_STATE(41)] = 526,
  [SMALL_STATE(42)] = 530,
  [SMALL_STATE(43)] = 534,
  [SMALL_STATE(44)] = 538,
  [SMALL_STATE(45)] = 542,
  [SMALL_STATE(46)] = 546,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 554,
  [SMALL_STATE(49)] = 558,
  [SMALL_STATE(50)] = 562,
  [SMALL_STATE(51)] = 566,
  [SMALL_STATE(52)] = 570,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 578,
  [SMALL_STATE(55)] = 582,
  [SMALL_STATE(56)] = 586,
  [SMALL_STATE(57)] = 590,
  [SMALL_STATE(58)] = 594,
  [SMALL_STATE(59)] = 598,
  [SMALL_STATE(60)] = 602,
  [SMALL_STATE(61)] = 606,
  [SMALL_STATE(62)] = 610,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(15),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(23),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 10),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 3, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
