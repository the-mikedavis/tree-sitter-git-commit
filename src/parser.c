#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
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
  anon_sym_ahead = 20,
  anon_sym_behind = 21,
  anon_sym_of = 22,
  anon_sym_by = 23,
  aux_sym__branch_declaration_token1 = 24,
  aux_sym__branch_declaration_token2 = 25,
  anon_sym_DOT = 26,
  anon_sym_You = 27,
  anon_sym_are = 28,
  anon_sym_currently = 29,
  anon_sym_rebasing = 30,
  anon_sym_on = 31,
  anon_sym_HEAD = 32,
  anon_sym_detached = 33,
  anon_sym_at = 34,
  anon_sym_Conflicts = 35,
  anon_sym_Untracked = 36,
  anon_sym_files = 37,
  anon_sym_newfile = 38,
  anon_sym_modified = 39,
  anon_sym_renamed = 40,
  anon_sym_deleted = 41,
  anon_sym_COLON2 = 42,
  anon_sym_DASH_GT = 43,
  sym_commit = 44,
  sym__word = 45,
  sym_branch = 46,
  aux_sym_path_token1 = 47,
  sym_user = 48,
  sym_item = 49,
  sym_source = 50,
  sym__body_line = 51,
  sym_subject = 52,
  sym_message = 53,
  sym_comment = 54,
  sym__comment_body = 55,
  sym_summary = 56,
  sym__changes_to_be_committed = 57,
  sym__branch_declaration = 58,
  sym_header = 59,
  sym_change = 60,
  sym_path = 61,
  aux_sym_source_repeat1 = 62,
  aux_sym_subject_repeat1 = 63,
  aux_sym_message_repeat1 = 64,
  aux_sym__comment_body_repeat1 = 65,
  aux_sym_summary_repeat1 = 66,
  aux_sym_summary_repeat2 = 67,
  aux_sym_path_repeat1 = 68,
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
  [anon_sym_ahead] = "ahead",
  [anon_sym_behind] = "behind",
  [anon_sym_of] = "of",
  [anon_sym_by] = "by",
  [aux_sym__branch_declaration_token1] = "_branch_declaration_token1",
  [aux_sym__branch_declaration_token2] = "_branch_declaration_token2",
  [anon_sym_DOT] = ".",
  [anon_sym_You] = "You",
  [anon_sym_are] = "are",
  [anon_sym_currently] = "currently",
  [anon_sym_rebasing] = "rebasing",
  [anon_sym_on] = "on",
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
  [sym_user] = "user",
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
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_behind] = anon_sym_behind,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_by] = anon_sym_by,
  [aux_sym__branch_declaration_token1] = aux_sym__branch_declaration_token1,
  [aux_sym__branch_declaration_token2] = aux_sym__branch_declaration_token2,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_You] = anon_sym_You,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_currently] = anon_sym_currently,
  [anon_sym_rebasing] = anon_sym_rebasing,
  [anon_sym_on] = anon_sym_on,
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
  [sym_user] = sym_user,
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
  [anon_sym_ahead] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__branch_declaration_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__branch_declaration_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym_user] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '\'') ADVANCE(166);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(176);
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == 'C') ADVANCE(62);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(93);
      if (lookahead == 'U') ADVANCE(94);
      if (lookahead == 'Y') ADVANCE(101);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == 'c') ADVANCE(102);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(144);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(146);
      if (lookahead != 0) ADVANCE(145);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '@') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(228);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(264);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'Y') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(229);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ':') ADVANCE(158);
      if (lookahead == 'a') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(46);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(167);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(192);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(193);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(182);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(190);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(82);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(160);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(53);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(55);
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 127:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(129)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(263);
      END_STATE();
    case 130:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(130)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(261);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 138:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(138)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 139:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'Y') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(139)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(229);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 140:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(140)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(266);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 141:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(141)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 142:
      if (eof) ADVANCE(143);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '@') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(268);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '@') ADVANCE(149);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commit);
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
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '@') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(228);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(243);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == 'O') ADVANCE(247);
      if (lookahead == 'U') ADVANCE(248);
      if (lookahead == 'Y') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(229);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(230);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(130)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(258);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(262);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(265);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(264);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 139},
  [3] = {.lex_state = 139},
  [4] = {.lex_state = 138},
  [5] = {.lex_state = 138},
  [6] = {.lex_state = 138},
  [7] = {.lex_state = 138},
  [8] = {.lex_state = 138},
  [9] = {.lex_state = 138},
  [10] = {.lex_state = 138},
  [11] = {.lex_state = 138},
  [12] = {.lex_state = 138},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 140},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 138},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 141},
  [22] = {.lex_state = 142},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 142},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 141},
  [29] = {.lex_state = 142},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 141},
  [32] = {.lex_state = 141},
  [33] = {.lex_state = 140},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 140},
  [36] = {.lex_state = 140},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 140},
  [40] = {.lex_state = 140},
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
  [53] = {.lex_state = 129},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 130},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 129},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 129},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 10},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
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
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_behind] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [aux_sym__branch_declaration_token1] = ACTIONS(1),
    [aux_sym__branch_declaration_token2] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_You] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(1),
    [anon_sym_currently] = ACTIONS(1),
    [anon_sym_rebasing] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
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
    [sym_user] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(99),
    [sym_subject] = STATE(44),
    [sym_message] = STATE(62),
    [sym_comment] = STATE(49),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
    [sym_user] = ACTIONS(7),
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
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
    STATE(83), 1,
      sym_header,
    STATE(91), 1,
      sym__changes_to_be_committed,
    STATE(48), 3,
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
    STATE(83), 1,
      sym_header,
    STATE(91), 1,
      sym__changes_to_be_committed,
    STATE(48), 3,
      sym__comment_body,
      sym_summary,
      sym__branch_declaration,
  [87] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [109] = 6,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_source_token1,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [131] = 6,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [153] = 6,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [175] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_source_token1,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [197] = 6,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(6), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [219] = 6,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(4), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [241] = 6,
    ACTIONS(37), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(7), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [263] = 6,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      aux_sym_source_token1,
    ACTIONS(61), 1,
      anon_sym_POUND,
    ACTIONS(58), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(61), 2,
      sym_message,
      sym_comment,
  [285] = 3,
    STATE(52), 1,
      sym_change,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(66), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [299] = 3,
    ACTIONS(68), 1,
      aux_sym_source_token1,
    STATE(17), 1,
      aux_sym_message_repeat1,
    ACTIONS(70), 3,
      sym__word,
      sym_user,
      sym_item,
  [311] = 5,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_source_token1,
    ACTIONS(74), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_path,
  [327] = 3,
    ACTIONS(76), 1,
      aux_sym_source_token1,
    STATE(16), 1,
      aux_sym_message_repeat1,
    ACTIONS(78), 3,
      sym__word,
      sym_user,
      sym_item,
  [339] = 3,
    ACTIONS(81), 1,
      aux_sym_source_token1,
    STATE(16), 1,
      aux_sym_message_repeat1,
    ACTIONS(83), 3,
      sym__word,
      sym_user,
      sym_item,
  [351] = 2,
    STATE(52), 1,
      sym_change,
    ACTIONS(66), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [361] = 2,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 4,
      aux_sym_source_token1,
      aux_sym_message_token1,
      anon_sym_POUND,
      sym_user,
  [371] = 3,
    ACTIONS(91), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_summary_repeat2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [382] = 4,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    ACTIONS(97), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__comment_body_repeat1,
  [395] = 4,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    ACTIONS(104), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [408] = 3,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(23), 1,
      aux_sym_path_repeat1,
    ACTIONS(106), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [419] = 3,
    ACTIONS(113), 1,
      aux_sym_path_token1,
    STATE(23), 1,
      aux_sym_path_repeat1,
    ACTIONS(111), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [430] = 3,
    ACTIONS(115), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_summary_repeat1,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [441] = 4,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_source_token1,
    ACTIONS(121), 1,
      aux_sym_subject_token2,
    STATE(22), 1,
      aux_sym_subject_repeat1,
  [454] = 3,
    ACTIONS(125), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_summary_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [465] = 4,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 1,
      aux_sym_source_token1,
    ACTIONS(132), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__comment_body_repeat1,
  [478] = 4,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_source_token1,
    ACTIONS(138), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [491] = 3,
    ACTIONS(143), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_summary_repeat2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [502] = 3,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    ACTIONS(146), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__comment_body_repeat1,
  [512] = 3,
    ACTIONS(130), 1,
      aux_sym_source_token1,
    ACTIONS(149), 1,
      sym__word,
    STATE(31), 1,
      aux_sym__comment_body_repeat1,
  [522] = 3,
    ACTIONS(74), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(64), 1,
      sym_path,
  [532] = 2,
    ACTIONS(151), 1,
      anon_sym_up,
    ACTIONS(153), 2,
      anon_sym_ahead,
      anon_sym_behind,
  [540] = 3,
    ACTIONS(74), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_path,
  [550] = 3,
    ACTIONS(106), 1,
      aux_sym_source_token1,
    ACTIONS(155), 1,
      aux_sym_path_token1,
    STATE(36), 1,
      aux_sym_path_repeat1,
  [560] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [566] = 1,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [572] = 3,
    ACTIONS(162), 1,
      aux_sym_path_token1,
    STATE(24), 1,
      aux_sym_path_repeat1,
    STATE(47), 1,
      sym_path,
  [582] = 3,
    ACTIONS(111), 1,
      aux_sym_source_token1,
    ACTIONS(164), 1,
      aux_sym_path_token1,
    STATE(36), 1,
      aux_sym_path_repeat1,
  [592] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [597] = 2,
    ACTIONS(168), 1,
      anon_sym_POUND,
    STATE(25), 1,
      aux_sym_summary_repeat1,
  [604] = 2,
    ACTIONS(170), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_summary_repeat2,
  [611] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 1,
      aux_sym_source_token1,
  [618] = 1,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [623] = 1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [628] = 2,
    ACTIONS(178), 1,
      aux_sym_source_token1,
    ACTIONS(180), 1,
      anon_sym_DASH_GT,
  [635] = 1,
    ACTIONS(182), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [640] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      aux_sym_source_token1,
  [647] = 1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [652] = 1,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [657] = 1,
    ACTIONS(190), 1,
      aux_sym_source_token1,
  [661] = 1,
    ACTIONS(192), 1,
      sym_branch,
  [665] = 1,
    ACTIONS(194), 1,
      sym_commit,
  [669] = 1,
    ACTIONS(196), 1,
      aux_sym_source_token1,
  [673] = 1,
    ACTIONS(198), 1,
      anon_sym_COLON,
  [677] = 1,
    ACTIONS(200), 1,
      anon_sym_to,
  [681] = 1,
    ACTIONS(202), 1,
      anon_sym_of,
  [685] = 1,
    ACTIONS(204), 1,
      anon_sym_branch,
  [689] = 1,
    ACTIONS(206), 1,
      anon_sym_COLON2,
  [693] = 1,
    ACTIONS(208), 1,
      aux_sym_source_token1,
  [697] = 1,
    ACTIONS(184), 1,
      aux_sym_source_token1,
  [701] = 1,
    ACTIONS(210), 1,
      anon_sym_to,
  [705] = 1,
    ACTIONS(212), 1,
      aux_sym_source_token1,
  [709] = 1,
    ACTIONS(214), 1,
      anon_sym_committed,
  [713] = 1,
    ACTIONS(216), 1,
      anon_sym_COLON,
  [717] = 1,
    ACTIONS(218), 1,
      aux_sym_source_token1,
  [721] = 1,
    ACTIONS(220), 1,
      aux_sym_source_token1,
  [725] = 1,
    ACTIONS(222), 1,
      anon_sym_date,
  [729] = 1,
    ACTIONS(224), 1,
      anon_sym_SQUOTE,
  [733] = 1,
    ACTIONS(226), 1,
      anon_sym_SQUOTE,
  [737] = 1,
    ACTIONS(228), 1,
      anon_sym_at,
  [741] = 1,
    ACTIONS(230), 1,
      anon_sym_currently,
  [745] = 1,
    ACTIONS(232), 1,
      anon_sym_is,
  [749] = 1,
    ACTIONS(234), 1,
      sym__word,
  [753] = 1,
    ACTIONS(236), 1,
      anon_sym_with,
  [757] = 1,
    ACTIONS(238), 1,
      anon_sym_rebasing,
  [761] = 1,
    ACTIONS(240), 1,
      sym_branch,
  [765] = 1,
    ACTIONS(242), 1,
      anon_sym_be,
  [769] = 1,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
  [773] = 1,
    ACTIONS(246), 1,
      anon_sym_SQUOTE,
  [777] = 1,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
  [781] = 1,
    ACTIONS(250), 1,
      aux_sym_source_token1,
  [785] = 1,
    ACTIONS(252), 1,
      sym_branch,
  [789] = 1,
    ACTIONS(254), 1,
      anon_sym_by,
  [793] = 1,
    ACTIONS(256), 1,
      anon_sym_on,
  [797] = 1,
    ACTIONS(258), 1,
      aux_sym_source_token1,
  [801] = 1,
    ACTIONS(260), 1,
      anon_sym_SQUOTE_DOT,
  [805] = 1,
    ACTIONS(262), 1,
      aux_sym__branch_declaration_token1,
  [809] = 1,
    ACTIONS(264), 1,
      anon_sym_SQUOTE,
  [813] = 1,
    ACTIONS(266), 1,
      aux_sym_source_token1,
  [817] = 1,
    ACTIONS(268), 1,
      aux_sym__branch_declaration_token2,
  [821] = 1,
    ACTIONS(270), 1,
      sym_commit,
  [825] = 1,
    ACTIONS(272), 1,
      anon_sym_DOT,
  [829] = 1,
    ACTIONS(274), 1,
      anon_sym_SQUOTE,
  [833] = 1,
    ACTIONS(276), 1,
      anon_sym_files,
  [837] = 1,
    ACTIONS(278), 1,
      anon_sym_DOT,
  [841] = 1,
    ACTIONS(280), 1,
      anon_sym_COLON,
  [845] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [849] = 1,
    ACTIONS(284), 1,
      anon_sym_detached,
  [853] = 1,
    ACTIONS(286), 1,
      anon_sym_are,
  [857] = 1,
    ACTIONS(288), 1,
      anon_sym_branch,
  [861] = 1,
    ACTIONS(290), 1,
      anon_sym_branch,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 241,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 285,
  [SMALL_STATE(14)] = 299,
  [SMALL_STATE(15)] = 311,
  [SMALL_STATE(16)] = 327,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 361,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 395,
  [SMALL_STATE(23)] = 408,
  [SMALL_STATE(24)] = 419,
  [SMALL_STATE(25)] = 430,
  [SMALL_STATE(26)] = 441,
  [SMALL_STATE(27)] = 454,
  [SMALL_STATE(28)] = 465,
  [SMALL_STATE(29)] = 478,
  [SMALL_STATE(30)] = 491,
  [SMALL_STATE(31)] = 502,
  [SMALL_STATE(32)] = 512,
  [SMALL_STATE(33)] = 522,
  [SMALL_STATE(34)] = 532,
  [SMALL_STATE(35)] = 540,
  [SMALL_STATE(36)] = 550,
  [SMALL_STATE(37)] = 560,
  [SMALL_STATE(38)] = 566,
  [SMALL_STATE(39)] = 572,
  [SMALL_STATE(40)] = 582,
  [SMALL_STATE(41)] = 592,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 604,
  [SMALL_STATE(44)] = 611,
  [SMALL_STATE(45)] = 618,
  [SMALL_STATE(46)] = 623,
  [SMALL_STATE(47)] = 628,
  [SMALL_STATE(48)] = 635,
  [SMALL_STATE(49)] = 640,
  [SMALL_STATE(50)] = 647,
  [SMALL_STATE(51)] = 652,
  [SMALL_STATE(52)] = 657,
  [SMALL_STATE(53)] = 661,
  [SMALL_STATE(54)] = 665,
  [SMALL_STATE(55)] = 669,
  [SMALL_STATE(56)] = 673,
  [SMALL_STATE(57)] = 677,
  [SMALL_STATE(58)] = 681,
  [SMALL_STATE(59)] = 685,
  [SMALL_STATE(60)] = 689,
  [SMALL_STATE(61)] = 693,
  [SMALL_STATE(62)] = 697,
  [SMALL_STATE(63)] = 701,
  [SMALL_STATE(64)] = 705,
  [SMALL_STATE(65)] = 709,
  [SMALL_STATE(66)] = 713,
  [SMALL_STATE(67)] = 717,
  [SMALL_STATE(68)] = 721,
  [SMALL_STATE(69)] = 725,
  [SMALL_STATE(70)] = 729,
  [SMALL_STATE(71)] = 733,
  [SMALL_STATE(72)] = 737,
  [SMALL_STATE(73)] = 741,
  [SMALL_STATE(74)] = 745,
  [SMALL_STATE(75)] = 749,
  [SMALL_STATE(76)] = 753,
  [SMALL_STATE(77)] = 757,
  [SMALL_STATE(78)] = 761,
  [SMALL_STATE(79)] = 765,
  [SMALL_STATE(80)] = 769,
  [SMALL_STATE(81)] = 773,
  [SMALL_STATE(82)] = 777,
  [SMALL_STATE(83)] = 781,
  [SMALL_STATE(84)] = 785,
  [SMALL_STATE(85)] = 789,
  [SMALL_STATE(86)] = 793,
  [SMALL_STATE(87)] = 797,
  [SMALL_STATE(88)] = 801,
  [SMALL_STATE(89)] = 805,
  [SMALL_STATE(90)] = 809,
  [SMALL_STATE(91)] = 813,
  [SMALL_STATE(92)] = 817,
  [SMALL_STATE(93)] = 821,
  [SMALL_STATE(94)] = 825,
  [SMALL_STATE(95)] = 829,
  [SMALL_STATE(96)] = 833,
  [SMALL_STATE(97)] = 837,
  [SMALL_STATE(98)] = 841,
  [SMALL_STATE(99)] = 845,
  [SMALL_STATE(100)] = 849,
  [SMALL_STATE(101)] = 853,
  [SMALL_STATE(102)] = 857,
  [SMALL_STATE(103)] = 861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(16),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(23),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(29),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(33),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(31),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(36),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 13),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__changes_to_be_committed, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
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
