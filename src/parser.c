#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
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
  anon_sym_Changes = 6,
  anon_sym_to = 7,
  anon_sym_be = 8,
  anon_sym_committed = 9,
  anon_sym_COLON = 10,
  anon_sym_On = 11,
  anon_sym_branch = 12,
  anon_sym_Your = 13,
  anon_sym_is = 14,
  anon_sym_up = 15,
  anon_sym_date = 16,
  anon_sym_with = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_SQUOTE_DOT = 19,
  anon_sym_You = 20,
  anon_sym_are = 21,
  anon_sym_currently = 22,
  anon_sym_rebasing = 23,
  anon_sym_on = 24,
  anon_sym_DOT = 25,
  anon_sym_HEAD = 26,
  anon_sym_detached = 27,
  anon_sym_at = 28,
  anon_sym_Conflicts = 29,
  anon_sym_Untracked = 30,
  anon_sym_files = 31,
  anon_sym_newfile = 32,
  anon_sym_modified = 33,
  anon_sym_renamed = 34,
  anon_sym_deleted = 35,
  anon_sym_COLON2 = 36,
  anon_sym_DASH_GT = 37,
  sym_commit = 38,
  sym__word = 39,
  sym_branch = 40,
  aux_sym_path_token1 = 41,
  sym_item = 42,
  sym_source = 43,
  sym__body_line = 44,
  sym_subject = 45,
  sym_message = 46,
  sym_comment = 47,
  sym__comment_body = 48,
  sym_summary = 49,
  sym__changes_to_be_committed = 50,
  sym__branch_declaration = 51,
  sym_header = 52,
  sym_change = 53,
  sym_path = 54,
  aux_sym_source_repeat1 = 55,
  aux_sym_subject_repeat1 = 56,
  aux_sym_message_repeat1 = 57,
  aux_sym__comment_body_repeat1 = 58,
  aux_sym_summary_repeat1 = 59,
  aux_sym_summary_repeat2 = 60,
  aux_sym_path_repeat1 = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_Changes] = "Changes",
  [anon_sym_to] = "to",
  [anon_sym_be] = "be",
  [anon_sym_committed] = "committed",
  [anon_sym_COLON] = ":",
  [anon_sym_On] = "On",
  [anon_sym_branch] = "branch",
  [anon_sym_Your] = "Your",
  [anon_sym_is] = "is",
  [anon_sym_up] = "up",
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
  [anon_sym_Untracked] = "Untracked",
  [anon_sym_files] = "files",
  [anon_sym_newfile] = "new file",
  [anon_sym_modified] = "modified",
  [anon_sym_renamed] = "renamed",
  [anon_sym_deleted] = "deleted",
  [anon_sym_COLON2] = ":",
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
  [sym_summary] = "summary",
  [sym__changes_to_be_committed] = "header",
  [sym__branch_declaration] = "_branch_declaration",
  [sym_header] = "header",
  [sym_change] = "change",
  [sym_path] = "path",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_summary_repeat2] = "summary_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_Changes] = anon_sym_Changes,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_committed] = anon_sym_committed,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_Your] = anon_sym_Your,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_up] = anon_sym_up,
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
  [anon_sym_Untracked] = anon_sym_Untracked,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_newfile] = anon_sym_newfile,
  [anon_sym_modified] = anon_sym_modified,
  [anon_sym_renamed] = anon_sym_renamed,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_COLON2] = anon_sym_COLON,
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
  [sym_summary] = sym_summary,
  [sym__changes_to_be_committed] = sym_header,
  [sym__branch_declaration] = sym__branch_declaration,
  [sym_header] = sym_header,
  [sym_change] = sym_change,
  [sym_path] = sym_path,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
  [aux_sym_summary_repeat2] = aux_sym_summary_repeat2,
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
  [anon_sym_Changes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_Untracked] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
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
  [anon_sym_COLON2] = {
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
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [sym__changes_to_be_committed] = {
    .visible = true,
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
  [aux_sym_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat2] = {
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
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\'') ADVANCE(143);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == 'C') ADVANCE(55);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(76);
      if (lookahead == 'U') ADVANCE(77);
      if (lookahead == 'Y') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(125);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(232);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(216);
      if (lookahead == 'U') ADVANCE(217);
      if (lookahead == 'Y') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(144);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(151);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 108:
      if (lookahead == 'y') ADVANCE(147);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(109)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(229);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(231);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 117:
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(128);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 118:
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(216);
      if (lookahead == 'U') ADVANCE(217);
      if (lookahead == 'Y') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(120)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(125);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commit);
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
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'H') ADVANCE(202);
      if (lookahead == 'O') ADVANCE(216);
      if (lookahead == 'U') ADVANCE(217);
      if (lookahead == 'Y') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(123);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(109)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(227);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(229);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(231);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 118},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 117},
  [5] = {.lex_state = 117},
  [6] = {.lex_state = 117},
  [7] = {.lex_state = 117},
  [8] = {.lex_state = 117},
  [9] = {.lex_state = 117},
  [10] = {.lex_state = 117},
  [11] = {.lex_state = 117},
  [12] = {.lex_state = 117},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 120},
  [17] = {.lex_state = 121},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 120},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 121},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 117},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 121},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 119},
  [32] = {.lex_state = 120},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 119},
  [38] = {.lex_state = 119},
  [39] = {.lex_state = 119},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 10},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 109},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 110},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 110},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_Changes] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [anon_sym_committed] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_Your] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
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
    [anon_sym_Untracked] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_newfile] = ACTIONS(1),
    [anon_sym_modified] = ACTIONS(1),
    [anon_sym_renamed] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(51),
    [sym_subject] = STATE(46),
    [sym_message] = STATE(94),
    [sym_comment] = STATE(44),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_Changes,
    ACTIONS(17), 1,
      anon_sym_On,
    ACTIONS(19), 1,
      anon_sym_Your,
    ACTIONS(21), 1,
      anon_sym_You,
    ACTIONS(23), 1,
      anon_sym_HEAD,
    ACTIONS(25), 1,
      anon_sym_Conflicts,
    ACTIONS(27), 1,
      anon_sym_Untracked,
    ACTIONS(29), 1,
      sym__word,
    STATE(16), 1,
      aux_sym__comment_body_repeat1,
    STATE(72), 1,
      sym_header,
    STATE(73), 1,
      sym__changes_to_be_committed,
    STATE(45), 3,
      sym__comment_body,
      sym_summary,
      sym__branch_declaration,
  [45] = 13,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_Changes,
    ACTIONS(17), 1,
      anon_sym_On,
    ACTIONS(19), 1,
      anon_sym_Your,
    ACTIONS(21), 1,
      anon_sym_You,
    ACTIONS(23), 1,
      anon_sym_HEAD,
    ACTIONS(25), 1,
      anon_sym_Conflicts,
    ACTIONS(27), 1,
      anon_sym_Untracked,
    ACTIONS(31), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__comment_body_repeat1,
    STATE(72), 1,
      sym_header,
    STATE(73), 1,
      sym__changes_to_be_committed,
    STATE(45), 3,
      sym__comment_body,
      sym_summary,
      sym__branch_declaration,
  [87] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [108] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym_source_token1,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [129] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_source_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [150] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_source_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [171] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [192] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      aux_sym_source_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [213] = 6,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_source_token1,
    ACTIONS(56), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      anon_sym_POUND,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [234] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_source_token1,
    STATE(6), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [255] = 6,
    ACTIONS(37), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(93), 2,
      sym_message,
      sym_comment,
  [276] = 3,
    STATE(60), 1,
      sym_change,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(68), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [290] = 2,
    STATE(60), 1,
      sym_change,
    ACTIONS(68), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [300] = 5,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_source_token1,
    ACTIONS(72), 1,
      aux_sym_path_token1,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
  [316] = 4,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    ACTIONS(78), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [329] = 4,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      aux_sym_source_token1,
    ACTIONS(84), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [342] = 3,
    ACTIONS(88), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [353] = 3,
    ACTIONS(90), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_summary_repeat2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [364] = 3,
    ACTIONS(92), 1,
      aux_sym_source_token1,
    STATE(28), 1,
      aux_sym_message_repeat1,
    ACTIONS(94), 2,
      sym__word,
      sym_item,
  [375] = 3,
    ACTIONS(98), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(96), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [386] = 3,
    ACTIONS(103), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(101), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [397] = 4,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    ACTIONS(109), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [410] = 3,
    ACTIONS(114), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [421] = 4,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_source_token1,
    ACTIONS(121), 1,
      aux_sym_subject_token2,
    STATE(17), 1,
      aux_sym_subject_repeat1,
  [434] = 3,
    ACTIONS(125), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_summary_repeat2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [445] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(130), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [454] = 3,
    ACTIONS(132), 1,
      aux_sym_source_token1,
    STATE(30), 1,
      aux_sym_message_repeat1,
    ACTIONS(134), 2,
      sym__word,
      sym_item,
  [465] = 4,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 1,
      aux_sym_source_token1,
    ACTIONS(140), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [478] = 3,
    ACTIONS(143), 1,
      aux_sym_source_token1,
    STATE(30), 1,
      aux_sym_message_repeat1,
    ACTIONS(145), 2,
      sym__word,
      sym_item,
  [489] = 3,
    ACTIONS(148), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(48), 1,
      sym_path,
  [499] = 3,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    ACTIONS(150), 1,
      sym__word,
    STATE(35), 1,
      aux_sym__comment_body_repeat1,
  [509] = 3,
    ACTIONS(101), 1,
      aux_sym_source_token1,
    ACTIONS(152), 1,
      aux_sym_path_token1,
    STATE(37), 1,
      aux_sym_path_repeat1,
  [519] = 1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [525] = 3,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    ACTIONS(156), 1,
      sym__word,
    STATE(35), 1,
      aux_sym__comment_body_repeat1,
  [535] = 1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [541] = 3,
    ACTIONS(96), 1,
      aux_sym_source_token1,
    ACTIONS(161), 1,
      aux_sym_path_token1,
    STATE(37), 1,
      aux_sym_path_repeat1,
  [551] = 3,
    ACTIONS(72), 1,
      aux_sym_path_token1,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(82), 1,
      sym_path,
  [561] = 3,
    ACTIONS(72), 1,
      aux_sym_path_token1,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
  [571] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [576] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [581] = 2,
    ACTIONS(168), 1,
      anon_sym_POUND,
    STATE(18), 1,
      aux_sym_summary_repeat1,
  [588] = 2,
    ACTIONS(170), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym_summary_repeat2,
  [595] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      aux_sym_source_token1,
  [602] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [607] = 2,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      aux_sym_source_token1,
  [614] = 1,
    ACTIONS(178), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [619] = 2,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      anon_sym_DASH_GT,
  [626] = 1,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [631] = 1,
    ACTIONS(186), 1,
      anon_sym_up,
  [635] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [639] = 1,
    ACTIONS(190), 1,
      aux_sym_source_token1,
  [643] = 1,
    ACTIONS(192), 1,
      sym_commit,
  [647] = 1,
    ACTIONS(194), 1,
      anon_sym_rebasing,
  [651] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [655] = 1,
    ACTIONS(198), 1,
      anon_sym_to,
  [659] = 1,
    ACTIONS(200), 1,
      anon_sym_branch,
  [663] = 1,
    ACTIONS(202), 1,
      anon_sym_committed,
  [667] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON2,
  [671] = 1,
    ACTIONS(206), 1,
      aux_sym_source_token1,
  [675] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [679] = 1,
    ACTIONS(210), 1,
      aux_sym_source_token1,
  [683] = 1,
    ACTIONS(212), 1,
      aux_sym_source_token1,
  [687] = 1,
    ACTIONS(214), 1,
      anon_sym_at,
  [691] = 1,
    ACTIONS(216), 1,
      anon_sym_currently,
  [695] = 1,
    ACTIONS(218), 1,
      anon_sym_is,
  [699] = 1,
    ACTIONS(220), 1,
      aux_sym_source_token1,
  [703] = 1,
    ACTIONS(222), 1,
      anon_sym_date,
  [707] = 1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
  [711] = 1,
    ACTIONS(226), 1,
      sym__word,
  [715] = 1,
    ACTIONS(228), 1,
      anon_sym_be,
  [719] = 1,
    ACTIONS(230), 1,
      aux_sym_source_token1,
  [723] = 1,
    ACTIONS(232), 1,
      aux_sym_source_token1,
  [727] = 1,
    ACTIONS(234), 1,
      anon_sym_with,
  [731] = 1,
    ACTIONS(236), 1,
      sym_branch,
  [735] = 1,
    ACTIONS(238), 1,
      anon_sym_files,
  [739] = 1,
    ACTIONS(240), 1,
      anon_sym_SQUOTE,
  [743] = 1,
    ACTIONS(242), 1,
      anon_sym_SQUOTE,
  [747] = 1,
    ACTIONS(244), 1,
      anon_sym_COLON,
  [751] = 1,
    ACTIONS(246), 1,
      sym_branch,
  [755] = 1,
    ACTIONS(248), 1,
      anon_sym_on,
  [759] = 1,
    ACTIONS(250), 1,
      aux_sym_source_token1,
  [763] = 1,
    ACTIONS(252), 1,
      anon_sym_SQUOTE_DOT,
  [767] = 1,
    ACTIONS(254), 1,
      anon_sym_SQUOTE,
  [771] = 1,
    ACTIONS(256), 1,
      anon_sym_detached,
  [775] = 1,
    ACTIONS(258), 1,
      sym_commit,
  [779] = 1,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
  [783] = 1,
    ACTIONS(262), 1,
      anon_sym_DOT,
  [787] = 1,
    ACTIONS(264), 1,
      anon_sym_are,
  [791] = 1,
    ACTIONS(266), 1,
      anon_sym_branch,
  [795] = 1,
    ACTIONS(268), 1,
      anon_sym_branch,
  [799] = 1,
    ACTIONS(270), 1,
      anon_sym_to,
  [803] = 1,
    ACTIONS(272), 1,
      aux_sym_source_token1,
  [807] = 1,
    ACTIONS(172), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 129,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 290,
  [SMALL_STATE(15)] = 300,
  [SMALL_STATE(16)] = 316,
  [SMALL_STATE(17)] = 329,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 364,
  [SMALL_STATE(21)] = 375,
  [SMALL_STATE(22)] = 386,
  [SMALL_STATE(23)] = 397,
  [SMALL_STATE(24)] = 410,
  [SMALL_STATE(25)] = 421,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 454,
  [SMALL_STATE(29)] = 465,
  [SMALL_STATE(30)] = 478,
  [SMALL_STATE(31)] = 489,
  [SMALL_STATE(32)] = 499,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 519,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 535,
  [SMALL_STATE(37)] = 541,
  [SMALL_STATE(38)] = 551,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 576,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 588,
  [SMALL_STATE(44)] = 595,
  [SMALL_STATE(45)] = 602,
  [SMALL_STATE(46)] = 607,
  [SMALL_STATE(47)] = 614,
  [SMALL_STATE(48)] = 619,
  [SMALL_STATE(49)] = 626,
  [SMALL_STATE(50)] = 631,
  [SMALL_STATE(51)] = 635,
  [SMALL_STATE(52)] = 639,
  [SMALL_STATE(53)] = 643,
  [SMALL_STATE(54)] = 647,
  [SMALL_STATE(55)] = 651,
  [SMALL_STATE(56)] = 655,
  [SMALL_STATE(57)] = 659,
  [SMALL_STATE(58)] = 663,
  [SMALL_STATE(59)] = 667,
  [SMALL_STATE(60)] = 671,
  [SMALL_STATE(61)] = 675,
  [SMALL_STATE(62)] = 679,
  [SMALL_STATE(63)] = 683,
  [SMALL_STATE(64)] = 687,
  [SMALL_STATE(65)] = 691,
  [SMALL_STATE(66)] = 695,
  [SMALL_STATE(67)] = 699,
  [SMALL_STATE(68)] = 703,
  [SMALL_STATE(69)] = 707,
  [SMALL_STATE(70)] = 711,
  [SMALL_STATE(71)] = 715,
  [SMALL_STATE(72)] = 719,
  [SMALL_STATE(73)] = 723,
  [SMALL_STATE(74)] = 727,
  [SMALL_STATE(75)] = 731,
  [SMALL_STATE(76)] = 735,
  [SMALL_STATE(77)] = 739,
  [SMALL_STATE(78)] = 743,
  [SMALL_STATE(79)] = 747,
  [SMALL_STATE(80)] = 751,
  [SMALL_STATE(81)] = 755,
  [SMALL_STATE(82)] = 759,
  [SMALL_STATE(83)] = 763,
  [SMALL_STATE(84)] = 767,
  [SMALL_STATE(85)] = 771,
  [SMALL_STATE(86)] = 775,
  [SMALL_STATE(87)] = 779,
  [SMALL_STATE(88)] = 783,
  [SMALL_STATE(89)] = 787,
  [SMALL_STATE(90)] = 791,
  [SMALL_STATE(91)] = 795,
  [SMALL_STATE(92)] = 799,
  [SMALL_STATE(93)] = 803,
  [SMALL_STATE(94)] = 807,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(23),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(14),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(29),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(30),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(35),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(37),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 13),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__changes_to_be_committed, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
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
