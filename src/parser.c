#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 112
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_POUND2 = 7,
  anon_sym_Changes = 8,
  anon_sym_to = 9,
  anon_sym_be = 10,
  anon_sym_committed = 11,
  anon_sym_COLON = 12,
  anon_sym_not = 13,
  anon_sym_staged = 14,
  anon_sym_for = 15,
  anon_sym_commit = 16,
  anon_sym_On = 17,
  anon_sym_branch = 18,
  anon_sym_Your = 19,
  anon_sym_is = 20,
  anon_sym_up = 21,
  anon_sym_date = 22,
  anon_sym_with = 23,
  anon_sym_SQUOTE = 24,
  anon_sym_SQUOTE_DOT = 25,
  anon_sym_ahead = 26,
  anon_sym_of = 27,
  anon_sym_behind = 28,
  anon_sym_by = 29,
  aux_sym__branch_declaration_token1 = 30,
  aux_sym__branch_declaration_token2 = 31,
  anon_sym_DOT = 32,
  anon_sym_You = 33,
  anon_sym_are = 34,
  anon_sym_currently = 35,
  anon_sym_rebasing = 36,
  anon_sym_on = 37,
  anon_sym_HEAD = 38,
  anon_sym_detached = 39,
  anon_sym_at = 40,
  anon_sym_Conflicts = 41,
  anon_sym_Untracked = 42,
  anon_sym_files = 43,
  anon_sym_newfile = 44,
  anon_sym_modified = 45,
  anon_sym_renamed = 46,
  anon_sym_deleted = 47,
  anon_sym_DASH_GT = 48,
  sym_commit = 49,
  sym__word = 50,
  sym_branch = 51,
  aux_sym_path_token1 = 52,
  sym_user = 53,
  sym_item = 54,
  sym_source = 55,
  sym__body_line = 56,
  sym_subject = 57,
  sym_message = 58,
  sym_comment = 59,
  sym__comment_body = 60,
  sym_summary = 61,
  sym__change_header = 62,
  sym__branch_declaration = 63,
  sym_header = 64,
  sym_change = 65,
  sym_path = 66,
  aux_sym_source_repeat1 = 67,
  aux_sym_subject_repeat1 = 68,
  aux_sym_message_repeat1 = 69,
  aux_sym__comment_body_repeat1 = 70,
  aux_sym_summary_repeat1 = 71,
  aux_sym_summary_repeat2 = 72,
  aux_sym_path_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [aux_sym_comment_token1] = "scissors",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND2] = "#",
  [anon_sym_Changes] = "Changes",
  [anon_sym_to] = "to",
  [anon_sym_be] = "be",
  [anon_sym_committed] = "committed",
  [anon_sym_COLON] = ":",
  [anon_sym_not] = "not",
  [anon_sym_staged] = "staged",
  [anon_sym_for] = "for",
  [anon_sym_commit] = "commit",
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
  [anon_sym_of] = "of",
  [anon_sym_behind] = "behind",
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
  [sym__change_header] = "header",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND2] = anon_sym_POUND,
  [anon_sym_Changes] = anon_sym_Changes,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_committed] = anon_sym_committed,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_staged] = anon_sym_staged,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_commit] = anon_sym_commit,
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
  [anon_sym_of] = anon_sym_of,
  [anon_sym_behind] = anon_sym_behind,
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
  [sym__change_header] = sym_header,
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
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND2] = {
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_staged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commit] = {
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
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_behind] = {
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
  [sym__change_header] = {
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
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'Y') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(246);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(338);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(374);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'H') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead == 'Y') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(339);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(340);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(32);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(279);
      END_STATE();
    case 30:
      if (lookahead == '8') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(293);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(174);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(218);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(84);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(51)
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(57)
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(282);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(302);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(294);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(300);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(264);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(120);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'y') ADVANCE(283);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(299);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 100:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 103:
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(277);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(80);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 113:
      if (lookahead == 'h') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 114:
      if (lookahead == 'h') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 115:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(211);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 136:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(149);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(87);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 150:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(133);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(275);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 193:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(296);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(286);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 216:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 217:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 218:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 219:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 220:
      if (lookahead == 'w') ADVANCE(126);
      END_STATE();
    case 221:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 222:
      if (lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 223:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 224:
      if (lookahead == 'y') ADVANCE(207);
      END_STATE();
    case 225:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(225)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(373);
      END_STATE();
    case 226:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(226)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(371);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(378);
      END_STATE();
    case 234:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 235:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 236:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(278);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(265);
      if (lookahead == '@') ADVANCE(233);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == 'Y') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 'd') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'w') ADVANCE(123);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(236)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 237:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == 'b') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(237)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 238:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(257);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 239:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(258);
      if (lookahead == '@') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(240)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(252);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 240:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(240)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(252);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 241:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'H') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead == 'Y') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(241)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(339);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 242:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(242)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(376);
      if (lookahead != 0) ADVANCE(377);
      END_STATE();
    case 243:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(243)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(340);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 244:
      if (eof) ADVANCE(245);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '@') ADVANCE(253);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '@') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(378);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(254);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_commit);
      if (lookahead == 's') ADVANCE(285);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(370);
      if (lookahead == '@') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(338);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'H') ADVANCE(344);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead == 'U') ADVANCE(359);
      if (lookahead == 'Y') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(339);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(246);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(340);
      if (lookahead != 0) ADVANCE(371);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(346);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(226)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(373);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(375);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(377);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(377);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(376);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(377);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 238},
  [2] = {.lex_state = 241},
  [3] = {.lex_state = 241},
  [4] = {.lex_state = 239},
  [5] = {.lex_state = 239},
  [6] = {.lex_state = 239},
  [7] = {.lex_state = 239},
  [8] = {.lex_state = 239},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 239},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 242},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 237},
  [18] = {.lex_state = 237},
  [19] = {.lex_state = 244},
  [20] = {.lex_state = 237},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 243},
  [23] = {.lex_state = 244},
  [24] = {.lex_state = 237},
  [25] = {.lex_state = 244},
  [26] = {.lex_state = 243},
  [27] = {.lex_state = 242},
  [28] = {.lex_state = 243},
  [29] = {.lex_state = 242},
  [30] = {.lex_state = 237},
  [31] = {.lex_state = 237},
  [32] = {.lex_state = 242},
  [33] = {.lex_state = 243},
  [34] = {.lex_state = 237},
  [35] = {.lex_state = 242},
  [36] = {.lex_state = 242},
  [37] = {.lex_state = 237},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 237},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 225},
  [52] = {.lex_state = 237},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 237},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 51},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 225},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 226},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 225},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 225},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 237},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 57},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 237},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_Changes] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [anon_sym_committed] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_staged] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_commit] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_Your] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_behind] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_user] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(61),
    [sym_subject] = STATE(42),
    [sym_comment] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [aux_sym_subject_token1] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
    [anon_sym_POUND] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_source_token1,
    ACTIONS(17), 1,
      anon_sym_Changes,
    ACTIONS(19), 1,
      anon_sym_On,
    ACTIONS(21), 1,
      anon_sym_Your,
    ACTIONS(23), 1,
      anon_sym_You,
    ACTIONS(25), 1,
      anon_sym_HEAD,
    ACTIONS(27), 1,
      anon_sym_Conflicts,
    ACTIONS(29), 1,
      anon_sym_Untracked,
    ACTIONS(31), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__comment_body_repeat1,
    STATE(97), 1,
      sym_header,
    STATE(102), 1,
      sym__change_header,
    STATE(48), 3,
      sym__comment_body,
      sym_summary,
      sym__branch_declaration,
  [45] = 13,
    ACTIONS(15), 1,
      aux_sym_source_token1,
    ACTIONS(17), 1,
      anon_sym_Changes,
    ACTIONS(19), 1,
      anon_sym_On,
    ACTIONS(21), 1,
      anon_sym_Your,
    ACTIONS(23), 1,
      anon_sym_You,
    ACTIONS(25), 1,
      anon_sym_HEAD,
    ACTIONS(27), 1,
      anon_sym_Conflicts,
    ACTIONS(29), 1,
      anon_sym_Untracked,
    ACTIONS(33), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__comment_body_repeat1,
    STATE(97), 1,
      sym_header,
    STATE(102), 1,
      sym__change_header,
    STATE(48), 3,
      sym__comment_body,
      sym_summary,
      sym__branch_declaration,
  [87] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(111), 2,
      sym_message,
      sym_comment,
  [112] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_source_token1,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(111), 2,
      sym_message,
      sym_comment,
  [137] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      aux_sym_source_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(111), 2,
      sym_message,
      sym_comment,
  [162] = 7,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(57), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_POUND,
    ACTIONS(54), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(111), 2,
      sym_message,
      sym_comment,
  [187] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(6), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(111), 2,
      sym_message,
      sym_comment,
  [212] = 3,
    STATE(60), 1,
      sym_change,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(67), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [226] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 5,
      aux_sym_source_token1,
      aux_sym_message_token1,
      aux_sym_comment_token1,
      anon_sym_POUND,
      sym_user,
  [237] = 3,
    ACTIONS(73), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(75), 3,
      sym__word,
      sym_user,
      sym_item,
  [249] = 3,
    ACTIONS(77), 1,
      aux_sym_source_token1,
    STATE(11), 1,
      aux_sym_message_repeat1,
    ACTIONS(79), 3,
      sym__word,
      sym_user,
      sym_item,
  [261] = 2,
    STATE(60), 1,
      sym_change,
    ACTIONS(67), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [271] = 3,
    ACTIONS(81), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(83), 3,
      sym__word,
      sym_user,
      sym_item,
  [283] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      aux_sym_source_token1,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
  [299] = 3,
    ACTIONS(92), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(90), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [310] = 3,
    ACTIONS(96), 1,
      anon_sym_POUND2,
    STATE(17), 1,
      aux_sym_summary_repeat1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [321] = 3,
    ACTIONS(101), 1,
      anon_sym_POUND2,
    STATE(17), 1,
      aux_sym_summary_repeat1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [332] = 4,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(107), 1,
      aux_sym_subject_token2,
    STATE(25), 1,
      aux_sym_subject_repeat1,
  [345] = 3,
    ACTIONS(109), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [356] = 3,
    ACTIONS(113), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
    ACTIONS(111), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [367] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_source_token1,
    ACTIONS(120), 1,
      sym__word,
    STATE(22), 1,
      aux_sym__comment_body_repeat1,
  [380] = 4,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    ACTIONS(127), 1,
      aux_sym_subject_token2,
    STATE(19), 1,
      aux_sym_subject_repeat1,
  [393] = 3,
    ACTIONS(131), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [404] = 4,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym_source_token1,
    ACTIONS(138), 1,
      aux_sym_subject_token2,
    STATE(25), 1,
      aux_sym_subject_repeat1,
  [417] = 4,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 1,
      aux_sym_source_token1,
    ACTIONS(145), 1,
      sym__word,
    STATE(22), 1,
      aux_sym__comment_body_repeat1,
  [430] = 3,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(92), 1,
      sym_path,
  [440] = 3,
    ACTIONS(118), 1,
      aux_sym_source_token1,
    ACTIONS(147), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [450] = 3,
    ACTIONS(111), 1,
      aux_sym_source_token1,
    ACTIONS(150), 1,
      aux_sym_path_token1,
    STATE(29), 1,
      aux_sym_path_repeat1,
  [460] = 1,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [466] = 1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [472] = 3,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    STATE(16), 1,
      aux_sym_path_repeat1,
    STATE(41), 1,
      sym_path,
  [482] = 3,
    ACTIONS(143), 1,
      aux_sym_source_token1,
    ACTIONS(159), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [492] = 3,
    ACTIONS(161), 1,
      anon_sym_up,
    ACTIONS(163), 1,
      anon_sym_ahead,
    ACTIONS(165), 1,
      anon_sym_behind,
  [502] = 3,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    ACTIONS(167), 1,
      aux_sym_path_token1,
    STATE(29), 1,
      aux_sym_path_repeat1,
  [512] = 3,
    ACTIONS(88), 1,
      aux_sym_path_token1,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
  [522] = 2,
    ACTIONS(169), 1,
      anon_sym_POUND2,
    STATE(20), 1,
      aux_sym_summary_repeat2,
  [529] = 1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [534] = 1,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [539] = 2,
    ACTIONS(175), 1,
      anon_sym_to,
    ACTIONS(177), 1,
      anon_sym_not,
  [546] = 2,
    ACTIONS(179), 1,
      aux_sym_source_token1,
    ACTIONS(181), 1,
      anon_sym_DASH_GT,
  [553] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 1,
      aux_sym_source_token1,
  [560] = 1,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [565] = 2,
    ACTIONS(187), 1,
      anon_sym_POUND2,
    STATE(18), 1,
      aux_sym_summary_repeat1,
  [572] = 1,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [577] = 1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [582] = 1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [587] = 1,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [592] = 1,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [597] = 1,
    ACTIONS(197), 1,
      anon_sym_SQUOTE,
  [601] = 1,
    ACTIONS(199), 1,
      sym_branch,
  [605] = 1,
    ACTIONS(201), 1,
      sym_commit,
  [609] = 1,
    ACTIONS(203), 1,
      aux_sym_source_token1,
  [613] = 1,
    ACTIONS(205), 1,
      anon_sym_COLON,
  [617] = 1,
    ACTIONS(207), 1,
      anon_sym_commit,
  [621] = 1,
    ACTIONS(209), 1,
      anon_sym_to,
  [625] = 1,
    ACTIONS(211), 1,
      anon_sym_of,
  [629] = 1,
    ACTIONS(213), 1,
      anon_sym_branch,
  [633] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [637] = 1,
    ACTIONS(217), 1,
      aux_sym_source_token1,
  [641] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [645] = 1,
    ACTIONS(221), 1,
      anon_sym_for,
  [649] = 1,
    ACTIONS(223), 1,
      aux_sym_source_token1,
  [653] = 1,
    ACTIONS(225), 1,
      anon_sym_committed,
  [657] = 1,
    ACTIONS(227), 1,
      anon_sym_COLON,
  [661] = 1,
    ACTIONS(229), 1,
      aux_sym_source_token1,
  [665] = 1,
    ACTIONS(231), 1,
      aux_sym_source_token1,
  [669] = 1,
    ACTIONS(233), 1,
      anon_sym_COLON,
  [673] = 1,
    ACTIONS(235), 1,
      anon_sym_date,
  [677] = 1,
    ACTIONS(237), 1,
      anon_sym_SQUOTE,
  [681] = 1,
    ACTIONS(239), 1,
      sym_branch,
  [685] = 1,
    ACTIONS(241), 1,
      anon_sym_SQUOTE,
  [689] = 1,
    ACTIONS(243), 1,
      anon_sym_at,
  [693] = 1,
    ACTIONS(245), 1,
      anon_sym_currently,
  [697] = 1,
    ACTIONS(247), 1,
      anon_sym_is,
  [701] = 1,
    ACTIONS(249), 1,
      sym__word,
  [705] = 1,
    ACTIONS(251), 1,
      aux_sym_source_token1,
  [709] = 1,
    ACTIONS(253), 1,
      anon_sym_with,
  [713] = 1,
    ACTIONS(255), 1,
      sym_branch,
  [717] = 1,
    ACTIONS(257), 1,
      anon_sym_SQUOTE,
  [721] = 1,
    ACTIONS(259), 1,
      anon_sym_rebasing,
  [725] = 1,
    ACTIONS(261), 1,
      anon_sym_staged,
  [729] = 1,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
  [733] = 1,
    ACTIONS(265), 1,
      anon_sym_SQUOTE,
  [737] = 1,
    ACTIONS(267), 1,
      anon_sym_by,
  [741] = 1,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
  [745] = 1,
    ACTIONS(271), 1,
      anon_sym_be,
  [749] = 1,
    ACTIONS(273), 1,
      sym_branch,
  [753] = 1,
    ACTIONS(275), 1,
      anon_sym_by,
  [757] = 1,
    ACTIONS(277), 1,
      aux_sym__branch_declaration_token1,
  [761] = 1,
    ACTIONS(279), 1,
      anon_sym_on,
  [765] = 1,
    ACTIONS(281), 1,
      aux_sym_source_token1,
  [769] = 1,
    ACTIONS(283), 1,
      anon_sym_SQUOTE_DOT,
  [773] = 1,
    ACTIONS(285), 1,
      aux_sym__branch_declaration_token1,
  [777] = 1,
    ACTIONS(287), 1,
      aux_sym__branch_declaration_token2,
  [781] = 1,
    ACTIONS(289), 1,
      anon_sym_SQUOTE,
  [785] = 1,
    ACTIONS(291), 1,
      aux_sym_source_token1,
  [789] = 1,
    ACTIONS(293), 1,
      aux_sym__branch_declaration_token2,
  [793] = 1,
    ACTIONS(295), 1,
      anon_sym_DOT,
  [797] = 1,
    ACTIONS(297), 1,
      sym_commit,
  [801] = 1,
    ACTIONS(299), 1,
      anon_sym_DOT,
  [805] = 1,
    ACTIONS(301), 1,
      aux_sym_source_token1,
  [809] = 1,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
  [813] = 1,
    ACTIONS(305), 1,
      anon_sym_files,
  [817] = 1,
    ACTIONS(307), 1,
      anon_sym_DOT,
  [821] = 1,
    ACTIONS(309), 1,
      anon_sym_COLON,
  [825] = 1,
    ACTIONS(311), 1,
      anon_sym_detached,
  [829] = 1,
    ACTIONS(313), 1,
      anon_sym_are,
  [833] = 1,
    ACTIONS(315), 1,
      anon_sym_branch,
  [837] = 1,
    ACTIONS(317), 1,
      anon_sym_branch,
  [841] = 1,
    ACTIONS(319), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 87,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 137,
  [SMALL_STATE(7)] = 162,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 271,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 321,
  [SMALL_STATE(19)] = 332,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 417,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 450,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 466,
  [SMALL_STATE(32)] = 472,
  [SMALL_STATE(33)] = 482,
  [SMALL_STATE(34)] = 492,
  [SMALL_STATE(35)] = 502,
  [SMALL_STATE(36)] = 512,
  [SMALL_STATE(37)] = 522,
  [SMALL_STATE(38)] = 529,
  [SMALL_STATE(39)] = 534,
  [SMALL_STATE(40)] = 539,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 553,
  [SMALL_STATE(43)] = 560,
  [SMALL_STATE(44)] = 565,
  [SMALL_STATE(45)] = 572,
  [SMALL_STATE(46)] = 577,
  [SMALL_STATE(47)] = 582,
  [SMALL_STATE(48)] = 587,
  [SMALL_STATE(49)] = 592,
  [SMALL_STATE(50)] = 597,
  [SMALL_STATE(51)] = 601,
  [SMALL_STATE(52)] = 605,
  [SMALL_STATE(53)] = 609,
  [SMALL_STATE(54)] = 613,
  [SMALL_STATE(55)] = 617,
  [SMALL_STATE(56)] = 621,
  [SMALL_STATE(57)] = 625,
  [SMALL_STATE(58)] = 629,
  [SMALL_STATE(59)] = 633,
  [SMALL_STATE(60)] = 637,
  [SMALL_STATE(61)] = 641,
  [SMALL_STATE(62)] = 645,
  [SMALL_STATE(63)] = 649,
  [SMALL_STATE(64)] = 653,
  [SMALL_STATE(65)] = 657,
  [SMALL_STATE(66)] = 661,
  [SMALL_STATE(67)] = 665,
  [SMALL_STATE(68)] = 669,
  [SMALL_STATE(69)] = 673,
  [SMALL_STATE(70)] = 677,
  [SMALL_STATE(71)] = 681,
  [SMALL_STATE(72)] = 685,
  [SMALL_STATE(73)] = 689,
  [SMALL_STATE(74)] = 693,
  [SMALL_STATE(75)] = 697,
  [SMALL_STATE(76)] = 701,
  [SMALL_STATE(77)] = 705,
  [SMALL_STATE(78)] = 709,
  [SMALL_STATE(79)] = 713,
  [SMALL_STATE(80)] = 717,
  [SMALL_STATE(81)] = 721,
  [SMALL_STATE(82)] = 725,
  [SMALL_STATE(83)] = 729,
  [SMALL_STATE(84)] = 733,
  [SMALL_STATE(85)] = 737,
  [SMALL_STATE(86)] = 741,
  [SMALL_STATE(87)] = 745,
  [SMALL_STATE(88)] = 749,
  [SMALL_STATE(89)] = 753,
  [SMALL_STATE(90)] = 757,
  [SMALL_STATE(91)] = 761,
  [SMALL_STATE(92)] = 765,
  [SMALL_STATE(93)] = 769,
  [SMALL_STATE(94)] = 773,
  [SMALL_STATE(95)] = 777,
  [SMALL_STATE(96)] = 781,
  [SMALL_STATE(97)] = 785,
  [SMALL_STATE(98)] = 789,
  [SMALL_STATE(99)] = 793,
  [SMALL_STATE(100)] = 797,
  [SMALL_STATE(101)] = 801,
  [SMALL_STATE(102)] = 805,
  [SMALL_STATE(103)] = 809,
  [SMALL_STATE(104)] = 813,
  [SMALL_STATE(105)] = 817,
  [SMALL_STATE(106)] = 821,
  [SMALL_STATE(107)] = 825,
  [SMALL_STATE(108)] = 829,
  [SMALL_STATE(109)] = 833,
  [SMALL_STATE(110)] = 837,
  [SMALL_STATE(111)] = 841,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(14),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(13),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(36),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(28),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_commit(void) {
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
