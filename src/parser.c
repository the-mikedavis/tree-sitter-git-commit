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

#define LANGUAGE_VERSION 14
#define STATE_COUNT 246
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 9

enum {
  aux_sym_source_token1 = 1,
  sym__newline = 2,
  aux_sym_subject_token1 = 3,
  aux_sym_subject_token2 = 4,
  aux_sym_message_token1 = 5,
  aux_sym_message_token2 = 6,
  anon_sym_POUND = 7,
  aux_sym_trailer_token1 = 8,
  anon_sym_interactive = 9,
  anon_sym_rebase = 10,
  anon_sym_in = 11,
  anon_sym_progress = 12,
  anon_sym_SEMI = 13,
  anon_sym_onto = 14,
  anon_sym_You = 15,
  anon_sym_are = 16,
  anon_sym_currently = 17,
  aux_sym__rebase_summary_token1 = 18,
  anon_sym_rebasing = 19,
  anon_sym_branch = 20,
  anon_sym_SQUOTE = 21,
  anon_sym_on = 22,
  anon_sym_DOT = 23,
  anon_sym_Last = 24,
  aux_sym__rebase_header_token1 = 25,
  anon_sym_done = 26,
  anon_sym_LPAREN = 27,
  aux_sym__rebase_header_token2 = 28,
  anon_sym_RPAREN = 29,
  anon_sym_COLON = 30,
  anon_sym_Next = 31,
  anon_sym_to = 32,
  anon_sym_do = 33,
  anon_sym_remaining = 34,
  anon_sym_No = 35,
  anon_sym_commands = 36,
  anon_sym_Changes = 37,
  anon_sym_be = 38,
  anon_sym_committed = 39,
  anon_sym_not = 40,
  anon_sym_staged = 41,
  anon_sym_for = 42,
  anon_sym_commit = 43,
  anon_sym_On = 44,
  anon_sym_Your = 45,
  anon_sym_is = 46,
  anon_sym_up = 47,
  anon_sym_date = 48,
  anon_sym_with = 49,
  anon_sym_SQUOTE_DOT = 50,
  anon_sym_ahead = 51,
  anon_sym_of = 52,
  anon_sym_behind = 53,
  anon_sym_by = 54,
  aux_sym__branch_declaration_token1 = 55,
  anon_sym_and = 56,
  anon_sym_have = 57,
  anon_sym_diverged = 58,
  anon_sym_COMMA = 59,
  anon_sym_HEAD = 60,
  anon_sym_detached = 61,
  anon_sym_at = 62,
  anon_sym_Conflicts = 63,
  anon_sym_Untracked = 64,
  anon_sym_files = 65,
  anon_sym_newfile = 66,
  anon_sym_modified = 67,
  anon_sym_renamed = 68,
  anon_sym_deleted = 69,
  anon_sym_DASH_GT = 70,
  sym_commit = 71,
  sym__non_punctuated_word = 72,
  aux_sym__word_token1 = 73,
  sym_branch = 74,
  anon_sym_pick = 75,
  anon_sym_edit = 76,
  anon_sym_squash = 77,
  anon_sym_merge = 78,
  anon_sym_fixup = 79,
  anon_sym_drop = 80,
  anon_sym_reword = 81,
  anon_sym_exec = 82,
  anon_sym_label = 83,
  anon_sym_reset = 84,
  aux_sym_path_token1 = 85,
  sym_user = 86,
  sym_item = 87,
  aux_sym__rest_token1 = 88,
  sym_source = 89,
  sym_subject = 90,
  sym__body_line = 91,
  sym__trailer = 92,
  sym_message = 93,
  sym__text = 94,
  sym_comment = 95,
  sym_trailer = 96,
  sym__rebase_summary = 97,
  sym__rebase_header = 98,
  sym_summary = 99,
  sym__change_header = 100,
  sym__branch_declaration = 101,
  sym_header = 102,
  sym_change = 103,
  sym__word = 104,
  sym_rebase_command = 105,
  sym_path = 106,
  aux_sym__rest = 107,
  aux_sym_source_repeat1 = 108,
  aux_sym_source_repeat2 = 109,
  aux_sym_source_repeat3 = 110,
  aux_sym_subject_repeat1 = 111,
  aux_sym_message_repeat1 = 112,
  aux_sym_comment_repeat1 = 113,
  aux_sym_trailer_repeat1 = 114,
  aux_sym__rebase_summary_repeat1 = 115,
  aux_sym__rebase_summary_repeat2 = 116,
  aux_sym_summary_repeat1 = 117,
  aux_sym_summary_repeat2 = 118,
  aux_sym_path_repeat1 = 119,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "scissors",
  [sym__newline] = "_newline",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [aux_sym_message_token2] = "message_token2",
  [anon_sym_POUND] = "#",
  [aux_sym_trailer_token1] = "trailer_token1",
  [anon_sym_interactive] = "interactive",
  [anon_sym_rebase] = "rebase",
  [anon_sym_in] = "in",
  [anon_sym_progress] = "progress",
  [anon_sym_SEMI] = ";",
  [anon_sym_onto] = "onto",
  [anon_sym_You] = "You",
  [anon_sym_are] = "are",
  [anon_sym_currently] = "currently",
  [aux_sym__rebase_summary_token1] = "_rebase_summary_token1",
  [anon_sym_rebasing] = "rebasing",
  [anon_sym_branch] = "branch",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_on] = "on",
  [anon_sym_DOT] = ".",
  [anon_sym_Last] = "Last",
  [aux_sym__rebase_header_token1] = "_rebase_header_token1",
  [anon_sym_done] = "done",
  [anon_sym_LPAREN] = "(",
  [aux_sym__rebase_header_token2] = "_rebase_header_token2",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_Next] = "Next",
  [anon_sym_to] = "to",
  [anon_sym_do] = "do",
  [anon_sym_remaining] = "remaining",
  [anon_sym_No] = "No",
  [anon_sym_commands] = "commands",
  [anon_sym_Changes] = "Changes",
  [anon_sym_be] = "be",
  [anon_sym_committed] = "committed",
  [anon_sym_not] = "not",
  [anon_sym_staged] = "staged",
  [anon_sym_for] = "for",
  [anon_sym_commit] = "commit",
  [anon_sym_On] = "On",
  [anon_sym_Your] = "Your",
  [anon_sym_is] = "is",
  [anon_sym_up] = "up",
  [anon_sym_date] = "date",
  [anon_sym_with] = "with",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_ahead] = "ahead",
  [anon_sym_of] = "of",
  [anon_sym_behind] = "behind",
  [anon_sym_by] = "by",
  [aux_sym__branch_declaration_token1] = "_branch_declaration_token1",
  [anon_sym_and] = "and",
  [anon_sym_have] = "have",
  [anon_sym_diverged] = "diverged",
  [anon_sym_COMMA] = ",",
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
  [sym__non_punctuated_word] = "_non_punctuated_word",
  [aux_sym__word_token1] = "_word_token1",
  [sym_branch] = "branch",
  [anon_sym_pick] = "pick",
  [anon_sym_edit] = "edit",
  [anon_sym_squash] = "squash",
  [anon_sym_merge] = "merge",
  [anon_sym_fixup] = "fixup",
  [anon_sym_drop] = "drop",
  [anon_sym_reword] = "reword",
  [anon_sym_exec] = "exec",
  [anon_sym_label] = "label",
  [anon_sym_reset] = "reset",
  [aux_sym_path_token1] = "path_token1",
  [sym_user] = "user",
  [sym_item] = "item",
  [aux_sym__rest_token1] = "_rest_token1",
  [sym_source] = "source",
  [sym_subject] = "subject",
  [sym__body_line] = "_body_line",
  [sym__trailer] = "_trailer",
  [sym_message] = "message",
  [sym__text] = "_text",
  [sym_comment] = "comment",
  [sym_trailer] = "trailer",
  [sym__rebase_summary] = "summary",
  [sym__rebase_header] = "header",
  [sym_summary] = "summary",
  [sym__change_header] = "header",
  [sym__branch_declaration] = "_branch_declaration",
  [sym_header] = "header",
  [sym_change] = "change",
  [sym__word] = "_word",
  [sym_rebase_command] = "rebase_command",
  [sym_path] = "path",
  [aux_sym__rest] = "_rest",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
  [aux_sym_source_repeat3] = "source_repeat3",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_trailer_repeat1] = "trailer_repeat1",
  [aux_sym__rebase_summary_repeat1] = "_rebase_summary_repeat1",
  [aux_sym__rebase_summary_repeat2] = "_rebase_summary_repeat2",
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_summary_repeat2] = "summary_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [sym__newline] = sym__newline,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [aux_sym_message_token2] = aux_sym_message_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_trailer_token1] = aux_sym_trailer_token1,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_rebase] = anon_sym_rebase,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_onto] = anon_sym_onto,
  [anon_sym_You] = anon_sym_You,
  [anon_sym_are] = anon_sym_are,
  [anon_sym_currently] = anon_sym_currently,
  [aux_sym__rebase_summary_token1] = aux_sym__rebase_summary_token1,
  [anon_sym_rebasing] = anon_sym_rebasing,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Last] = anon_sym_Last,
  [aux_sym__rebase_header_token1] = aux_sym__rebase_header_token1,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__rebase_header_token2] = aux_sym__rebase_header_token2,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Next] = anon_sym_Next,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_remaining] = anon_sym_remaining,
  [anon_sym_No] = anon_sym_No,
  [anon_sym_commands] = anon_sym_commands,
  [anon_sym_Changes] = anon_sym_Changes,
  [anon_sym_be] = anon_sym_be,
  [anon_sym_committed] = anon_sym_committed,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_staged] = anon_sym_staged,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_commit] = anon_sym_commit,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_Your] = anon_sym_Your,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_ahead] = anon_sym_ahead,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_behind] = anon_sym_behind,
  [anon_sym_by] = anon_sym_by,
  [aux_sym__branch_declaration_token1] = aux_sym__branch_declaration_token1,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_have] = anon_sym_have,
  [anon_sym_diverged] = anon_sym_diverged,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym__non_punctuated_word] = sym__non_punctuated_word,
  [aux_sym__word_token1] = aux_sym__word_token1,
  [sym_branch] = sym_branch,
  [anon_sym_pick] = anon_sym_pick,
  [anon_sym_edit] = anon_sym_edit,
  [anon_sym_squash] = anon_sym_squash,
  [anon_sym_merge] = anon_sym_merge,
  [anon_sym_fixup] = anon_sym_fixup,
  [anon_sym_drop] = anon_sym_drop,
  [anon_sym_reword] = anon_sym_reword,
  [anon_sym_exec] = anon_sym_exec,
  [anon_sym_label] = anon_sym_label,
  [anon_sym_reset] = anon_sym_reset,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [sym_user] = sym_user,
  [sym_item] = sym_item,
  [aux_sym__rest_token1] = aux_sym__rest_token1,
  [sym_source] = sym_source,
  [sym_subject] = sym_subject,
  [sym__body_line] = sym__body_line,
  [sym__trailer] = sym__trailer,
  [sym_message] = sym_message,
  [sym__text] = sym__text,
  [sym_comment] = sym_comment,
  [sym_trailer] = sym_trailer,
  [sym__rebase_summary] = sym_summary,
  [sym__rebase_header] = sym_header,
  [sym_summary] = sym_summary,
  [sym__change_header] = sym_header,
  [sym__branch_declaration] = sym__branch_declaration,
  [sym_header] = sym_header,
  [sym_change] = sym_change,
  [sym__word] = sym__word,
  [sym_rebase_command] = sym_rebase_command,
  [sym_path] = sym_path,
  [aux_sym__rest] = aux_sym__rest,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
  [aux_sym_source_repeat3] = aux_sym_source_repeat3,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_trailer_repeat1] = aux_sym_trailer_repeat1,
  [aux_sym__rebase_summary_repeat1] = aux_sym__rebase_summary_repeat1,
  [aux_sym__rebase_summary_repeat2] = aux_sym__rebase_summary_repeat2,
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
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
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
  [aux_sym_message_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_trailer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rebase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_onto] = {
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
  [aux_sym__rebase_summary_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_rebasing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
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
  [anon_sym_Last] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rebase_header_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_done] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__rebase_header_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Next] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remaining] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_No] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commands] = {
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
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_have] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diverged] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__non_punctuated_word] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__word_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_branch] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pick] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_edit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_squash] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_merge] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_drop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reset] = {
    .visible = true,
    .named = false,
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
  [aux_sym__rest_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_subject] = {
    .visible = true,
    .named = true,
  },
  [sym__body_line] = {
    .visible = false,
    .named = true,
  },
  [sym__trailer] = {
    .visible = false,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_trailer] = {
    .visible = true,
    .named = true,
  },
  [sym__rebase_summary] = {
    .visible = true,
    .named = true,
  },
  [sym__rebase_header] = {
    .visible = true,
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
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_rebase_command] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__rest] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_repeat3] = {
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
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_trailer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rebase_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__rebase_summary_repeat2] = {
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
  field_key = 1,
  field_kind = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_kind] = "kind",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [3] = {.index = 0, .length = 2},
  [8] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_kind, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_message,
  },
  [2] = {
    [2] = sym_message,
  },
  [4] = {
    [2] = sym_branch,
  },
  [5] = {
    [3] = sym_message,
  },
  [6] = {
    [4] = sym_message,
  },
  [7] = {
    [5] = sym_message,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__word, 2,
    sym__word,
    sym_branch,
  aux_sym__rest, 2,
    aux_sym__rest,
    sym_message,
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
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 16,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
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
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 16,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 61,
  [71] = 67,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 62,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == '\'') ADVANCE(629);
      if (lookahead == '(') ADVANCE(629);
      if (lookahead == ')') ADVANCE(629);
      if (lookahead == ',') ADVANCE(629);
      if (lookahead == '.') ADVANCE(629);
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == ';') ADVANCE(629);
      if (lookahead == '=') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(628);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(284);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(628);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0) ADVANCE(403);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(607);
      if (lookahead == '@') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(609);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(9);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(436);
      END_STATE();
    case 32:
      if (lookahead == '8') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(457);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(89);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(443);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(437);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(439);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(623);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(411);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(455);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(448);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(454);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(425);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(440);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(145);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(420);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(435);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(405);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(619);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(449);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(617);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(625);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(115);
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(187);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(163);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead == 's') ADVANCE(432);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(392);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(218);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(214);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(433);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(622);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 207:
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(403);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(422);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(429);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(393);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(94);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(85);
      END_STATE();
    case 253:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 256:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(395);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(609);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(556);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(264);
      END_STATE();
    case 266:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      END_STATE();
    case 267:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 268:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 269:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 271:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(628);
      if (lookahead != 0) ADVANCE(629);
      END_STATE();
    case 272:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == '\'') ADVANCE(406);
      if (lookahead == '(') ADVANCE(413);
      if (lookahead == ')') ADVANCE(415);
      if (lookahead == ',') ADVANCE(446);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == ';') ADVANCE(391);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(147);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 273:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == '@') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 274:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == '@') ADVANCE(381);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (lookahead != 0) ADVANCE(383);
      END_STATE();
    case 275:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(385);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 276:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == 'C') ADVANCE(576);
      if (lookahead == 'H') ADVANCE(562);
      if (lookahead == 'O') ADVANCE(581);
      if (lookahead == 'U') ADVANCE(582);
      if (lookahead == 'Y') ADVANCE(586);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 277:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 278:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(605);
      if (lookahead == '@') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      if (lookahead != 0) ADVANCE(609);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(296);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(403);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(305);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(307);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(325);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(327);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_trailer_token1);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Changes);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_On);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_Your);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_HEAD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_Untracked);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(458);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(463);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(469);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(477);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(478);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(481);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(483);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(484);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(486);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(498);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(502);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(504);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(505);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(507);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(508);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(511);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(513);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(514);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(516);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(519);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(520);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(523);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(525);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(528);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(549);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(550);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'A') ADVANCE(561);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'D') ADVANCE(447);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(566);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'a') ADVANCE(568);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'd') ADVANCE(451);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(590);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(569);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(387);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'f') ADVANCE(580);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'g') ADVANCE(570);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'h') ADVANCE(564);
      if (lookahead == 'o') ADVANCE(583);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'i') ADVANCE(597);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'i') ADVANCE(567);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'k') ADVANCE(571);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'l') ADVANCE(578);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(430);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(592);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(574);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(575);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(431);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'r') ADVANCE(565);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 's') ADVANCE(450);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(573);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(577);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 't') ADVANCE(591);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'u') ADVANCE(587);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == 'v') ADVANCE(572);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(555);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__non_punctuated_word);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(609);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(609);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(609);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym__word_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(628);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(629);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(629);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(631);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(633);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(632);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(633);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 275},
  [2] = {.lex_state = 276},
  [3] = {.lex_state = 272},
  [4] = {.lex_state = 272},
  [5] = {.lex_state = 273},
  [6] = {.lex_state = 272},
  [7] = {.lex_state = 272},
  [8] = {.lex_state = 272},
  [9] = {.lex_state = 272},
  [10] = {.lex_state = 278},
  [11] = {.lex_state = 278},
  [12] = {.lex_state = 278},
  [13] = {.lex_state = 278},
  [14] = {.lex_state = 278},
  [15] = {.lex_state = 274},
  [16] = {.lex_state = 278},
  [17] = {.lex_state = 276},
  [18] = {.lex_state = 272},
  [19] = {.lex_state = 276},
  [20] = {.lex_state = 276},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 277},
  [23] = {.lex_state = 277},
  [24] = {.lex_state = 277},
  [25] = {.lex_state = 276},
  [26] = {.lex_state = 276},
  [27] = {.lex_state = 271},
  [28] = {.lex_state = 276},
  [29] = {.lex_state = 272},
  [30] = {.lex_state = 272},
  [31] = {.lex_state = 277},
  [32] = {.lex_state = 279},
  [33] = {.lex_state = 272},
  [34] = {.lex_state = 279},
  [35] = {.lex_state = 272},
  [36] = {.lex_state = 276},
  [37] = {.lex_state = 276},
  [38] = {.lex_state = 272},
  [39] = {.lex_state = 279},
  [40] = {.lex_state = 634},
  [41] = {.lex_state = 276},
  [42] = {.lex_state = 272},
  [43] = {.lex_state = 272},
  [44] = {.lex_state = 272},
  [45] = {.lex_state = 634},
  [46] = {.lex_state = 272},
  [47] = {.lex_state = 272},
  [48] = {.lex_state = 276},
  [49] = {.lex_state = 634},
  [50] = {.lex_state = 634},
  [51] = {.lex_state = 634},
  [52] = {.lex_state = 634},
  [53] = {.lex_state = 276},
  [54] = {.lex_state = 634},
  [55] = {.lex_state = 276},
  [56] = {.lex_state = 276},
  [57] = {.lex_state = 634},
  [58] = {.lex_state = 260},
  [59] = {.lex_state = 272},
  [60] = {.lex_state = 272},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 634},
  [64] = {.lex_state = 634},
  [65] = {.lex_state = 634},
  [66] = {.lex_state = 272},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 271},
  [69] = {.lex_state = 271},
  [70] = {.lex_state = 271},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 276},
  [73] = {.lex_state = 272},
  [74] = {.lex_state = 276},
  [75] = {.lex_state = 210},
  [76] = {.lex_state = 210},
  [77] = {.lex_state = 276},
  [78] = {.lex_state = 276},
  [79] = {.lex_state = 260},
  [80] = {.lex_state = 210},
  [81] = {.lex_state = 276},
  [82] = {.lex_state = 271},
  [83] = {.lex_state = 276},
  [84] = {.lex_state = 276},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 276},
  [88] = {.lex_state = 276},
  [89] = {.lex_state = 276},
  [90] = {.lex_state = 271},
  [91] = {.lex_state = 634},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 276},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 276},
  [96] = {.lex_state = 276},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 272},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 261},
  [109] = {.lex_state = 272},
  [110] = {.lex_state = 272},
  [111] = {.lex_state = 272},
  [112] = {.lex_state = 272},
  [113] = {.lex_state = 262},
  [114] = {.lex_state = 272},
  [115] = {.lex_state = 272},
  [116] = {.lex_state = 276},
  [117] = {.lex_state = 272},
  [118] = {.lex_state = 272},
  [119] = {.lex_state = 272},
  [120] = {.lex_state = 272},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 262},
  [123] = {.lex_state = 272},
  [124] = {.lex_state = 272},
  [125] = {.lex_state = 276},
  [126] = {.lex_state = 276},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 272},
  [129] = {.lex_state = 272},
  [130] = {.lex_state = 276},
  [131] = {.lex_state = 272},
  [132] = {.lex_state = 272},
  [133] = {.lex_state = 26},
  [134] = {.lex_state = 276},
  [135] = {.lex_state = 26},
  [136] = {.lex_state = 272},
  [137] = {.lex_state = 272},
  [138] = {.lex_state = 272},
  [139] = {.lex_state = 272},
  [140] = {.lex_state = 272},
  [141] = {.lex_state = 272},
  [142] = {.lex_state = 272},
  [143] = {.lex_state = 262},
  [144] = {.lex_state = 272},
  [145] = {.lex_state = 26},
  [146] = {.lex_state = 272},
  [147] = {.lex_state = 272},
  [148] = {.lex_state = 272},
  [149] = {.lex_state = 26},
  [150] = {.lex_state = 272},
  [151] = {.lex_state = 272},
  [152] = {.lex_state = 276},
  [153] = {.lex_state = 276},
  [154] = {.lex_state = 276},
  [155] = {.lex_state = 276},
  [156] = {.lex_state = 272},
  [157] = {.lex_state = 276},
  [158] = {.lex_state = 272},
  [159] = {.lex_state = 272},
  [160] = {.lex_state = 276},
  [161] = {.lex_state = 26},
  [162] = {.lex_state = 26},
  [163] = {.lex_state = 276},
  [164] = {.lex_state = 262},
  [165] = {.lex_state = 272},
  [166] = {.lex_state = 272},
  [167] = {.lex_state = 272},
  [168] = {.lex_state = 272},
  [169] = {.lex_state = 272},
  [170] = {.lex_state = 26},
  [171] = {.lex_state = 272},
  [172] = {.lex_state = 272},
  [173] = {.lex_state = 272},
  [174] = {.lex_state = 26},
  [175] = {.lex_state = 272},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 272},
  [178] = {.lex_state = 272},
  [179] = {.lex_state = 272},
  [180] = {.lex_state = 276},
  [181] = {.lex_state = 276},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 272},
  [184] = {.lex_state = 272},
  [185] = {.lex_state = 272},
  [186] = {.lex_state = 276},
  [187] = {.lex_state = 272},
  [188] = {.lex_state = 272},
  [189] = {.lex_state = 55},
  [190] = {.lex_state = 272},
  [191] = {.lex_state = 272},
  [192] = {.lex_state = 272},
  [193] = {.lex_state = 272},
  [194] = {.lex_state = 26},
  [195] = {.lex_state = 262},
  [196] = {.lex_state = 272},
  [197] = {.lex_state = 272},
  [198] = {.lex_state = 276},
  [199] = {.lex_state = 272},
  [200] = {.lex_state = 262},
  [201] = {.lex_state = 272},
  [202] = {.lex_state = 272},
  [203] = {.lex_state = 26},
  [204] = {.lex_state = 272},
  [205] = {.lex_state = 262},
  [206] = {.lex_state = 272},
  [207] = {.lex_state = 272},
  [208] = {.lex_state = 26},
  [209] = {.lex_state = 272},
  [210] = {.lex_state = 262},
  [211] = {.lex_state = 26},
  [212] = {.lex_state = 272},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 272},
  [215] = {.lex_state = 272},
  [216] = {.lex_state = 26},
  [217] = {.lex_state = 272},
  [218] = {.lex_state = 26},
  [219] = {.lex_state = 272},
  [220] = {.lex_state = 272},
  [221] = {.lex_state = 26},
  [222] = {.lex_state = 272},
  [223] = {.lex_state = 276},
  [224] = {.lex_state = 272},
  [225] = {.lex_state = 272},
  [226] = {.lex_state = 26},
  [227] = {.lex_state = 272},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 272},
  [230] = {.lex_state = 272},
  [231] = {.lex_state = 272},
  [232] = {.lex_state = 55},
  [233] = {.lex_state = 276},
  [234] = {.lex_state = 272},
  [235] = {.lex_state = 272},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 276},
  [238] = {.lex_state = 276},
  [239] = {.lex_state = 272},
  [240] = {.lex_state = 26},
  [241] = {.lex_state = 272},
  [242] = {.lex_state = 272},
  [243] = {.lex_state = 272},
  [244] = {.lex_state = 272},
  [245] = {.lex_state = 272},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [aux_sym_trailer_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym__word_token1] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(126),
    [sym_subject] = STATE(17),
    [sym__body_line] = STATE(20),
    [sym__trailer] = STATE(28),
    [sym_comment] = STATE(17),
    [aux_sym_source_repeat1] = STATE(20),
    [aux_sym_source_repeat2] = STATE(28),
    [aux_sym_source_repeat3] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [aux_sym_subject_token1] = ACTIONS(11),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(19), 1,
      anon_sym_interactive,
    ACTIONS(21), 1,
      anon_sym_Changes,
    ACTIONS(23), 1,
      anon_sym_On,
    ACTIONS(25), 1,
      anon_sym_Your,
    ACTIONS(27), 1,
      anon_sym_HEAD,
    ACTIONS(29), 1,
      anon_sym_Conflicts,
    ACTIONS(31), 1,
      anon_sym_Untracked,
    STATE(236), 1,
      sym_header,
    STATE(238), 1,
      sym__change_header,
    ACTIONS(33), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    STATE(22), 2,
      sym__word,
      aux_sym_comment_repeat1,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(83), 3,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [49] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(154), 1,
      sym__rebase_header,
    STATE(155), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [80] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(155), 1,
      sym_rebase_command,
    STATE(163), 1,
      sym__rebase_header,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [111] = 8,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      sym_user,
    STATE(87), 1,
      sym_trailer,
    STATE(245), 1,
      sym__word,
    ACTIONS(47), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    STATE(88), 2,
      sym_message,
      sym_comment,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(45), 3,
      aux_sym_message_token1,
      aux_sym_message_token2,
      sym_commit,
  [142] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(51), 1,
      anon_sym_You,
    STATE(155), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [164] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      anon_sym_You,
    STATE(155), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [186] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      anon_sym_You,
    STATE(155), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [208] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(155), 1,
      sym_rebase_command,
    ACTIONS(41), 10,
      anon_sym_pick,
      anon_sym_edit,
      anon_sym_squash,
      anon_sym_merge,
      anon_sym_fixup,
      anon_sym_drop,
      anon_sym_reword,
      anon_sym_exec,
      anon_sym_label,
      anon_sym_reset,
  [227] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      sym_commit,
    ACTIONS(61), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(63), 2,
      sym_user,
      sym_item,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(11), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [252] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      sym_commit,
    ACTIONS(70), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(73), 2,
      sym_user,
      sym_item,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(11), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [277] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(78), 1,
      sym_commit,
    ACTIONS(61), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(80), 2,
      sym_user,
      sym_item,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(10), 3,
      sym__text,
      sym__word,
      aux_sym_message_repeat1,
  [302] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(84), 1,
      sym_commit,
    ACTIONS(61), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(86), 2,
      sym_user,
      sym_item,
    STATE(14), 2,
      sym__word,
      aux_sym_trailer_repeat1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [326] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(90), 1,
      sym_commit,
    ACTIONS(93), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(96), 2,
      sym_user,
      sym_item,
    STATE(14), 2,
      sym__word,
      aux_sym_trailer_repeat1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [350] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      sym_user,
    STATE(88), 2,
      sym_message,
      sym_comment,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(45), 3,
      aux_sym_message_token1,
      aux_sym_message_token2,
      sym_commit,
  [371] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 3,
      sym_commit,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
      sym_user,
      sym_item,
  [387] = 7,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    STATE(55), 1,
      aux_sym_source_repeat3,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(26), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [411] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(160), 1,
      sym_change,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(109), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [429] = 7,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym_source_token1,
    STATE(56), 1,
      aux_sym_source_repeat3,
    STATE(25), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [453] = 7,
    ACTIONS(9), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    STATE(55), 1,
      aux_sym_source_repeat3,
    STATE(26), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [477] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(115), 1,
      sym_commit,
    ACTIONS(61), 2,
      sym__non_punctuated_word,
      aux_sym__word_token1,
    ACTIONS(117), 2,
      sym_user,
      sym_item,
    STATE(13), 2,
      sym__word,
      aux_sym_trailer_repeat1,
  [496] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      aux_sym__word_token1,
    ACTIONS(121), 1,
      sym__non_punctuated_word,
    STATE(24), 2,
      sym__word,
      aux_sym_comment_repeat1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [515] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      aux_sym__word_token1,
    ACTIONS(125), 1,
      sym__non_punctuated_word,
    STATE(87), 1,
      sym_trailer,
    STATE(245), 1,
      sym__word,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [536] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(129), 1,
      sym__non_punctuated_word,
    ACTIONS(132), 1,
      aux_sym__word_token1,
    STATE(24), 2,
      sym__word,
      aux_sym_comment_repeat1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [555] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_source_token1,
    ACTIONS(139), 1,
      sym__newline,
    STATE(41), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [575] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym_source_token1,
    ACTIONS(139), 1,
      sym__newline,
    STATE(56), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [595] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(141), 1,
      aux_sym_source_token1,
    ACTIONS(143), 1,
      aux_sym_path_token1,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(157), 1,
      sym_path,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__newline,
  [615] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(139), 1,
      sym__newline,
    STATE(55), 1,
      aux_sym_source_repeat3,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [635] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(147), 1,
      anon_sym_POUND,
    STATE(35), 1,
      aux_sym_summary_repeat1,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [650] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(160), 1,
      sym_change,
    ACTIONS(109), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [663] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      aux_sym__word_token1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
      sym__non_punctuated_word,
  [676] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(151), 1,
      aux_sym_subject_token2,
    STATE(34), 1,
      aux_sym_subject_repeat1,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [691] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(153), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [706] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(157), 1,
      aux_sym_subject_token2,
    STATE(39), 1,
      aux_sym_subject_repeat1,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [721] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(161), 1,
      anon_sym_POUND,
    STATE(35), 1,
      aux_sym_summary_repeat1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [736] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      sym__newline,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(36), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [751] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(171), 1,
      sym__newline,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(37), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [766] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(176), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(174), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [781] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(181), 1,
      aux_sym_subject_token2,
    STATE(39), 1,
      aux_sym_subject_repeat1,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [796] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    STATE(63), 1,
      aux_sym__rest,
  [812] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      aux_sym_source_token1,
    ACTIONS(194), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_source_repeat3,
  [828] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(198), 1,
      anon_sym_POUND,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [840] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(134), 1,
      sym__rebase_header,
  [856] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(202), 1,
      anon_sym_POUND,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [868] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [884] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(208), 1,
      anon_sym_POUND,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [896] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(212), 1,
      anon_sym_POUND,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [908] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_source_token1,
    ACTIONS(194), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_source_repeat3,
  [924] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      aux_sym__rest,
  [940] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [956] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [972] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    STATE(51), 1,
      aux_sym__rest,
  [988] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(222), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_source_repeat3,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1002] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    STATE(65), 1,
      aux_sym__rest,
  [1018] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym_source_token1,
    ACTIONS(194), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_source_repeat3,
  [1034] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_source_token1,
    ACTIONS(194), 1,
      sym__newline,
    STATE(53), 1,
      aux_sym_source_repeat3,
  [1050] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    STATE(40), 1,
      aux_sym__rest,
  [1066] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      aux_sym__word_token1,
    ACTIONS(125), 1,
      sym__non_punctuated_word,
    STATE(87), 1,
      sym_trailer,
    STATE(245), 1,
      sym__word,
  [1082] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
      aux_sym_trailer_token1,
  [1092] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(227), 1,
      anon_sym_POUND,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1104] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(231), 1,
      aux_sym_path_token1,
    STATE(61), 1,
      aux_sym_path_repeat1,
    ACTIONS(229), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [1118] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(236), 1,
      aux_sym_path_token1,
    STATE(61), 1,
      aux_sym_path_repeat1,
    ACTIONS(234), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [1132] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(240), 1,
      sym__newline,
    ACTIONS(243), 1,
      aux_sym__rest_token1,
    STATE(63), 1,
      aux_sym__rest,
  [1148] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      aux_sym__rest,
  [1164] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      sym__newline,
    ACTIONS(188), 1,
      aux_sym__rest_token1,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [1180] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(250), 1,
      anon_sym_POUND,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1192] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(252), 1,
      sym__newline,
    ACTIONS(254), 1,
      aux_sym__rebase_summary_token1,
    STATE(67), 1,
      aux_sym__rebase_summary_repeat2,
  [1205] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      aux_sym_path_token1,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(157), 1,
      sym_path,
  [1218] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(257), 1,
      aux_sym_path_token1,
    STATE(62), 1,
      aux_sym_path_repeat1,
    STATE(110), 1,
      sym_path,
  [1231] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(229), 1,
      sym__newline,
    ACTIONS(259), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      aux_sym_path_repeat1,
  [1244] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(262), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(265), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1257] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1266] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      anon_sym_up,
    ACTIONS(271), 1,
      anon_sym_ahead,
    ACTIONS(273), 1,
      anon_sym_behind,
  [1279] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1288] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(279), 1,
      anon_sym_rebasing,
    STATE(76), 1,
      aux_sym__rebase_summary_repeat2,
  [1301] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(281), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(283), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1314] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1323] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1332] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      aux_sym__word_token1,
    ACTIONS(125), 1,
      sym__non_punctuated_word,
    STATE(74), 1,
      sym__word,
  [1345] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(283), 1,
      anon_sym_rebasing,
    ACTIONS(287), 1,
      aux_sym__rebase_summary_token1,
    STATE(92), 1,
      aux_sym__rebase_summary_repeat2,
  [1358] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1367] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      aux_sym_path_token1,
    STATE(90), 1,
      aux_sym_path_repeat1,
    STATE(125), 1,
      sym_path,
  [1380] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1389] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1398] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(291), 1,
      sym__newline,
    ACTIONS(293), 1,
      aux_sym__rebase_summary_token1,
    STATE(67), 1,
      aux_sym__rebase_summary_repeat2,
  [1411] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(281), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(295), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1424] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1433] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(299), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1442] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1451] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(234), 1,
      sym__newline,
    ACTIONS(301), 1,
      aux_sym_path_token1,
    STATE(70), 1,
      aux_sym_path_repeat1,
  [1464] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      aux_sym__rest_token1,
    ACTIONS(303), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1475] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(281), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1488] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1497] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    ACTIONS(311), 1,
      aux_sym__rebase_summary_token1,
    STATE(86), 1,
      aux_sym__rebase_summary_repeat2,
  [1510] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1519] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1528] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(317), 1,
      anon_sym_POUND,
    STATE(103), 1,
      aux_sym__rebase_summary_repeat1,
  [1538] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(319), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_summary_repeat2,
  [1548] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      aux_sym__rebase_summary_token1,
    STATE(85), 1,
      aux_sym__rebase_summary_repeat2,
  [1558] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(323), 1,
      anon_sym_POUND,
    STATE(102), 1,
      aux_sym__rebase_summary_repeat1,
  [1568] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(325), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_summary_repeat1,
  [1578] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(327), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1588] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1598] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(331), 1,
      anon_sym_is,
    ACTIONS(333), 1,
      anon_sym_and,
  [1608] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(335), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1618] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(338), 1,
      anon_sym_POUND,
    STATE(107), 1,
      aux_sym__rebase_summary_repeat1,
  [1628] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(317), 1,
      anon_sym_POUND,
    STATE(105), 1,
      aux_sym__rebase_summary_repeat1,
  [1638] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(340), 2,
      sym_commit,
      sym_branch,
  [1646] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(342), 1,
      anon_sym_to,
    ACTIONS(344), 1,
      anon_sym_not,
  [1656] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(346), 1,
      sym__newline,
    ACTIONS(348), 1,
      anon_sym_DASH_GT,
  [1666] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_by,
  [1673] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(352), 1,
      anon_sym_currently,
  [1680] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(354), 1,
      sym_branch,
  [1687] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
  [1694] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(358), 1,
      anon_sym_have,
  [1701] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(360), 1,
      sym__newline,
  [1708] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
  [1715] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
  [1722] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(366), 1,
      anon_sym_by,
  [1729] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      anon_sym_diverged,
  [1736] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(370), 1,
      anon_sym_POUND,
  [1743] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(372), 1,
      sym_branch,
  [1750] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(374), 1,
      aux_sym__rebase_header_token2,
  [1757] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(376), 1,
      anon_sym_COMMA,
  [1764] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(378), 1,
      sym__newline,
  [1771] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
  [1778] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(382), 1,
      anon_sym_SQUOTE_DOT,
  [1785] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(384), 1,
      aux_sym__rebase_header_token2,
  [1792] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(386), 1,
      aux_sym__branch_declaration_token1,
  [1799] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(388), 1,
      sym__newline,
  [1806] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(390), 1,
      aux_sym__rebase_header_token1,
  [1813] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(392), 1,
      aux_sym__rebase_header_token1,
  [1820] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(394), 1,
      anon_sym_commands,
  [1827] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(396), 1,
      sym__newline,
  [1834] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(398), 1,
      sym_commit,
  [1841] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(400), 1,
      aux_sym__branch_declaration_token1,
  [1848] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(402), 1,
      anon_sym_DOT,
  [1855] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(404), 1,
      anon_sym_done,
  [1862] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(406), 1,
      anon_sym_to,
  [1869] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(408), 1,
      anon_sym_remaining,
  [1876] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(410), 1,
      anon_sym_SQUOTE,
  [1883] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(412), 1,
      anon_sym_DOT,
  [1890] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(414), 1,
      sym_branch,
  [1897] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
  [1904] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(418), 1,
      anon_sym_do,
  [1911] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(420), 1,
      anon_sym_DOT,
  [1918] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
  [1925] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(424), 1,
      anon_sym_date,
  [1932] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [1939] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(428), 1,
      aux_sym__rebase_header_token2,
  [1946] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [1953] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(432), 1,
      sym__newline,
  [1960] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(434), 1,
      sym__newline,
  [1967] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(436), 1,
      sym__newline,
  [1974] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(438), 1,
      sym__newline,
  [1981] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(440), 1,
      anon_sym_onto,
  [1988] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(442), 1,
      sym__newline,
  [1995] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(444), 1,
      aux_sym__rebase_header_token1,
  [2002] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(446), 1,
      aux_sym__rebase_header_token2,
  [2009] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(448), 1,
      sym__newline,
  [2016] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(450), 1,
      anon_sym_COLON,
  [2023] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(452), 1,
      anon_sym_POUND,
  [2030] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(454), 1,
      sym__newline,
  [2037] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(456), 1,
      sym_branch,
  [2044] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(458), 1,
      anon_sym_done,
  [2051] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(460), 1,
      anon_sym_remaining,
  [2058] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
  [2065] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(464), 1,
      anon_sym_of,
  [2072] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(466), 1,
      anon_sym_to,
  [2079] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(468), 1,
      anon_sym_commit,
  [2086] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2093] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(472), 1,
      aux_sym__rebase_header_token1,
  [2100] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(474), 1,
      anon_sym_are,
  [2107] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [2114] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(478), 1,
      anon_sym_SEMI,
  [2121] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [2128] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
  [2135] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(484), 1,
      anon_sym_with,
  [2142] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(486), 1,
      anon_sym_are,
  [2149] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(488), 1,
      sym__newline,
  [2156] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(490), 1,
      sym__newline,
  [2163] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [2170] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(494), 1,
      anon_sym_SQUOTE,
  [2177] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(496), 1,
      anon_sym_currently,
  [2184] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(498), 1,
      anon_sym_are,
  [2191] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(500), 1,
      sym__newline,
  [2198] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(502), 1,
      anon_sym_branch,
  [2205] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(504), 1,
      anon_sym_for,
  [2212] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(506), 1,
      anon_sym_committed,
  [2219] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(508), 1,
      anon_sym_currently,
  [2226] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(510), 1,
      anon_sym_SQUOTE,
  [2233] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(512), 1,
      anon_sym_branch,
  [2240] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(514), 1,
      anon_sym_progress,
  [2247] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(516), 1,
      anon_sym_COLON,
  [2254] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(518), 1,
      sym_branch,
  [2261] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(520), 1,
      anon_sym_SQUOTE,
  [2268] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(522), 1,
      anon_sym_branch,
  [2275] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(524), 1,
      sym__newline,
  [2282] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
  [2289] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(528), 1,
      sym_branch,
  [2296] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
  [2303] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(532), 1,
      anon_sym_branch,
  [2310] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(534), 1,
      anon_sym_on,
  [2317] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
  [2324] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(538), 1,
      sym_branch,
  [2331] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
  [2338] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE,
  [2345] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(544), 1,
      anon_sym_on,
  [2352] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
  [2359] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(548), 1,
      sym_branch,
  [2366] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(550), 1,
      sym_commit,
  [2373] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
  [2380] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(554), 1,
      anon_sym_on,
  [2387] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
  [2394] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
  [2401] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(560), 1,
      sym_commit,
  [2408] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(562), 1,
      anon_sym_SQUOTE,
  [2415] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(564), 1,
      anon_sym_on,
  [2422] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(566), 1,
      anon_sym_DOT,
  [2429] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
  [2436] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(570), 1,
      sym_commit,
  [2443] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(572), 1,
      anon_sym_SQUOTE,
  [2450] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(574), 1,
      sym__newline,
  [2457] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(576), 1,
      anon_sym_DOT,
  [2464] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(578), 1,
      anon_sym_SQUOTE,
  [2471] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(580), 1,
      sym_commit,
  [2478] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(582), 1,
      anon_sym_at,
  [2485] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(584), 1,
      sym__newline,
  [2492] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(586), 1,
      anon_sym_DOT,
  [2499] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
  [2506] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(590), 1,
      anon_sym_staged,
  [2513] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(592), 1,
      anon_sym_be,
  [2520] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(594), 1,
      sym__newline,
  [2527] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(596), 1,
      anon_sym_DOT,
  [2534] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(598), 1,
      anon_sym_in,
  [2541] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(600), 1,
      sym__newline,
  [2548] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(602), 1,
      sym__newline,
  [2555] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(604), 1,
      sym__newline,
  [2562] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(606), 1,
      anon_sym_files,
  [2569] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(608), 1,
      anon_sym_COLON,
  [2576] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(610), 1,
      anon_sym_detached,
  [2583] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(612), 1,
      anon_sym_branch,
  [2590] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(614), 1,
      anon_sym_branch,
  [2597] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(616), 1,
      anon_sym_rebase,
  [2604] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(618), 1,
      aux_sym_trailer_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 111,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 277,
  [SMALL_STATE(13)] = 302,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 350,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 411,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 453,
  [SMALL_STATE(21)] = 477,
  [SMALL_STATE(22)] = 496,
  [SMALL_STATE(23)] = 515,
  [SMALL_STATE(24)] = 536,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 575,
  [SMALL_STATE(27)] = 595,
  [SMALL_STATE(28)] = 615,
  [SMALL_STATE(29)] = 635,
  [SMALL_STATE(30)] = 650,
  [SMALL_STATE(31)] = 663,
  [SMALL_STATE(32)] = 676,
  [SMALL_STATE(33)] = 691,
  [SMALL_STATE(34)] = 706,
  [SMALL_STATE(35)] = 721,
  [SMALL_STATE(36)] = 736,
  [SMALL_STATE(37)] = 751,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 796,
  [SMALL_STATE(41)] = 812,
  [SMALL_STATE(42)] = 828,
  [SMALL_STATE(43)] = 840,
  [SMALL_STATE(44)] = 856,
  [SMALL_STATE(45)] = 868,
  [SMALL_STATE(46)] = 884,
  [SMALL_STATE(47)] = 896,
  [SMALL_STATE(48)] = 908,
  [SMALL_STATE(49)] = 924,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 956,
  [SMALL_STATE(52)] = 972,
  [SMALL_STATE(53)] = 988,
  [SMALL_STATE(54)] = 1002,
  [SMALL_STATE(55)] = 1018,
  [SMALL_STATE(56)] = 1034,
  [SMALL_STATE(57)] = 1050,
  [SMALL_STATE(58)] = 1066,
  [SMALL_STATE(59)] = 1082,
  [SMALL_STATE(60)] = 1092,
  [SMALL_STATE(61)] = 1104,
  [SMALL_STATE(62)] = 1118,
  [SMALL_STATE(63)] = 1132,
  [SMALL_STATE(64)] = 1148,
  [SMALL_STATE(65)] = 1164,
  [SMALL_STATE(66)] = 1180,
  [SMALL_STATE(67)] = 1192,
  [SMALL_STATE(68)] = 1205,
  [SMALL_STATE(69)] = 1218,
  [SMALL_STATE(70)] = 1231,
  [SMALL_STATE(71)] = 1244,
  [SMALL_STATE(72)] = 1257,
  [SMALL_STATE(73)] = 1266,
  [SMALL_STATE(74)] = 1279,
  [SMALL_STATE(75)] = 1288,
  [SMALL_STATE(76)] = 1301,
  [SMALL_STATE(77)] = 1314,
  [SMALL_STATE(78)] = 1323,
  [SMALL_STATE(79)] = 1332,
  [SMALL_STATE(80)] = 1345,
  [SMALL_STATE(81)] = 1358,
  [SMALL_STATE(82)] = 1367,
  [SMALL_STATE(83)] = 1380,
  [SMALL_STATE(84)] = 1389,
  [SMALL_STATE(85)] = 1398,
  [SMALL_STATE(86)] = 1411,
  [SMALL_STATE(87)] = 1424,
  [SMALL_STATE(88)] = 1433,
  [SMALL_STATE(89)] = 1442,
  [SMALL_STATE(90)] = 1451,
  [SMALL_STATE(91)] = 1464,
  [SMALL_STATE(92)] = 1475,
  [SMALL_STATE(93)] = 1488,
  [SMALL_STATE(94)] = 1497,
  [SMALL_STATE(95)] = 1510,
  [SMALL_STATE(96)] = 1519,
  [SMALL_STATE(97)] = 1528,
  [SMALL_STATE(98)] = 1538,
  [SMALL_STATE(99)] = 1548,
  [SMALL_STATE(100)] = 1558,
  [SMALL_STATE(101)] = 1568,
  [SMALL_STATE(102)] = 1578,
  [SMALL_STATE(103)] = 1588,
  [SMALL_STATE(104)] = 1598,
  [SMALL_STATE(105)] = 1608,
  [SMALL_STATE(106)] = 1618,
  [SMALL_STATE(107)] = 1628,
  [SMALL_STATE(108)] = 1638,
  [SMALL_STATE(109)] = 1646,
  [SMALL_STATE(110)] = 1656,
  [SMALL_STATE(111)] = 1666,
  [SMALL_STATE(112)] = 1673,
  [SMALL_STATE(113)] = 1680,
  [SMALL_STATE(114)] = 1687,
  [SMALL_STATE(115)] = 1694,
  [SMALL_STATE(116)] = 1701,
  [SMALL_STATE(117)] = 1708,
  [SMALL_STATE(118)] = 1715,
  [SMALL_STATE(119)] = 1722,
  [SMALL_STATE(120)] = 1729,
  [SMALL_STATE(121)] = 1736,
  [SMALL_STATE(122)] = 1743,
  [SMALL_STATE(123)] = 1750,
  [SMALL_STATE(124)] = 1757,
  [SMALL_STATE(125)] = 1764,
  [SMALL_STATE(126)] = 1771,
  [SMALL_STATE(127)] = 1778,
  [SMALL_STATE(128)] = 1785,
  [SMALL_STATE(129)] = 1792,
  [SMALL_STATE(130)] = 1799,
  [SMALL_STATE(131)] = 1806,
  [SMALL_STATE(132)] = 1813,
  [SMALL_STATE(133)] = 1820,
  [SMALL_STATE(134)] = 1827,
  [SMALL_STATE(135)] = 1834,
  [SMALL_STATE(136)] = 1841,
  [SMALL_STATE(137)] = 1848,
  [SMALL_STATE(138)] = 1855,
  [SMALL_STATE(139)] = 1862,
  [SMALL_STATE(140)] = 1869,
  [SMALL_STATE(141)] = 1876,
  [SMALL_STATE(142)] = 1883,
  [SMALL_STATE(143)] = 1890,
  [SMALL_STATE(144)] = 1897,
  [SMALL_STATE(145)] = 1904,
  [SMALL_STATE(146)] = 1911,
  [SMALL_STATE(147)] = 1918,
  [SMALL_STATE(148)] = 1925,
  [SMALL_STATE(149)] = 1932,
  [SMALL_STATE(150)] = 1939,
  [SMALL_STATE(151)] = 1946,
  [SMALL_STATE(152)] = 1953,
  [SMALL_STATE(153)] = 1960,
  [SMALL_STATE(154)] = 1967,
  [SMALL_STATE(155)] = 1974,
  [SMALL_STATE(156)] = 1981,
  [SMALL_STATE(157)] = 1988,
  [SMALL_STATE(158)] = 1995,
  [SMALL_STATE(159)] = 2002,
  [SMALL_STATE(160)] = 2009,
  [SMALL_STATE(161)] = 2016,
  [SMALL_STATE(162)] = 2023,
  [SMALL_STATE(163)] = 2030,
  [SMALL_STATE(164)] = 2037,
  [SMALL_STATE(165)] = 2044,
  [SMALL_STATE(166)] = 2051,
  [SMALL_STATE(167)] = 2058,
  [SMALL_STATE(168)] = 2065,
  [SMALL_STATE(169)] = 2072,
  [SMALL_STATE(170)] = 2079,
  [SMALL_STATE(171)] = 2086,
  [SMALL_STATE(172)] = 2093,
  [SMALL_STATE(173)] = 2100,
  [SMALL_STATE(174)] = 2107,
  [SMALL_STATE(175)] = 2114,
  [SMALL_STATE(176)] = 2121,
  [SMALL_STATE(177)] = 2128,
  [SMALL_STATE(178)] = 2135,
  [SMALL_STATE(179)] = 2142,
  [SMALL_STATE(180)] = 2149,
  [SMALL_STATE(181)] = 2156,
  [SMALL_STATE(182)] = 2163,
  [SMALL_STATE(183)] = 2170,
  [SMALL_STATE(184)] = 2177,
  [SMALL_STATE(185)] = 2184,
  [SMALL_STATE(186)] = 2191,
  [SMALL_STATE(187)] = 2198,
  [SMALL_STATE(188)] = 2205,
  [SMALL_STATE(189)] = 2212,
  [SMALL_STATE(190)] = 2219,
  [SMALL_STATE(191)] = 2226,
  [SMALL_STATE(192)] = 2233,
  [SMALL_STATE(193)] = 2240,
  [SMALL_STATE(194)] = 2247,
  [SMALL_STATE(195)] = 2254,
  [SMALL_STATE(196)] = 2261,
  [SMALL_STATE(197)] = 2268,
  [SMALL_STATE(198)] = 2275,
  [SMALL_STATE(199)] = 2282,
  [SMALL_STATE(200)] = 2289,
  [SMALL_STATE(201)] = 2296,
  [SMALL_STATE(202)] = 2303,
  [SMALL_STATE(203)] = 2310,
  [SMALL_STATE(204)] = 2317,
  [SMALL_STATE(205)] = 2324,
  [SMALL_STATE(206)] = 2331,
  [SMALL_STATE(207)] = 2338,
  [SMALL_STATE(208)] = 2345,
  [SMALL_STATE(209)] = 2352,
  [SMALL_STATE(210)] = 2359,
  [SMALL_STATE(211)] = 2366,
  [SMALL_STATE(212)] = 2373,
  [SMALL_STATE(213)] = 2380,
  [SMALL_STATE(214)] = 2387,
  [SMALL_STATE(215)] = 2394,
  [SMALL_STATE(216)] = 2401,
  [SMALL_STATE(217)] = 2408,
  [SMALL_STATE(218)] = 2415,
  [SMALL_STATE(219)] = 2422,
  [SMALL_STATE(220)] = 2429,
  [SMALL_STATE(221)] = 2436,
  [SMALL_STATE(222)] = 2443,
  [SMALL_STATE(223)] = 2450,
  [SMALL_STATE(224)] = 2457,
  [SMALL_STATE(225)] = 2464,
  [SMALL_STATE(226)] = 2471,
  [SMALL_STATE(227)] = 2478,
  [SMALL_STATE(228)] = 2485,
  [SMALL_STATE(229)] = 2492,
  [SMALL_STATE(230)] = 2499,
  [SMALL_STATE(231)] = 2506,
  [SMALL_STATE(232)] = 2513,
  [SMALL_STATE(233)] = 2520,
  [SMALL_STATE(234)] = 2527,
  [SMALL_STATE(235)] = 2534,
  [SMALL_STATE(236)] = 2541,
  [SMALL_STATE(237)] = 2548,
  [SMALL_STATE(238)] = 2555,
  [SMALL_STATE(239)] = 2562,
  [SMALL_STATE(240)] = 2569,
  [SMALL_STATE(241)] = 2576,
  [SMALL_STATE(242)] = 2583,
  [SMALL_STATE(243)] = 2590,
  [SMALL_STATE(244)] = 2597,
  [SMALL_STATE(245)] = 2604,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(16),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(14),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(16),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(31),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(31),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(30),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(58),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(68),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(39),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat3, 2), SHIFT_REPEAT(53),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(91),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(91),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [254] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(67),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(70),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(71),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailer, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(9),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 8),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 8),
  [380] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
