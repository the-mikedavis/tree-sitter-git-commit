#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 13
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
  anon_sym_SQUOTE_DOT = 15,
  anon_sym_You = 16,
  anon_sym_are = 17,
  anon_sym_currently = 18,
  anon_sym_rebasing = 19,
  anon_sym_on = 20,
  anon_sym_DOT = 21,
  anon_sym_HEAD = 22,
  anon_sym_detached = 23,
  anon_sym_at = 24,
  anon_sym_Conflicts = 25,
  anon_sym_COLON = 26,
  anon_sym_Untracked = 27,
  anon_sym_files = 28,
  anon_sym_Changes = 29,
  anon_sym_be = 30,
  anon_sym_committed = 31,
  anon_sym_newfile = 32,
  anon_sym_modified = 33,
  anon_sym_renamed = 34,
  anon_sym_deleted = 35,
  anon_sym_DASH_GT = 36,
  sym_commit = 37,
  sym__word = 38,
  sym_branch = 39,
  aux_sym_path_token1 = 40,
  sym_item = 41,
  sym_source = 42,
  sym__body_line = 43,
  sym_subject = 44,
  sym_message = 45,
  sym_comment = 46,
  sym__comment_body = 47,
  sym__branch_declaration = 48,
  sym_header = 49,
  sym_change = 50,
  sym_path = 51,
  aux_sym_source_repeat1 = 52,
  aux_sym_subject_repeat1 = 53,
  aux_sym_message_repeat1 = 54,
  aux_sym__comment_body_repeat1 = 55,
  aux_sym_path_repeat1 = 56,
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
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_You] = "You",
  [anon_sym_are] = "are",
  [anon_sym_currently] = "currently",
  [anon_sym_rebasing] = "rebasing",
  [anon_sym_on] = "on",
  [anon_sym_DOT] = ".",
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
  [sym_branch] = "branch",
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
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_You] = anon_sym_You,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_currently] = anon_sym_currently,
  [anon_sym_rebasing] = anon_sym_rebasing,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym_branch] = sym_branch,
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
  [anon_sym_SQUOTE_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_You] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_currently] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebasing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_branch] = {
    .visible = true,
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
    [2] = sym_branch,
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
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\'') ADVANCE(138);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(145);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(12);
      if (lookahead == 'O') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(75);
      if (lookahead == 'Y') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(32);
      if (lookahead == 'c') ADVANCE(83);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == 'u') ADVANCE(86);
      if (lookahead == 'w') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(195);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'Y') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(196);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(160);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(146);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 86:
      if (lookahead == 'p') ADVANCE(134);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 105:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(249);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(251);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(115)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 116:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(116)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(252);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 117:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'Y') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(196);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 118:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(195);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(224);
      if (lookahead == 'H') ADVANCE(201);
      if (lookahead == 'O') ADVANCE(232);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'Y') ADVANCE(237);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'n') ADVANCE(213);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(196);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(249);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(247);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(250);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(254);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 117},
  [3] = {.lex_state = 117},
  [4] = {.lex_state = 115},
  [5] = {.lex_state = 115},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 115},
  [8] = {.lex_state = 115},
  [9] = {.lex_state = 115},
  [10] = {.lex_state = 115},
  [11] = {.lex_state = 115},
  [12] = {.lex_state = 115},
  [13] = {.lex_state = 116},
  [14] = {.lex_state = 116},
  [15] = {.lex_state = 120},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 120},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 120},
  [21] = {.lex_state = 115},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 118},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 119},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 119},
  [29] = {.lex_state = 118},
  [30] = {.lex_state = 118},
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
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 108},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 108},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
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
    [anon_sym_You] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(1),
    [anon_sym_currently] = ACTIONS(1),
    [anon_sym_rebasing] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
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
    [sym_source] = STATE(46),
    [sym_subject] = STATE(31),
    [sym_message] = STATE(78),
    [sym_comment] = STATE(41),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_You,
    ACTIONS(21), 1,
      anon_sym_HEAD,
    ACTIONS(23), 1,
      anon_sym_Conflicts,
    ACTIONS(25), 1,
      anon_sym_Untracked,
    ACTIONS(27), 1,
      anon_sym_Changes,
    ACTIONS(31), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(29), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
    STATE(32), 4,
      sym__comment_body,
      sym__branch_declaration,
      sym_header,
      sym_change,
  [46] = 12,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_You,
    ACTIONS(21), 1,
      anon_sym_HEAD,
    ACTIONS(23), 1,
      anon_sym_Conflicts,
    ACTIONS(25), 1,
      anon_sym_Untracked,
    ACTIONS(27), 1,
      anon_sym_Changes,
    ACTIONS(33), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(29), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
    STATE(32), 4,
      sym__comment_body,
      sym__branch_declaration,
      sym_header,
      sym_change,
  [89] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [110] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_source_token1,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [131] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [152] = 6,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(54), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [173] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [194] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [215] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_source_token1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [236] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [257] = 6,
    ACTIONS(39), 1,
      aux_sym_message_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(77), 2,
      sym_message,
      sym_comment,
  [278] = 4,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(70), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [292] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_path_token1,
    STATE(14), 1,
      aux_sym_path_repeat1,
    ACTIONS(76), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [306] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(85), 1,
      aux_sym_subject_token2,
    STATE(20), 1,
      aux_sym_subject_repeat1,
  [319] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_source_token1,
    ACTIONS(91), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__comment_body_repeat1,
  [332] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      aux_sym_source_token1,
    ACTIONS(98), 1,
      aux_sym_subject_token2,
    STATE(15), 1,
      aux_sym_subject_repeat1,
  [345] = 3,
    ACTIONS(100), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      aux_sym_message_repeat1,
    ACTIONS(102), 2,
      sym__word,
      sym_item,
  [356] = 3,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      aux_sym_message_repeat1,
    ACTIONS(107), 2,
      sym__word,
      sym_item,
  [367] = 4,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      aux_sym_source_token1,
    ACTIONS(113), 1,
      aux_sym_subject_token2,
    STATE(20), 1,
      aux_sym_subject_repeat1,
  [380] = 2,
    ACTIONS(116), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(118), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [389] = 4,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_source_token1,
    ACTIONS(120), 1,
      aux_sym_path_token1,
    STATE(24), 1,
      aux_sym_path_repeat1,
  [402] = 4,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_source_token1,
    ACTIONS(126), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__comment_body_repeat1,
  [415] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    ACTIONS(128), 1,
      aux_sym_path_token1,
    STATE(24), 1,
      aux_sym_path_repeat1,
  [428] = 3,
    ACTIONS(131), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(133), 2,
      sym__word,
      sym_item,
  [439] = 3,
    ACTIONS(135), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(36), 1,
      sym_path,
  [449] = 2,
    ACTIONS(139), 1,
      anon_sym_DASH_GT,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [457] = 3,
    ACTIONS(141), 1,
      aux_sym_path_token1,
    STATE(13), 1,
      aux_sym_path_repeat1,
    STATE(27), 1,
      sym_path,
  [467] = 3,
    ACTIONS(124), 1,
      aux_sym_source_token1,
    ACTIONS(143), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [477] = 3,
    ACTIONS(89), 1,
      aux_sym_source_token1,
    ACTIONS(145), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [487] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_source_token1,
  [494] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [499] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [504] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [509] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [514] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [519] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [524] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [529] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [534] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [539] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      aux_sym_source_token1,
  [546] = 1,
    ACTIONS(170), 1,
      anon_sym_files,
  [550] = 1,
    ACTIONS(172), 1,
      anon_sym_up,
  [554] = 1,
    ACTIONS(174), 1,
      anon_sym_rebasing,
  [558] = 1,
    ACTIONS(176), 1,
      sym_commit,
  [562] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [566] = 1,
    ACTIONS(180), 1,
      anon_sym_committed,
  [570] = 1,
    ACTIONS(182), 1,
      anon_sym_be,
  [574] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [578] = 1,
    ACTIONS(186), 1,
      anon_sym_at,
  [582] = 1,
    ACTIONS(188), 1,
      anon_sym_to,
  [586] = 1,
    ACTIONS(190), 1,
      anon_sym_branch,
  [590] = 1,
    ACTIONS(192), 1,
      anon_sym_currently,
  [594] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [598] = 1,
    ACTIONS(196), 1,
      anon_sym_is,
  [602] = 1,
    ACTIONS(198), 1,
      sym__word,
  [606] = 1,
    ACTIONS(200), 1,
      anon_sym_date,
  [610] = 1,
    ACTIONS(202), 1,
      anon_sym_SQUOTE,
  [614] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [618] = 1,
    ACTIONS(206), 1,
      anon_sym_to,
  [622] = 1,
    ACTIONS(208), 1,
      anon_sym_with,
  [626] = 1,
    ACTIONS(210), 1,
      sym_branch,
  [630] = 1,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
  [634] = 1,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
  [638] = 1,
    ACTIONS(216), 1,
      sym_branch,
  [642] = 1,
    ACTIONS(218), 1,
      anon_sym_on,
  [646] = 1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE_DOT,
  [650] = 1,
    ACTIONS(222), 1,
      anon_sym_SQUOTE,
  [654] = 1,
    ACTIONS(224), 1,
      anon_sym_COLON,
  [658] = 1,
    ACTIONS(226), 1,
      sym_commit,
  [662] = 1,
    ACTIONS(228), 1,
      anon_sym_SQUOTE,
  [666] = 1,
    ACTIONS(230), 1,
      anon_sym_DOT,
  [670] = 1,
    ACTIONS(232), 1,
      anon_sym_detached,
  [674] = 1,
    ACTIONS(234), 1,
      anon_sym_are,
  [678] = 1,
    ACTIONS(236), 1,
      anon_sym_branch,
  [682] = 1,
    ACTIONS(238), 1,
      anon_sym_branch,
  [686] = 1,
    ACTIONS(240), 1,
      aux_sym_source_token1,
  [690] = 1,
    ACTIONS(168), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 152,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 215,
  [SMALL_STATE(11)] = 236,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 306,
  [SMALL_STATE(16)] = 319,
  [SMALL_STATE(17)] = 332,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 356,
  [SMALL_STATE(20)] = 367,
  [SMALL_STATE(21)] = 380,
  [SMALL_STATE(22)] = 389,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 428,
  [SMALL_STATE(26)] = 439,
  [SMALL_STATE(27)] = 449,
  [SMALL_STATE(28)] = 457,
  [SMALL_STATE(29)] = 467,
  [SMALL_STATE(30)] = 477,
  [SMALL_STATE(31)] = 487,
  [SMALL_STATE(32)] = 494,
  [SMALL_STATE(33)] = 499,
  [SMALL_STATE(34)] = 504,
  [SMALL_STATE(35)] = 509,
  [SMALL_STATE(36)] = 514,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 524,
  [SMALL_STATE(39)] = 529,
  [SMALL_STATE(40)] = 534,
  [SMALL_STATE(41)] = 539,
  [SMALL_STATE(42)] = 546,
  [SMALL_STATE(43)] = 550,
  [SMALL_STATE(44)] = 554,
  [SMALL_STATE(45)] = 558,
  [SMALL_STATE(46)] = 562,
  [SMALL_STATE(47)] = 566,
  [SMALL_STATE(48)] = 570,
  [SMALL_STATE(49)] = 574,
  [SMALL_STATE(50)] = 578,
  [SMALL_STATE(51)] = 582,
  [SMALL_STATE(52)] = 586,
  [SMALL_STATE(53)] = 590,
  [SMALL_STATE(54)] = 594,
  [SMALL_STATE(55)] = 598,
  [SMALL_STATE(56)] = 602,
  [SMALL_STATE(57)] = 606,
  [SMALL_STATE(58)] = 610,
  [SMALL_STATE(59)] = 614,
  [SMALL_STATE(60)] = 618,
  [SMALL_STATE(61)] = 622,
  [SMALL_STATE(62)] = 626,
  [SMALL_STATE(63)] = 630,
  [SMALL_STATE(64)] = 634,
  [SMALL_STATE(65)] = 638,
  [SMALL_STATE(66)] = 642,
  [SMALL_STATE(67)] = 646,
  [SMALL_STATE(68)] = 650,
  [SMALL_STATE(69)] = 654,
  [SMALL_STATE(70)] = 658,
  [SMALL_STATE(71)] = 662,
  [SMALL_STATE(72)] = 666,
  [SMALL_STATE(73)] = 670,
  [SMALL_STATE(74)] = 674,
  [SMALL_STATE(75)] = 678,
  [SMALL_STATE(76)] = 682,
  [SMALL_STATE(77)] = 686,
  [SMALL_STATE(78)] = 690,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(14),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(24),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 13),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
