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
#define STATE_COUNT 99
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
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_Changes = 7,
  anon_sym_to = 8,
  anon_sym_be = 9,
  anon_sym_committed = 10,
  anon_sym_COLON = 11,
  anon_sym_On = 12,
  anon_sym_branch = 13,
  anon_sym_Your = 14,
  anon_sym_is = 15,
  anon_sym_up = 16,
  anon_sym_date = 17,
  anon_sym_with = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_SQUOTE_DOT = 20,
  anon_sym_ahead = 21,
  anon_sym_behind = 22,
  anon_sym_of = 23,
  anon_sym_by = 24,
  aux_sym__branch_declaration_token1 = 25,
  aux_sym__branch_declaration_token2 = 26,
  anon_sym_DOT = 27,
  anon_sym_You = 28,
  anon_sym_are = 29,
  anon_sym_currently = 30,
  anon_sym_rebasing = 31,
  anon_sym_on = 32,
  anon_sym_HEAD = 33,
  anon_sym_detached = 34,
  anon_sym_at = 35,
  anon_sym_Conflicts = 36,
  anon_sym_Untracked = 37,
  anon_sym_files = 38,
  anon_sym_newfile = 39,
  anon_sym_modified = 40,
  anon_sym_renamed = 41,
  anon_sym_deleted = 42,
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
  [aux_sym_comment_token1] = "scissors",
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(265);
      if (lookahead == ':') ADVANCE(247);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'C') ADVANCE(104);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead == 'Y') ADVANCE(161);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'c') ADVANCE(162);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(115);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(231);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '@') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(316);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(352);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'U') ADVANCE(337);
      if (lookahead == 'Y') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(317);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(318);
      if (lookahead != 0) ADVANCE(349);
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
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(12);
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
      if (lookahead == '.') ADVANCE(256);
      END_STATE();
    case 30:
      if (lookahead == '8') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(281);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(271);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(167);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(205);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(50)
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(257);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(258);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(280);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(246);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'y') ADVANCE(260);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'f') ADVANCE(210);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(128);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(269);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 104:
      if (lookahead == 'h') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 106:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 107:
      if (lookahead == 'h') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 108:
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 109:
      if (lookahead == 'h') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 110:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 131:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 132:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 133:
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 134:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 135:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 140:
      if (lookahead == 'm') ADVANCE(144);
      END_STATE();
    case 141:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 142:
      if (lookahead == 'm') ADVANCE(83);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 145:
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 146:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 147:
      if (lookahead == 'm') ADVANCE(145);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(248);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(251);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(276);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 203:
      if (lookahead == 'v') ADVANCE(88);
      END_STATE();
    case 204:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 205:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 206:
      if (lookahead == 'w') ADVANCE(14);
      END_STATE();
    case 207:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 208:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 209:
      if (lookahead == 'y') ADVANCE(268);
      END_STATE();
    case 210:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 211:
      if (lookahead == 'y') ADVANCE(193);
      END_STATE();
    case 212:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(212)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(351);
      END_STATE();
    case 213:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(213)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(349);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(357);
      END_STATE();
    case 221:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 222:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 223:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(223)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(237);
      if (lookahead != 0) ADVANCE(238);
      END_STATE();
    case 224:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(241);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0) ADVANCE(232);
      END_STATE();
    case 225:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(240);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(175);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(225)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 226:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'U') ADVANCE(337);
      if (lookahead == 'Y') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(226)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(317);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 227:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(227)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(354);
      if (lookahead != 0) ADVANCE(355);
      END_STATE();
    case 228:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(228)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(318);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 229:
      if (eof) ADVANCE(230);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0) ADVANCE(235);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead == '@') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(356);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '@') ADVANCE(236);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token2);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
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
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '@') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(316);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(332);
      if (lookahead == 'H') ADVANCE(322);
      if (lookahead == 'O') ADVANCE(336);
      if (lookahead == 'U') ADVANCE(337);
      if (lookahead == 'Y') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(317);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(231);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(318);
      if (lookahead != 0) ADVANCE(349);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(357);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(213)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(349);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(351);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(353);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(355);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(355);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(355);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 224},
  [2] = {.lex_state = 226},
  [3] = {.lex_state = 226},
  [4] = {.lex_state = 223},
  [5] = {.lex_state = 223},
  [6] = {.lex_state = 223},
  [7] = {.lex_state = 223},
  [8] = {.lex_state = 223},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 223},
  [11] = {.lex_state = 227},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 225},
  [17] = {.lex_state = 229},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 225},
  [21] = {.lex_state = 225},
  [22] = {.lex_state = 229},
  [23] = {.lex_state = 228},
  [24] = {.lex_state = 228},
  [25] = {.lex_state = 229},
  [26] = {.lex_state = 225},
  [27] = {.lex_state = 227},
  [28] = {.lex_state = 228},
  [29] = {.lex_state = 228},
  [30] = {.lex_state = 225},
  [31] = {.lex_state = 227},
  [32] = {.lex_state = 227},
  [33] = {.lex_state = 227},
  [34] = {.lex_state = 225},
  [35] = {.lex_state = 225},
  [36] = {.lex_state = 227},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 225},
  [39] = {.lex_state = 225},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 212},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 225},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 212},
  [73] = {.lex_state = 225},
  [74] = {.lex_state = 213},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 212},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 225},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 50},
  [88] = {.lex_state = 225},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_user] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(61),
    [sym_subject] = STATE(46),
    [sym_comment] = STATE(46),
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
    STATE(24), 1,
      aux_sym__comment_body_repeat1,
    STATE(86), 1,
      sym_header,
    STATE(91), 1,
      sym__changes_to_be_committed,
    STATE(43), 3,
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
    STATE(29), 1,
      aux_sym__comment_body_repeat1,
    STATE(86), 1,
      sym_header,
    STATE(91), 1,
      sym__changes_to_be_committed,
    STATE(43), 3,
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
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(67), 2,
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
    STATE(6), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(67), 2,
      sym_message,
      sym_comment,
  [137] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(67), 2,
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
    STATE(67), 2,
      sym_message,
      sym_comment,
  [187] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(67), 2,
      sym_message,
      sym_comment,
  [212] = 3,
    STATE(58), 1,
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
  [237] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_source_token1,
    ACTIONS(75), 1,
      aux_sym_path_token1,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(59), 1,
      sym_path,
  [253] = 3,
    ACTIONS(77), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_message_repeat1,
    ACTIONS(79), 3,
      sym__word,
      sym_user,
      sym_item,
  [265] = 3,
    ACTIONS(81), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(83), 3,
      sym__word,
      sym_user,
      sym_item,
  [277] = 3,
    ACTIONS(85), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(87), 3,
      sym__word,
      sym_user,
      sym_item,
  [289] = 2,
    STATE(58), 1,
      sym_change,
    ACTIONS(67), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [299] = 3,
    ACTIONS(92), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_summary_repeat2,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [310] = 4,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      aux_sym_source_token1,
    ACTIONS(98), 1,
      aux_sym_subject_token2,
    STATE(25), 1,
      aux_sym_subject_repeat1,
  [323] = 3,
    ACTIONS(102), 1,
      aux_sym_path_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(100), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [334] = 3,
    ACTIONS(107), 1,
      aux_sym_path_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    ACTIONS(105), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [345] = 3,
    ACTIONS(109), 1,
      anon_sym_POUND,
    STATE(21), 1,
      aux_sym_summary_repeat1,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [356] = 3,
    ACTIONS(113), 1,
      anon_sym_POUND,
    STATE(21), 1,
      aux_sym_summary_repeat1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [367] = 4,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      aux_sym_source_token1,
    ACTIONS(120), 1,
      aux_sym_subject_token2,
    STATE(17), 1,
      aux_sym_subject_repeat1,
  [380] = 4,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    ACTIONS(124), 1,
      aux_sym_source_token1,
    ACTIONS(126), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [393] = 4,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym_source_token1,
    ACTIONS(133), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [406] = 4,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_source_token1,
    ACTIONS(139), 1,
      aux_sym_subject_token2,
    STATE(25), 1,
      aux_sym_subject_repeat1,
  [419] = 3,
    ACTIONS(144), 1,
      anon_sym_POUND,
    STATE(26), 1,
      aux_sym_summary_repeat2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [430] = 3,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(147), 1,
      aux_sym_path_token1,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [440] = 3,
    ACTIONS(124), 1,
      aux_sym_source_token1,
    ACTIONS(149), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [450] = 3,
    ACTIONS(131), 1,
      aux_sym_source_token1,
    ACTIONS(152), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [460] = 2,
    ACTIONS(154), 1,
      anon_sym_up,
    ACTIONS(156), 2,
      anon_sym_ahead,
      anon_sym_behind,
  [468] = 3,
    ACTIONS(75), 1,
      aux_sym_path_token1,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(82), 1,
      sym_path,
  [478] = 3,
    ACTIONS(75), 1,
      aux_sym_path_token1,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(59), 1,
      sym_path,
  [488] = 3,
    ACTIONS(100), 1,
      aux_sym_source_token1,
    ACTIONS(158), 1,
      aux_sym_path_token1,
    STATE(33), 1,
      aux_sym_path_repeat1,
  [498] = 1,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [504] = 1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND,
  [510] = 3,
    ACTIONS(165), 1,
      aux_sym_path_token1,
    STATE(19), 1,
      aux_sym_path_repeat1,
    STATE(37), 1,
      sym_path,
  [520] = 2,
    ACTIONS(167), 1,
      aux_sym_source_token1,
    ACTIONS(169), 1,
      anon_sym_DASH_GT,
  [527] = 2,
    ACTIONS(171), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_summary_repeat1,
  [534] = 2,
    ACTIONS(173), 1,
      anon_sym_POUND,
    STATE(16), 1,
      aux_sym_summary_repeat2,
  [541] = 1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [546] = 1,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [551] = 1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [556] = 1,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [561] = 1,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [566] = 1,
    ACTIONS(183), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [571] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 1,
      aux_sym_source_token1,
  [578] = 1,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [583] = 1,
    ACTIONS(189), 1,
      aux_sym_source_token1,
  [587] = 1,
    ACTIONS(191), 1,
      sym_branch,
  [591] = 1,
    ACTIONS(193), 1,
      anon_sym_rebasing,
  [595] = 1,
    ACTIONS(195), 1,
      sym_commit,
  [599] = 1,
    ACTIONS(197), 1,
      aux_sym_source_token1,
  [603] = 1,
    ACTIONS(199), 1,
      anon_sym_COLON,
  [607] = 1,
    ACTIONS(201), 1,
      anon_sym_to,
  [611] = 1,
    ACTIONS(203), 1,
      anon_sym_of,
  [615] = 1,
    ACTIONS(205), 1,
      anon_sym_branch,
  [619] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [623] = 1,
    ACTIONS(209), 1,
      aux_sym_source_token1,
  [627] = 1,
    ACTIONS(211), 1,
      aux_sym_source_token1,
  [631] = 1,
    ACTIONS(213), 1,
      anon_sym_to,
  [635] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [639] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [643] = 1,
    ACTIONS(219), 1,
      aux_sym_source_token1,
  [647] = 1,
    ACTIONS(221), 1,
      anon_sym_date,
  [651] = 1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE,
  [655] = 1,
    ACTIONS(225), 1,
      anon_sym_SQUOTE,
  [659] = 1,
    ACTIONS(227), 1,
      aux_sym_source_token1,
  [663] = 1,
    ACTIONS(229), 1,
      anon_sym_at,
  [667] = 1,
    ACTIONS(231), 1,
      anon_sym_currently,
  [671] = 1,
    ACTIONS(233), 1,
      anon_sym_is,
  [675] = 1,
    ACTIONS(235), 1,
      anon_sym_with,
  [679] = 1,
    ACTIONS(237), 1,
      sym_branch,
  [683] = 1,
    ACTIONS(239), 1,
      anon_sym_committed,
  [687] = 1,
    ACTIONS(241), 1,
      sym__word,
  [691] = 1,
    ACTIONS(243), 1,
      anon_sym_SQUOTE,
  [695] = 1,
    ACTIONS(245), 1,
      anon_sym_SQUOTE,
  [699] = 1,
    ACTIONS(247), 1,
      anon_sym_SQUOTE,
  [703] = 1,
    ACTIONS(249), 1,
      anon_sym_be,
  [707] = 1,
    ACTIONS(251), 1,
      sym_branch,
  [711] = 1,
    ACTIONS(253), 1,
      anon_sym_by,
  [715] = 1,
    ACTIONS(255), 1,
      anon_sym_on,
  [719] = 1,
    ACTIONS(257), 1,
      aux_sym_source_token1,
  [723] = 1,
    ACTIONS(259), 1,
      anon_sym_SQUOTE_DOT,
  [727] = 1,
    ACTIONS(261), 1,
      aux_sym__branch_declaration_token1,
  [731] = 1,
    ACTIONS(263), 1,
      anon_sym_SQUOTE,
  [735] = 1,
    ACTIONS(265), 1,
      aux_sym_source_token1,
  [739] = 1,
    ACTIONS(267), 1,
      aux_sym__branch_declaration_token2,
  [743] = 1,
    ACTIONS(269), 1,
      sym_commit,
  [747] = 1,
    ACTIONS(271), 1,
      anon_sym_DOT,
  [751] = 1,
    ACTIONS(273), 1,
      anon_sym_SQUOTE,
  [755] = 1,
    ACTIONS(275), 1,
      aux_sym_source_token1,
  [759] = 1,
    ACTIONS(277), 1,
      anon_sym_DOT,
  [763] = 1,
    ACTIONS(279), 1,
      anon_sym_files,
  [767] = 1,
    ACTIONS(281), 1,
      anon_sym_COLON,
  [771] = 1,
    ACTIONS(283), 1,
      anon_sym_detached,
  [775] = 1,
    ACTIONS(285), 1,
      anon_sym_are,
  [779] = 1,
    ACTIONS(287), 1,
      anon_sym_branch,
  [783] = 1,
    ACTIONS(289), 1,
      anon_sym_branch,
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
  [SMALL_STATE(12)] = 253,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 277,
  [SMALL_STATE(15)] = 289,
  [SMALL_STATE(16)] = 299,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 334,
  [SMALL_STATE(20)] = 345,
  [SMALL_STATE(21)] = 356,
  [SMALL_STATE(22)] = 367,
  [SMALL_STATE(23)] = 380,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 419,
  [SMALL_STATE(27)] = 430,
  [SMALL_STATE(28)] = 440,
  [SMALL_STATE(29)] = 450,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 468,
  [SMALL_STATE(32)] = 478,
  [SMALL_STATE(33)] = 488,
  [SMALL_STATE(34)] = 498,
  [SMALL_STATE(35)] = 504,
  [SMALL_STATE(36)] = 510,
  [SMALL_STATE(37)] = 520,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 534,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 551,
  [SMALL_STATE(43)] = 556,
  [SMALL_STATE(44)] = 561,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 571,
  [SMALL_STATE(47)] = 578,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 591,
  [SMALL_STATE(51)] = 595,
  [SMALL_STATE(52)] = 599,
  [SMALL_STATE(53)] = 603,
  [SMALL_STATE(54)] = 607,
  [SMALL_STATE(55)] = 611,
  [SMALL_STATE(56)] = 615,
  [SMALL_STATE(57)] = 619,
  [SMALL_STATE(58)] = 623,
  [SMALL_STATE(59)] = 627,
  [SMALL_STATE(60)] = 631,
  [SMALL_STATE(61)] = 635,
  [SMALL_STATE(62)] = 639,
  [SMALL_STATE(63)] = 643,
  [SMALL_STATE(64)] = 647,
  [SMALL_STATE(65)] = 651,
  [SMALL_STATE(66)] = 655,
  [SMALL_STATE(67)] = 659,
  [SMALL_STATE(68)] = 663,
  [SMALL_STATE(69)] = 667,
  [SMALL_STATE(70)] = 671,
  [SMALL_STATE(71)] = 675,
  [SMALL_STATE(72)] = 679,
  [SMALL_STATE(73)] = 683,
  [SMALL_STATE(74)] = 687,
  [SMALL_STATE(75)] = 691,
  [SMALL_STATE(76)] = 695,
  [SMALL_STATE(77)] = 699,
  [SMALL_STATE(78)] = 703,
  [SMALL_STATE(79)] = 707,
  [SMALL_STATE(80)] = 711,
  [SMALL_STATE(81)] = 715,
  [SMALL_STATE(82)] = 719,
  [SMALL_STATE(83)] = 723,
  [SMALL_STATE(84)] = 727,
  [SMALL_STATE(85)] = 731,
  [SMALL_STATE(86)] = 735,
  [SMALL_STATE(87)] = 739,
  [SMALL_STATE(88)] = 743,
  [SMALL_STATE(89)] = 747,
  [SMALL_STATE(90)] = 751,
  [SMALL_STATE(91)] = 755,
  [SMALL_STATE(92)] = 759,
  [SMALL_STATE(93)] = 763,
  [SMALL_STATE(94)] = 767,
  [SMALL_STATE(95)] = 771,
  [SMALL_STATE(96)] = 775,
  [SMALL_STATE(97)] = 779,
  [SMALL_STATE(98)] = 783,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(18),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(28),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 13),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [215] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__changes_to_be_committed, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
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
