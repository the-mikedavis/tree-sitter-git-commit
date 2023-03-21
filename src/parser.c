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
#define STATE_COUNT 334
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 116
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
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
  sym__word = 72,
  sym_branch = 73,
  anon_sym_pick = 74,
  anon_sym_edit = 75,
  anon_sym_squash = 76,
  anon_sym_merge = 77,
  anon_sym_fixup = 78,
  anon_sym_drop = 79,
  anon_sym_reword = 80,
  anon_sym_exec = 81,
  anon_sym_label = 82,
  anon_sym_reset = 83,
  aux_sym_path_token1 = 84,
  sym_user = 85,
  sym_item = 86,
  aux_sym__rest_token1 = 87,
  sym_source = 88,
  sym_subject = 89,
  sym__body_line = 90,
  sym_message = 91,
  sym__text = 92,
  sym_comment = 93,
  sym_trailer = 94,
  sym__rebase_summary = 95,
  sym__rebase_header = 96,
  sym_summary = 97,
  sym__change_header = 98,
  sym__branch_declaration = 99,
  sym_header = 100,
  sym_change = 101,
  sym_rebase_command = 102,
  sym_path = 103,
  aux_sym__rest = 104,
  aux_sym_source_repeat1 = 105,
  aux_sym_source_repeat2 = 106,
  aux_sym_subject_repeat1 = 107,
  aux_sym_message_repeat1 = 108,
  aux_sym_comment_repeat1 = 109,
  aux_sym_trailer_repeat1 = 110,
  aux_sym__rebase_summary_repeat1 = 111,
  aux_sym__rebase_summary_repeat2 = 112,
  aux_sym_summary_repeat1 = 113,
  aux_sym_summary_repeat2 = 114,
  aux_sym_path_repeat1 = 115,
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
  [sym__word] = "_word",
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
  [sym_rebase_command] = "rebase_command",
  [sym_path] = "path",
  [aux_sym__rest] = "_rest",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
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
  [sym__word] = sym__word,
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
  [sym_rebase_command] = sym_rebase_command,
  [sym_path] = sym_path,
  [aux_sym__rest] = aux_sym__rest,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
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
  [sym__word] = {
    .visible = false,
    .named = true,
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
    [3] = sym_message,
  },
  [5] = {
    [2] = sym_branch,
  },
  [6] = {
    [4] = sym_message,
  },
  [7] = {
    [5] = sym_message,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 12,
  [17] = 14,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 20,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 30,
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
  [46] = 23,
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
  [57] = 50,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 37,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 76,
  [81] = 81,
  [82] = 69,
  [83] = 49,
  [84] = 35,
  [85] = 38,
  [86] = 33,
  [87] = 87,
  [88] = 78,
  [89] = 32,
  [90] = 29,
  [91] = 79,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 93,
  [96] = 71,
  [97] = 48,
  [98] = 68,
  [99] = 99,
  [100] = 100,
  [101] = 87,
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
  [112] = 108,
  [113] = 109,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 62,
  [121] = 61,
  [122] = 59,
  [123] = 58,
  [124] = 64,
  [125] = 55,
  [126] = 119,
  [127] = 118,
  [128] = 128,
  [129] = 129,
  [130] = 114,
  [131] = 131,
  [132] = 132,
  [133] = 111,
  [134] = 110,
  [135] = 115,
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
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 186,
  [252] = 252,
  [253] = 185,
  [254] = 254,
  [255] = 215,
  [256] = 220,
  [257] = 225,
  [258] = 229,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 211,
  [264] = 216,
  [265] = 136,
  [266] = 226,
  [267] = 207,
  [268] = 212,
  [269] = 217,
  [270] = 222,
  [271] = 203,
  [272] = 208,
  [273] = 213,
  [274] = 218,
  [275] = 199,
  [276] = 204,
  [277] = 209,
  [278] = 214,
  [279] = 195,
  [280] = 200,
  [281] = 205,
  [282] = 210,
  [283] = 191,
  [284] = 196,
  [285] = 201,
  [286] = 206,
  [287] = 187,
  [288] = 192,
  [289] = 197,
  [290] = 202,
  [291] = 183,
  [292] = 188,
  [293] = 193,
  [294] = 198,
  [295] = 179,
  [296] = 184,
  [297] = 189,
  [298] = 194,
  [299] = 299,
  [300] = 260,
  [301] = 259,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 170,
  [306] = 176,
  [307] = 182,
  [308] = 165,
  [309] = 171,
  [310] = 177,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 236,
  [319] = 157,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 239,
  [325] = 325,
  [326] = 315,
  [327] = 221,
  [328] = 137,
  [329] = 181,
  [330] = 231,
  [331] = 237,
  [332] = 299,
  [333] = 320,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\'') ADVANCE(509);
      if (lookahead == '(') ADVANCE(509);
      if (lookahead == ')') ADVANCE(509);
      if (lookahead == ',') ADVANCE(509);
      if (lookahead == '.') ADVANCE(509);
      if (lookahead == ':') ADVANCE(509);
      if (lookahead == ';') ADVANCE(509);
      if (lookahead == '=') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(508);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(284);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(488);
      if (lookahead == '@') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(307);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(508);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(466);
      if (lookahead == 'H') ADVANCE(452);
      if (lookahead == 'O') ADVANCE(471);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead == 'Y') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0) ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(166);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(229);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(255);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(190);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 29:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == '#') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == '.') ADVANCE(357);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(378);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(198);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(252);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(227);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead == 'r') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(149);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(504);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(503);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(332);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(500);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(309);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(261);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(153);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(341);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(219);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(326);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(499);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(111);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 155:
      if (lookahead == 'k') ADVANCE(497);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(505);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(108);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(248);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(191);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(353);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(199);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'u') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(354);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 209:
      if (lookahead == 'q') ADVANCE(249);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(324);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(311);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(231);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(314);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 254:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 256:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 258:
      if (lookahead == 'x') ADVANCE(232);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(316);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 271:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(283);
      END_STATE();
    case 272:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(509);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(508);
      if (lookahead != 0) ADVANCE(509);
      END_STATE();
    case 273:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '\'') ADVANCE(327);
      if (lookahead == '(') ADVANCE(334);
      if (lookahead == ')') ADVANCE(336);
      if (lookahead == ',') ADVANCE(367);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead == ':') ADVANCE(337);
      if (lookahead == ';') ADVANCE(312);
      if (lookahead == 'L') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'Y') ADVANCE(193);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'p') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(209);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 274:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(306);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0) ADVANCE(304);
      END_STATE();
    case 275:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(306);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(285);
      END_STATE();
    case 276:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == 'C') ADVANCE(466);
      if (lookahead == 'H') ADVANCE(452);
      if (lookahead == 'O') ADVANCE(471);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead == 'Y') ADVANCE(476);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 277:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(489);
      END_STATE();
    case 278:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(288);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(295);
      if (lookahead != 0) ADVANCE(296);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '@') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(489);
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
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(8);
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
          lookahead != '#') ADVANCE(304);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(324);
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
          lookahead != '.') ADVANCE(496);
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
          lookahead != '\n') ADVANCE(514);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(510);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_trailer_token1);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(324);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(331);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(489);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(489);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(489);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(284);
      if (lookahead == '\r') ADVANCE(513);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 275},
  [2] = {.lex_state = 276},
  [3] = {.lex_state = 273},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 273},
  [6] = {.lex_state = 273},
  [7] = {.lex_state = 273},
  [8] = {.lex_state = 274},
  [9] = {.lex_state = 274},
  [10] = {.lex_state = 274},
  [11] = {.lex_state = 274},
  [12] = {.lex_state = 273},
  [13] = {.lex_state = 273},
  [14] = {.lex_state = 273},
  [15] = {.lex_state = 273},
  [16] = {.lex_state = 273},
  [17] = {.lex_state = 273},
  [18] = {.lex_state = 273},
  [19] = {.lex_state = 274},
  [20] = {.lex_state = 273},
  [21] = {.lex_state = 274},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 272},
  [24] = {.lex_state = 279},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 273},
  [28] = {.lex_state = 279},
  [29] = {.lex_state = 273},
  [30] = {.lex_state = 273},
  [31] = {.lex_state = 278},
  [32] = {.lex_state = 273},
  [33] = {.lex_state = 273},
  [34] = {.lex_state = 273},
  [35] = {.lex_state = 277},
  [36] = {.lex_state = 278},
  [37] = {.lex_state = 273},
  [38] = {.lex_state = 277},
  [39] = {.lex_state = 277},
  [40] = {.lex_state = 277},
  [41] = {.lex_state = 277},
  [42] = {.lex_state = 278},
  [43] = {.lex_state = 277},
  [44] = {.lex_state = 515},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 272},
  [47] = {.lex_state = 515},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 273},
  [51] = {.lex_state = 515},
  [52] = {.lex_state = 515},
  [53] = {.lex_state = 515},
  [54] = {.lex_state = 515},
  [55] = {.lex_state = 273},
  [56] = {.lex_state = 515},
  [57] = {.lex_state = 273},
  [58] = {.lex_state = 273},
  [59] = {.lex_state = 273},
  [60] = {.lex_state = 515},
  [61] = {.lex_state = 273},
  [62] = {.lex_state = 273},
  [63] = {.lex_state = 515},
  [64] = {.lex_state = 273},
  [65] = {.lex_state = 515},
  [66] = {.lex_state = 515},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 212},
  [69] = {.lex_state = 212},
  [70] = {.lex_state = 276},
  [71] = {.lex_state = 272},
  [72] = {.lex_state = 276},
  [73] = {.lex_state = 276},
  [74] = {.lex_state = 276},
  [75] = {.lex_state = 273},
  [76] = {.lex_state = 212},
  [77] = {.lex_state = 276},
  [78] = {.lex_state = 212},
  [79] = {.lex_state = 212},
  [80] = {.lex_state = 212},
  [81] = {.lex_state = 276},
  [82] = {.lex_state = 212},
  [83] = {.lex_state = 272},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 212},
  [88] = {.lex_state = 212},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 212},
  [92] = {.lex_state = 515},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 272},
  [95] = {.lex_state = 212},
  [96] = {.lex_state = 272},
  [97] = {.lex_state = 272},
  [98] = {.lex_state = 212},
  [99] = {.lex_state = 276},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 212},
  [102] = {.lex_state = 276},
  [103] = {.lex_state = 276},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 276},
  [107] = {.lex_state = 272},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 273},
  [117] = {.lex_state = 273},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 262},
  [129] = {.lex_state = 273},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 273},
  [137] = {.lex_state = 273},
  [138] = {.lex_state = 273},
  [139] = {.lex_state = 273},
  [140] = {.lex_state = 273},
  [141] = {.lex_state = 263},
  [142] = {.lex_state = 273},
  [143] = {.lex_state = 273},
  [144] = {.lex_state = 273},
  [145] = {.lex_state = 273},
  [146] = {.lex_state = 273},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 273},
  [149] = {.lex_state = 273},
  [150] = {.lex_state = 273},
  [151] = {.lex_state = 276},
  [152] = {.lex_state = 263},
  [153] = {.lex_state = 273},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 273},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 276},
  [158] = {.lex_state = 276},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 273},
  [161] = {.lex_state = 273},
  [162] = {.lex_state = 273},
  [163] = {.lex_state = 273},
  [164] = {.lex_state = 273},
  [165] = {.lex_state = 273},
  [166] = {.lex_state = 263},
  [167] = {.lex_state = 273},
  [168] = {.lex_state = 273},
  [169] = {.lex_state = 273},
  [170] = {.lex_state = 273},
  [171] = {.lex_state = 273},
  [172] = {.lex_state = 273},
  [173] = {.lex_state = 276},
  [174] = {.lex_state = 273},
  [175] = {.lex_state = 273},
  [176] = {.lex_state = 273},
  [177] = {.lex_state = 273},
  [178] = {.lex_state = 276},
  [179] = {.lex_state = 273},
  [180] = {.lex_state = 276},
  [181] = {.lex_state = 273},
  [182] = {.lex_state = 273},
  [183] = {.lex_state = 273},
  [184] = {.lex_state = 273},
  [185] = {.lex_state = 276},
  [186] = {.lex_state = 276},
  [187] = {.lex_state = 263},
  [188] = {.lex_state = 273},
  [189] = {.lex_state = 273},
  [190] = {.lex_state = 273},
  [191] = {.lex_state = 273},
  [192] = {.lex_state = 263},
  [193] = {.lex_state = 273},
  [194] = {.lex_state = 273},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 273},
  [197] = {.lex_state = 263},
  [198] = {.lex_state = 273},
  [199] = {.lex_state = 273},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 273},
  [202] = {.lex_state = 263},
  [203] = {.lex_state = 273},
  [204] = {.lex_state = 273},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 273},
  [207] = {.lex_state = 273},
  [208] = {.lex_state = 273},
  [209] = {.lex_state = 273},
  [210] = {.lex_state = 3},
  [211] = {.lex_state = 273},
  [212] = {.lex_state = 273},
  [213] = {.lex_state = 273},
  [214] = {.lex_state = 273},
  [215] = {.lex_state = 276},
  [216] = {.lex_state = 273},
  [217] = {.lex_state = 273},
  [218] = {.lex_state = 273},
  [219] = {.lex_state = 276},
  [220] = {.lex_state = 276},
  [221] = {.lex_state = 276},
  [222] = {.lex_state = 273},
  [223] = {.lex_state = 273},
  [224] = {.lex_state = 273},
  [225] = {.lex_state = 276},
  [226] = {.lex_state = 273},
  [227] = {.lex_state = 273},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 273},
  [231] = {.lex_state = 273},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 273},
  [234] = {.lex_state = 276},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 276},
  [237] = {.lex_state = 273},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 276},
  [240] = {.lex_state = 273},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 273},
  [243] = {.lex_state = 276},
  [244] = {.lex_state = 273},
  [245] = {.lex_state = 273},
  [246] = {.lex_state = 63},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 276},
  [250] = {.lex_state = 273},
  [251] = {.lex_state = 276},
  [252] = {.lex_state = 3},
  [253] = {.lex_state = 276},
  [254] = {.lex_state = 6},
  [255] = {.lex_state = 276},
  [256] = {.lex_state = 276},
  [257] = {.lex_state = 276},
  [258] = {.lex_state = 276},
  [259] = {.lex_state = 276},
  [260] = {.lex_state = 276},
  [261] = {.lex_state = 273},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 273},
  [264] = {.lex_state = 273},
  [265] = {.lex_state = 273},
  [266] = {.lex_state = 273},
  [267] = {.lex_state = 273},
  [268] = {.lex_state = 273},
  [269] = {.lex_state = 273},
  [270] = {.lex_state = 273},
  [271] = {.lex_state = 273},
  [272] = {.lex_state = 273},
  [273] = {.lex_state = 273},
  [274] = {.lex_state = 273},
  [275] = {.lex_state = 273},
  [276] = {.lex_state = 273},
  [277] = {.lex_state = 273},
  [278] = {.lex_state = 273},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 3},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 273},
  [284] = {.lex_state = 273},
  [285] = {.lex_state = 273},
  [286] = {.lex_state = 273},
  [287] = {.lex_state = 263},
  [288] = {.lex_state = 263},
  [289] = {.lex_state = 263},
  [290] = {.lex_state = 263},
  [291] = {.lex_state = 273},
  [292] = {.lex_state = 273},
  [293] = {.lex_state = 273},
  [294] = {.lex_state = 273},
  [295] = {.lex_state = 273},
  [296] = {.lex_state = 273},
  [297] = {.lex_state = 273},
  [298] = {.lex_state = 273},
  [299] = {.lex_state = 273},
  [300] = {.lex_state = 276},
  [301] = {.lex_state = 276},
  [302] = {.lex_state = 273},
  [303] = {.lex_state = 273},
  [304] = {.lex_state = 273},
  [305] = {.lex_state = 273},
  [306] = {.lex_state = 273},
  [307] = {.lex_state = 273},
  [308] = {.lex_state = 273},
  [309] = {.lex_state = 273},
  [310] = {.lex_state = 273},
  [311] = {.lex_state = 273},
  [312] = {.lex_state = 273},
  [313] = {.lex_state = 273},
  [314] = {.lex_state = 263},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 273},
  [317] = {.lex_state = 273},
  [318] = {.lex_state = 276},
  [319] = {.lex_state = 276},
  [320] = {.lex_state = 273},
  [321] = {.lex_state = 276},
  [322] = {.lex_state = 273},
  [323] = {.lex_state = 273},
  [324] = {.lex_state = 276},
  [325] = {.lex_state = 3},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 276},
  [328] = {.lex_state = 273},
  [329] = {.lex_state = 273},
  [330] = {.lex_state = 273},
  [331] = {.lex_state = 273},
  [332] = {.lex_state = 273},
  [333] = {.lex_state = 273},
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
    [sym__word] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(219),
    [sym_subject] = STATE(99),
    [sym_comment] = STATE(99),
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
    ACTIONS(33), 1,
      sym__word,
    STATE(35), 1,
      aux_sym_comment_repeat1,
    STATE(300), 1,
      sym_header,
    STATE(301), 1,
      sym__change_header,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(103), 3,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [47] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(151), 1,
      sym_rebase_command,
    STATE(236), 1,
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
  [78] = 14,
    ACTIONS(15), 1,
      sym__newline,
    ACTIONS(17), 1,
      aux_sym_message_token1,
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
    ACTIONS(43), 1,
      anon_sym_interactive,
    ACTIONS(45), 1,
      sym__word,
    STATE(84), 1,
      aux_sym_comment_repeat1,
    STATE(259), 1,
      sym__change_header,
    STATE(260), 1,
      sym_header,
    STATE(103), 3,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [123] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(151), 1,
      sym_rebase_command,
    STATE(157), 1,
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
  [154] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(151), 1,
      sym_rebase_command,
    STATE(318), 1,
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
  [185] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(151), 1,
      sym_rebase_command,
    STATE(319), 1,
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
  [216] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(40), 2,
      sym_trailer,
      aux_sym_source_repeat2,
    STATE(321), 2,
      sym_message,
      sym_comment,
  [251] = 10,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(65), 1,
      sym__newline,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(39), 2,
      sym_trailer,
      aux_sym_source_repeat2,
    STATE(321), 2,
      sym_message,
      sym_comment,
  [286] = 10,
    ACTIONS(51), 1,
      sym__newline,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_source_token1,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(43), 2,
      sym_trailer,
      aux_sym_source_repeat2,
    STATE(321), 2,
      sym_message,
      sym_comment,
  [321] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(71), 1,
      sym__newline,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(40), 2,
      sym_trailer,
      aux_sym_source_repeat2,
    STATE(321), 2,
      sym_message,
      sym_comment,
  [356] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(73), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [378] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(75), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [400] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(77), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [422] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(79), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [444] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [466] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(83), 1,
      anon_sym_You,
    STATE(151), 1,
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
  [488] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(151), 1,
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
  [507] = 8,
    ACTIONS(87), 1,
      sym__newline,
    ACTIONS(93), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      sym__word,
    ACTIONS(98), 1,
      sym_user,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(90), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(321), 2,
      sym_message,
      sym_comment,
  [536] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(186), 1,
      sym_change,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(103), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [554] = 2,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
      sym_user,
    ACTIONS(107), 4,
      aux_sym_message_token1,
      aux_sym_message_token2,
      anon_sym_POUND,
      sym__word,
  [567] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(109), 1,
      sym__newline,
    ACTIONS(111), 1,
      sym__word,
    ACTIONS(113), 2,
      sym_user,
      sym_item,
    STATE(26), 2,
      sym__text,
      aux_sym_message_repeat1,
  [585] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(115), 1,
      aux_sym_source_token1,
    ACTIONS(117), 1,
      aux_sym_path_token1,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_path,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__newline,
  [605] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(121), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(124), 2,
      sym_user,
      sym_item,
  [623] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(127), 1,
      sym__newline,
    ACTIONS(129), 1,
      sym__word,
    ACTIONS(132), 2,
      sym_user,
      sym_item,
    STATE(25), 2,
      sym__text,
      aux_sym_message_repeat1,
  [641] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(135), 1,
      sym__newline,
    ACTIONS(137), 1,
      sym__word,
    ACTIONS(139), 2,
      sym_user,
      sym_item,
    STATE(25), 2,
      sym__text,
      aux_sym_message_repeat1,
  [659] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      sym__newline,
    STATE(251), 1,
      sym_change,
    ACTIONS(103), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [675] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(145), 2,
      sym_user,
      sym_item,
  [693] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(149), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_summary_repeat1,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [708] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(251), 1,
      sym_change,
    ACTIONS(103), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [721] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(154), 1,
      aux_sym_subject_token2,
    STATE(36), 1,
      aux_sym_subject_repeat1,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [736] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(158), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_summary_repeat2,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [751] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(160), 1,
      anon_sym_POUND,
    STATE(29), 1,
      aux_sym_summary_repeat1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [766] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(186), 1,
      sym_change,
    ACTIONS(103), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [779] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(164), 1,
      sym__word,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [794] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(168), 1,
      aux_sym_subject_token2,
    STATE(42), 1,
      aux_sym_subject_repeat1,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [809] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(172), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_summary_repeat2,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [824] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(177), 1,
      sym__word,
    STATE(38), 1,
      aux_sym_comment_repeat1,
    ACTIONS(175), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [839] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(57), 1,
      sym__word,
    STATE(41), 2,
      sym_trailer,
      aux_sym_source_repeat2,
  [856] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_source_token1,
    STATE(41), 2,
      sym_trailer,
      aux_sym_source_repeat2,
  [873] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(182), 1,
      sym__word,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(41), 2,
      sym_trailer,
      aux_sym_source_repeat2,
  [888] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(187), 1,
      aux_sym_subject_token2,
    STATE(42), 1,
      aux_sym_subject_repeat1,
    ACTIONS(185), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [903] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 1,
      aux_sym_source_token1,
    STATE(41), 2,
      sym_trailer,
      aux_sym_source_repeat2,
  [920] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    STATE(56), 1,
      aux_sym__rest,
  [936] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(198), 1,
      sym__word,
    STATE(28), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(200), 2,
      sym_user,
      sym_item,
  [950] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      sym__newline,
    ACTIONS(117), 1,
      aux_sym_path_token1,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(253), 1,
      sym_path,
  [966] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [982] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(206), 1,
      aux_sym_path_token1,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(204), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [996] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(211), 1,
      aux_sym_path_token1,
    STATE(48), 1,
      aux_sym_path_repeat1,
    ACTIONS(209), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [1010] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(324), 1,
      sym__rebase_header,
  [1026] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      aux_sym__rest,
  [1042] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    STATE(53), 1,
      aux_sym__rest,
  [1058] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [1074] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    STATE(65), 1,
      aux_sym__rest,
  [1090] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(219), 1,
      anon_sym_POUND,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1102] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [1118] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(239), 1,
      sym__rebase_header,
  [1134] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(225), 1,
      anon_sym_POUND,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1146] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1158] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    STATE(47), 1,
      aux_sym__rest,
  [1174] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(233), 1,
      anon_sym_POUND,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1186] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(237), 1,
      anon_sym_POUND,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1198] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym__newline,
    ACTIONS(244), 1,
      aux_sym__rest_token1,
    STATE(63), 1,
      aux_sym__rest,
  [1214] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(249), 1,
      anon_sym_POUND,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1226] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [1242] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(194), 1,
      sym__newline,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(63), 1,
      aux_sym__rest,
  [1258] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(170), 1,
      sym__newline,
    ACTIONS(255), 1,
      anon_sym_POUND,
    STATE(67), 1,
      aux_sym_summary_repeat2,
  [1271] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(258), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(260), 1,
      anon_sym_rebasing,
    STATE(87), 1,
      aux_sym__rebase_summary_repeat2,
  [1284] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(262), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(264), 1,
      anon_sym_rebasing,
    STATE(91), 1,
      aux_sym__rebase_summary_repeat2,
  [1297] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1306] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(117), 1,
      aux_sym_path_token1,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(185), 1,
      sym_path,
  [1319] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(231), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1328] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(266), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1337] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1346] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(268), 1,
      anon_sym_up,
    ACTIONS(270), 1,
      anon_sym_ahead,
    ACTIONS(272), 1,
      anon_sym_behind,
  [1359] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(276), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1372] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(278), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1381] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(280), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(282), 1,
      anon_sym_rebasing,
    STATE(76), 1,
      aux_sym__rebase_summary_repeat2,
  [1394] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(282), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1407] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(284), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1420] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(286), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1429] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(288), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(290), 1,
      anon_sym_rebasing,
    STATE(79), 1,
      aux_sym__rebase_summary_repeat2,
  [1442] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(209), 1,
      sym__newline,
    ACTIONS(292), 1,
      aux_sym_path_token1,
    STATE(97), 1,
      aux_sym_path_repeat1,
  [1455] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(162), 1,
      sym__newline,
    ACTIONS(294), 1,
      sym__word,
    STATE(85), 1,
      aux_sym_comment_repeat1,
  [1468] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(296), 1,
      sym__word,
    STATE(85), 1,
      aux_sym_comment_repeat1,
  [1481] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(299), 1,
      anon_sym_POUND,
    STATE(90), 1,
      aux_sym_summary_repeat1,
  [1494] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(290), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1507] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(301), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(303), 1,
      anon_sym_rebasing,
    STATE(80), 1,
      aux_sym__rebase_summary_repeat2,
  [1520] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(305), 1,
      anon_sym_POUND,
    STATE(67), 1,
      aux_sym_summary_repeat2,
  [1533] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(147), 1,
      sym__newline,
    ACTIONS(307), 1,
      anon_sym_POUND,
    STATE(90), 1,
      aux_sym_summary_repeat1,
  [1546] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(303), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1559] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(312), 1,
      aux_sym__rest_token1,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1570] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(314), 1,
      sym__newline,
    ACTIONS(316), 1,
      aux_sym__rebase_summary_token1,
    STATE(93), 1,
      aux_sym__rebase_summary_repeat2,
  [1583] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(319), 1,
      aux_sym_path_token1,
    STATE(49), 1,
      aux_sym_path_repeat1,
    STATE(129), 1,
      sym_path,
  [1596] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(324), 1,
      anon_sym_rebasing,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1609] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(117), 1,
      aux_sym_path_token1,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(253), 1,
      sym_path,
  [1622] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(204), 1,
      sym__newline,
    ACTIONS(326), 1,
      aux_sym_path_token1,
    STATE(97), 1,
      aux_sym_path_repeat1,
  [1635] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(331), 1,
      anon_sym_rebasing,
    STATE(101), 1,
      aux_sym__rebase_summary_repeat2,
  [1648] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(333), 1,
      sym__newline,
  [1661] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(335), 1,
      sym__newline,
    ACTIONS(337), 1,
      aux_sym__rebase_summary_token1,
    STATE(93), 1,
      aux_sym__rebase_summary_repeat2,
  [1674] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(264), 1,
      anon_sym_rebasing,
    ACTIONS(274), 1,
      aux_sym__rebase_summary_token1,
    STATE(95), 1,
      aux_sym__rebase_summary_repeat2,
  [1687] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(339), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1696] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1705] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(341), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1714] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1723] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1732] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(117), 1,
      aux_sym_path_token1,
    STATE(83), 1,
      aux_sym_path_repeat1,
    STATE(249), 1,
      sym_path,
  [1745] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(347), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1755] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(349), 1,
      anon_sym_POUND,
    STATE(108), 1,
      aux_sym__rebase_summary_repeat1,
  [1765] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(351), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1775] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(353), 1,
      anon_sym_POUND,
    STATE(110), 1,
      aux_sym__rebase_summary_repeat1,
  [1785] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(355), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1795] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(357), 1,
      anon_sym_POUND,
    STATE(112), 1,
      aux_sym__rebase_summary_repeat1,
  [1805] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(357), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1815] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(359), 1,
      anon_sym_POUND,
    STATE(114), 1,
      aux_sym__rebase_summary_repeat1,
  [1825] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(361), 1,
      anon_sym_to,
    ACTIONS(363), 1,
      anon_sym_not,
  [1835] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(365), 1,
      anon_sym_is,
    ACTIONS(367), 1,
      anon_sym_and,
  [1845] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(369), 1,
      anon_sym_POUND,
    STATE(89), 1,
      aux_sym_summary_repeat2,
  [1855] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(371), 1,
      anon_sym_POUND,
    STATE(86), 1,
      aux_sym_summary_repeat1,
  [1865] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(235), 1,
      sym__newline,
    ACTIONS(373), 1,
      anon_sym_POUND,
  [1875] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(231), 1,
      sym__newline,
    ACTIONS(375), 1,
      anon_sym_POUND,
  [1885] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(227), 1,
      sym__newline,
    ACTIONS(377), 1,
      anon_sym_POUND,
  [1895] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      sym__newline,
    ACTIONS(379), 1,
      anon_sym_POUND,
  [1905] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(247), 2,
      sym__newline,
      anon_sym_POUND,
  [1913] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(217), 2,
      sym__newline,
      anon_sym_POUND,
  [1921] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      anon_sym_POUND,
    STATE(33), 1,
      aux_sym_summary_repeat1,
  [1931] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      anon_sym_POUND,
    STATE(32), 1,
      aux_sym_summary_repeat2,
  [1941] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(385), 2,
      sym_commit,
      sym_branch,
  [1949] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      sym__newline,
    ACTIONS(389), 1,
      anon_sym_DASH_GT,
  [1959] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(349), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1969] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [1979] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(394), 1,
      aux_sym__rebase_summary_token1,
    STATE(100), 1,
      aux_sym__rebase_summary_repeat2,
  [1989] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(396), 1,
      anon_sym_POUND,
    STATE(134), 1,
      aux_sym__rebase_summary_repeat1,
  [1999] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(398), 1,
      anon_sym_POUND,
    STATE(131), 1,
      aux_sym__rebase_summary_repeat1,
  [2009] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(400), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym__rebase_summary_repeat1,
  [2019] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(402), 1,
      anon_sym_DOT,
  [2026] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(404), 1,
      sym_commit,
  [2033] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(406), 1,
      anon_sym_to,
  [2040] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(408), 1,
      anon_sym_remaining,
  [2047] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(410), 1,
      anon_sym_DOT,
  [2054] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(412), 1,
      sym_branch,
  [2061] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
  [2068] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(416), 1,
      anon_sym_do,
  [2075] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(418), 1,
      anon_sym_DOT,
  [2082] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(420), 1,
      anon_sym_have,
  [2089] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
  [2096] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(424), 1,
      aux_sym__rebase_header_token2,
  [2103] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
  [2110] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(428), 1,
      anon_sym_SQUOTE,
  [2117] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(430), 1,
      anon_sym_committed,
  [2124] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(432), 1,
      sym__newline,
  [2131] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(434), 1,
      sym_branch,
  [2138] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(436), 1,
      aux_sym__rebase_header_token1,
  [2145] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(438), 1,
      aux_sym__rebase_header_token2,
  [2152] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(440), 1,
      anon_sym_with,
  [2159] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(442), 1,
      anon_sym_POUND,
  [2166] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(444), 1,
      sym__newline,
  [2173] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(446), 1,
      sym__newline,
  [2180] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(448), 1,
      anon_sym_done,
  [2187] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(450), 1,
      anon_sym_remaining,
  [2194] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(452), 1,
      anon_sym_for,
  [2201] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
  [2208] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [2215] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(458), 1,
      aux_sym__rebase_header_token1,
  [2222] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(460), 1,
      anon_sym_are,
  [2229] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(462), 1,
      sym_branch,
  [2236] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [2243] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [2250] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
  [2257] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(470), 1,
      anon_sym_currently,
  [2264] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(472), 1,
      anon_sym_are,
  [2271] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(474), 1,
      anon_sym_date,
  [2278] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(476), 1,
      sym__newline,
  [2285] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(478), 1,
      anon_sym_COLON,
  [2292] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [2299] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(482), 1,
      anon_sym_currently,
  [2306] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(484), 1,
      anon_sym_are,
  [2313] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(486), 1,
      sym__newline,
  [2320] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(488), 1,
      anon_sym_branch,
  [2327] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(490), 1,
      sym__newline,
  [2334] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(492), 1,
      anon_sym_onto,
  [2341] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(494), 1,
      anon_sym_currently,
  [2348] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
  [2355] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(498), 1,
      anon_sym_branch,
  [2362] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(500), 1,
      sym__newline,
  [2369] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(502), 1,
      sym__newline,
  [2376] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(504), 1,
      sym_branch,
  [2383] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
  [2390] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(508), 1,
      anon_sym_branch,
  [2397] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [2404] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(512), 1,
      anon_sym_SQUOTE,
  [2411] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(514), 1,
      sym_branch,
  [2418] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(516), 1,
      anon_sym_SQUOTE,
  [2425] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(518), 1,
      anon_sym_branch,
  [2432] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(520), 1,
      anon_sym_on,
  [2439] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(522), 1,
      anon_sym_SQUOTE,
  [2446] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(524), 1,
      sym_branch,
  [2453] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(526), 1,
      anon_sym_SQUOTE,
  [2460] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
  [2467] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(530), 1,
      anon_sym_on,
  [2474] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(532), 1,
      anon_sym_SQUOTE,
  [2481] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(534), 1,
      sym_branch,
  [2488] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(536), 1,
      sym_commit,
  [2495] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(538), 1,
      anon_sym_SQUOTE,
  [2502] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(540), 1,
      anon_sym_on,
  [2509] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(542), 1,
      anon_sym_SQUOTE,
  [2516] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
  [2523] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(546), 1,
      sym_commit,
  [2530] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(548), 1,
      anon_sym_SQUOTE,
  [2537] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(550), 1,
      anon_sym_on,
  [2544] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(552), 1,
      anon_sym_DOT,
  [2551] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(554), 1,
      anon_sym_SQUOTE,
  [2558] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(556), 1,
      sym_commit,
  [2565] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(558), 1,
      anon_sym_SQUOTE,
  [2572] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(560), 1,
      sym__newline,
  [2579] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(562), 1,
      anon_sym_DOT,
  [2586] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(564), 1,
      anon_sym_SQUOTE,
  [2593] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(566), 1,
      sym_commit,
  [2600] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
  [2607] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(570), 1,
      sym__newline,
  [2614] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(572), 1,
      sym__newline,
  [2621] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(574), 1,
      anon_sym_SQUOTE,
  [2628] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
  [2635] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(578), 1,
      anon_sym_of,
  [2642] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(580), 1,
      sym__newline,
  [2649] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(582), 1,
      anon_sym_DOT,
  [2656] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(584), 1,
      anon_sym_to,
  [2663] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(586), 1,
      anon_sym_commit,
  [2670] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(588), 1,
      sym__newline,
  [2677] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(590), 1,
      anon_sym_COLON,
  [2684] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(592), 1,
      anon_sym_SEMI,
  [2691] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(594), 1,
      sym__newline,
  [2698] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(596), 1,
      anon_sym_DOT,
  [2705] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(598), 1,
      sym__newline,
  [2712] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(600), 1,
      anon_sym_done,
  [2719] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(602), 1,
      sym__newline,
  [2726] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(604), 1,
      anon_sym_progress,
  [2733] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(606), 1,
      aux_sym__branch_declaration_token1,
  [2740] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(608), 1,
      sym__newline,
  [2747] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [2754] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(612), 1,
      anon_sym_commands,
  [2761] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(614), 1,
      aux_sym__rebase_header_token1,
  [2768] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(616), 1,
      sym__newline,
  [2775] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(618), 1,
      anon_sym_at,
  [2782] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(620), 1,
      aux_sym__rebase_header_token1,
  [2789] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(622), 1,
      aux_sym__branch_declaration_token1,
  [2796] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(624), 1,
      aux_sym__rebase_header_token2,
  [2803] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(626), 1,
      anon_sym_SQUOTE_DOT,
  [2810] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(628), 1,
      sym__newline,
  [2817] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(630), 1,
      anon_sym_COMMA,
  [2824] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(632), 1,
      sym__newline,
  [2831] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(634), 1,
      aux_sym__rebase_header_token2,
  [2838] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(636), 1,
      sym__newline,
  [2845] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(638), 1,
      sym__word,
  [2852] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(640), 1,
      sym__newline,
  [2859] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(642), 1,
      sym__newline,
  [2866] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(644), 1,
      sym__newline,
  [2873] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(646), 1,
      sym__newline,
  [2880] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(648), 1,
      sym__newline,
  [2887] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(650), 1,
      sym__newline,
  [2894] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(652), 1,
      anon_sym_staged,
  [2901] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(654), 1,
      anon_sym_be,
  [2908] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(656), 1,
      anon_sym_DOT,
  [2915] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(658), 1,
      anon_sym_DOT,
  [2922] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(660), 1,
      anon_sym_DOT,
  [2929] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(662), 1,
      anon_sym_DOT,
  [2936] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
  [2943] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(666), 1,
      anon_sym_SQUOTE,
  [2950] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(668), 1,
      anon_sym_SQUOTE,
  [2957] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(670), 1,
      anon_sym_SQUOTE,
  [2964] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(672), 1,
      sym_commit,
  [2971] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(674), 1,
      sym_commit,
  [2978] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(676), 1,
      sym_commit,
  [2985] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(678), 1,
      sym_commit,
  [2992] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(680), 1,
      anon_sym_SQUOTE,
  [2999] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(682), 1,
      anon_sym_SQUOTE,
  [3006] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(684), 1,
      anon_sym_SQUOTE,
  [3013] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(686), 1,
      anon_sym_SQUOTE,
  [3020] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(688), 1,
      anon_sym_on,
  [3027] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(690), 1,
      anon_sym_on,
  [3034] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(692), 1,
      anon_sym_on,
  [3041] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(694), 1,
      anon_sym_on,
  [3048] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(696), 1,
      anon_sym_SQUOTE,
  [3055] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(698), 1,
      anon_sym_SQUOTE,
  [3062] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
  [3069] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(702), 1,
      anon_sym_SQUOTE,
  [3076] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(704), 1,
      sym_branch,
  [3083] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(706), 1,
      sym_branch,
  [3090] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(708), 1,
      sym_branch,
  [3097] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(710), 1,
      sym_branch,
  [3104] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(712), 1,
      anon_sym_SQUOTE,
  [3111] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(714), 1,
      anon_sym_SQUOTE,
  [3118] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(716), 1,
      anon_sym_SQUOTE,
  [3125] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(718), 1,
      anon_sym_SQUOTE,
  [3132] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(720), 1,
      anon_sym_branch,
  [3139] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(722), 1,
      anon_sym_branch,
  [3146] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(724), 1,
      anon_sym_branch,
  [3153] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(726), 1,
      anon_sym_branch,
  [3160] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(728), 1,
      anon_sym_in,
  [3167] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(730), 1,
      sym__newline,
  [3174] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(732), 1,
      sym__newline,
  [3181] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(734), 1,
      anon_sym_files,
  [3188] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(736), 1,
      anon_sym_COLON,
  [3195] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(738), 1,
      anon_sym_detached,
  [3202] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(740), 1,
      anon_sym_currently,
  [3209] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(742), 1,
      anon_sym_currently,
  [3216] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(744), 1,
      anon_sym_currently,
  [3223] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(746), 1,
      anon_sym_are,
  [3230] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(748), 1,
      anon_sym_are,
  [3237] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(750), 1,
      anon_sym_are,
  [3244] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(752), 1,
      anon_sym_branch,
  [3251] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(754), 1,
      anon_sym_branch,
  [3258] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(756), 1,
      anon_sym_by,
  [3265] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(758), 1,
      sym_branch,
  [3272] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(760), 1,
      anon_sym_POUND,
  [3279] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(762), 1,
      anon_sym_diverged,
  [3286] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(764), 1,
      anon_sym_by,
  [3293] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(766), 1,
      sym__newline,
  [3300] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(768), 1,
      sym__newline,
  [3307] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(770), 1,
      anon_sym_rebase,
  [3314] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(772), 1,
      sym__newline,
  [3321] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(774), 1,
      anon_sym_SQUOTE,
  [3328] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(776), 1,
      anon_sym_SQUOTE,
  [3335] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(778), 1,
      sym__newline,
  [3342] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(780), 1,
      aux_sym_trailer_token1,
  [3349] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(782), 1,
      anon_sym_POUND,
  [3356] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(784), 1,
      sym__newline,
  [3363] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(786), 1,
      sym_commit,
  [3370] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(788), 1,
      anon_sym_onto,
  [3377] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(790), 1,
      anon_sym_SEMI,
  [3384] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(792), 1,
      anon_sym_progress,
  [3391] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(794), 1,
      anon_sym_in,
  [3398] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(796), 1,
      anon_sym_rebase,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 251,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 321,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 378,
  [SMALL_STATE(14)] = 400,
  [SMALL_STATE(15)] = 422,
  [SMALL_STATE(16)] = 444,
  [SMALL_STATE(17)] = 466,
  [SMALL_STATE(18)] = 488,
  [SMALL_STATE(19)] = 507,
  [SMALL_STATE(20)] = 536,
  [SMALL_STATE(21)] = 554,
  [SMALL_STATE(22)] = 567,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 605,
  [SMALL_STATE(25)] = 623,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 659,
  [SMALL_STATE(28)] = 675,
  [SMALL_STATE(29)] = 693,
  [SMALL_STATE(30)] = 708,
  [SMALL_STATE(31)] = 721,
  [SMALL_STATE(32)] = 736,
  [SMALL_STATE(33)] = 751,
  [SMALL_STATE(34)] = 766,
  [SMALL_STATE(35)] = 779,
  [SMALL_STATE(36)] = 794,
  [SMALL_STATE(37)] = 809,
  [SMALL_STATE(38)] = 824,
  [SMALL_STATE(39)] = 839,
  [SMALL_STATE(40)] = 856,
  [SMALL_STATE(41)] = 873,
  [SMALL_STATE(42)] = 888,
  [SMALL_STATE(43)] = 903,
  [SMALL_STATE(44)] = 920,
  [SMALL_STATE(45)] = 936,
  [SMALL_STATE(46)] = 950,
  [SMALL_STATE(47)] = 966,
  [SMALL_STATE(48)] = 982,
  [SMALL_STATE(49)] = 996,
  [SMALL_STATE(50)] = 1010,
  [SMALL_STATE(51)] = 1026,
  [SMALL_STATE(52)] = 1042,
  [SMALL_STATE(53)] = 1058,
  [SMALL_STATE(54)] = 1074,
  [SMALL_STATE(55)] = 1090,
  [SMALL_STATE(56)] = 1102,
  [SMALL_STATE(57)] = 1118,
  [SMALL_STATE(58)] = 1134,
  [SMALL_STATE(59)] = 1146,
  [SMALL_STATE(60)] = 1158,
  [SMALL_STATE(61)] = 1174,
  [SMALL_STATE(62)] = 1186,
  [SMALL_STATE(63)] = 1198,
  [SMALL_STATE(64)] = 1214,
  [SMALL_STATE(65)] = 1226,
  [SMALL_STATE(66)] = 1242,
  [SMALL_STATE(67)] = 1258,
  [SMALL_STATE(68)] = 1271,
  [SMALL_STATE(69)] = 1284,
  [SMALL_STATE(70)] = 1297,
  [SMALL_STATE(71)] = 1306,
  [SMALL_STATE(72)] = 1319,
  [SMALL_STATE(73)] = 1328,
  [SMALL_STATE(74)] = 1337,
  [SMALL_STATE(75)] = 1346,
  [SMALL_STATE(76)] = 1359,
  [SMALL_STATE(77)] = 1372,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1394,
  [SMALL_STATE(80)] = 1407,
  [SMALL_STATE(81)] = 1420,
  [SMALL_STATE(82)] = 1429,
  [SMALL_STATE(83)] = 1442,
  [SMALL_STATE(84)] = 1455,
  [SMALL_STATE(85)] = 1468,
  [SMALL_STATE(86)] = 1481,
  [SMALL_STATE(87)] = 1494,
  [SMALL_STATE(88)] = 1507,
  [SMALL_STATE(89)] = 1520,
  [SMALL_STATE(90)] = 1533,
  [SMALL_STATE(91)] = 1546,
  [SMALL_STATE(92)] = 1559,
  [SMALL_STATE(93)] = 1570,
  [SMALL_STATE(94)] = 1583,
  [SMALL_STATE(95)] = 1596,
  [SMALL_STATE(96)] = 1609,
  [SMALL_STATE(97)] = 1622,
  [SMALL_STATE(98)] = 1635,
  [SMALL_STATE(99)] = 1648,
  [SMALL_STATE(100)] = 1661,
  [SMALL_STATE(101)] = 1674,
  [SMALL_STATE(102)] = 1687,
  [SMALL_STATE(103)] = 1696,
  [SMALL_STATE(104)] = 1705,
  [SMALL_STATE(105)] = 1714,
  [SMALL_STATE(106)] = 1723,
  [SMALL_STATE(107)] = 1732,
  [SMALL_STATE(108)] = 1745,
  [SMALL_STATE(109)] = 1755,
  [SMALL_STATE(110)] = 1765,
  [SMALL_STATE(111)] = 1775,
  [SMALL_STATE(112)] = 1785,
  [SMALL_STATE(113)] = 1795,
  [SMALL_STATE(114)] = 1805,
  [SMALL_STATE(115)] = 1815,
  [SMALL_STATE(116)] = 1825,
  [SMALL_STATE(117)] = 1835,
  [SMALL_STATE(118)] = 1845,
  [SMALL_STATE(119)] = 1855,
  [SMALL_STATE(120)] = 1865,
  [SMALL_STATE(121)] = 1875,
  [SMALL_STATE(122)] = 1885,
  [SMALL_STATE(123)] = 1895,
  [SMALL_STATE(124)] = 1905,
  [SMALL_STATE(125)] = 1913,
  [SMALL_STATE(126)] = 1921,
  [SMALL_STATE(127)] = 1931,
  [SMALL_STATE(128)] = 1941,
  [SMALL_STATE(129)] = 1949,
  [SMALL_STATE(130)] = 1959,
  [SMALL_STATE(131)] = 1969,
  [SMALL_STATE(132)] = 1979,
  [SMALL_STATE(133)] = 1989,
  [SMALL_STATE(134)] = 1999,
  [SMALL_STATE(135)] = 2009,
  [SMALL_STATE(136)] = 2019,
  [SMALL_STATE(137)] = 2026,
  [SMALL_STATE(138)] = 2033,
  [SMALL_STATE(139)] = 2040,
  [SMALL_STATE(140)] = 2047,
  [SMALL_STATE(141)] = 2054,
  [SMALL_STATE(142)] = 2061,
  [SMALL_STATE(143)] = 2068,
  [SMALL_STATE(144)] = 2075,
  [SMALL_STATE(145)] = 2082,
  [SMALL_STATE(146)] = 2089,
  [SMALL_STATE(147)] = 2096,
  [SMALL_STATE(148)] = 2103,
  [SMALL_STATE(149)] = 2110,
  [SMALL_STATE(150)] = 2117,
  [SMALL_STATE(151)] = 2124,
  [SMALL_STATE(152)] = 2131,
  [SMALL_STATE(153)] = 2138,
  [SMALL_STATE(154)] = 2145,
  [SMALL_STATE(155)] = 2152,
  [SMALL_STATE(156)] = 2159,
  [SMALL_STATE(157)] = 2166,
  [SMALL_STATE(158)] = 2173,
  [SMALL_STATE(159)] = 2180,
  [SMALL_STATE(160)] = 2187,
  [SMALL_STATE(161)] = 2194,
  [SMALL_STATE(162)] = 2201,
  [SMALL_STATE(163)] = 2208,
  [SMALL_STATE(164)] = 2215,
  [SMALL_STATE(165)] = 2222,
  [SMALL_STATE(166)] = 2229,
  [SMALL_STATE(167)] = 2236,
  [SMALL_STATE(168)] = 2243,
  [SMALL_STATE(169)] = 2250,
  [SMALL_STATE(170)] = 2257,
  [SMALL_STATE(171)] = 2264,
  [SMALL_STATE(172)] = 2271,
  [SMALL_STATE(173)] = 2278,
  [SMALL_STATE(174)] = 2285,
  [SMALL_STATE(175)] = 2292,
  [SMALL_STATE(176)] = 2299,
  [SMALL_STATE(177)] = 2306,
  [SMALL_STATE(178)] = 2313,
  [SMALL_STATE(179)] = 2320,
  [SMALL_STATE(180)] = 2327,
  [SMALL_STATE(181)] = 2334,
  [SMALL_STATE(182)] = 2341,
  [SMALL_STATE(183)] = 2348,
  [SMALL_STATE(184)] = 2355,
  [SMALL_STATE(185)] = 2362,
  [SMALL_STATE(186)] = 2369,
  [SMALL_STATE(187)] = 2376,
  [SMALL_STATE(188)] = 2383,
  [SMALL_STATE(189)] = 2390,
  [SMALL_STATE(190)] = 2397,
  [SMALL_STATE(191)] = 2404,
  [SMALL_STATE(192)] = 2411,
  [SMALL_STATE(193)] = 2418,
  [SMALL_STATE(194)] = 2425,
  [SMALL_STATE(195)] = 2432,
  [SMALL_STATE(196)] = 2439,
  [SMALL_STATE(197)] = 2446,
  [SMALL_STATE(198)] = 2453,
  [SMALL_STATE(199)] = 2460,
  [SMALL_STATE(200)] = 2467,
  [SMALL_STATE(201)] = 2474,
  [SMALL_STATE(202)] = 2481,
  [SMALL_STATE(203)] = 2488,
  [SMALL_STATE(204)] = 2495,
  [SMALL_STATE(205)] = 2502,
  [SMALL_STATE(206)] = 2509,
  [SMALL_STATE(207)] = 2516,
  [SMALL_STATE(208)] = 2523,
  [SMALL_STATE(209)] = 2530,
  [SMALL_STATE(210)] = 2537,
  [SMALL_STATE(211)] = 2544,
  [SMALL_STATE(212)] = 2551,
  [SMALL_STATE(213)] = 2558,
  [SMALL_STATE(214)] = 2565,
  [SMALL_STATE(215)] = 2572,
  [SMALL_STATE(216)] = 2579,
  [SMALL_STATE(217)] = 2586,
  [SMALL_STATE(218)] = 2593,
  [SMALL_STATE(219)] = 2600,
  [SMALL_STATE(220)] = 2607,
  [SMALL_STATE(221)] = 2614,
  [SMALL_STATE(222)] = 2621,
  [SMALL_STATE(223)] = 2628,
  [SMALL_STATE(224)] = 2635,
  [SMALL_STATE(225)] = 2642,
  [SMALL_STATE(226)] = 2649,
  [SMALL_STATE(227)] = 2656,
  [SMALL_STATE(228)] = 2663,
  [SMALL_STATE(229)] = 2670,
  [SMALL_STATE(230)] = 2677,
  [SMALL_STATE(231)] = 2684,
  [SMALL_STATE(232)] = 2691,
  [SMALL_STATE(233)] = 2698,
  [SMALL_STATE(234)] = 2705,
  [SMALL_STATE(235)] = 2712,
  [SMALL_STATE(236)] = 2719,
  [SMALL_STATE(237)] = 2726,
  [SMALL_STATE(238)] = 2733,
  [SMALL_STATE(239)] = 2740,
  [SMALL_STATE(240)] = 2747,
  [SMALL_STATE(241)] = 2754,
  [SMALL_STATE(242)] = 2761,
  [SMALL_STATE(243)] = 2768,
  [SMALL_STATE(244)] = 2775,
  [SMALL_STATE(245)] = 2782,
  [SMALL_STATE(246)] = 2789,
  [SMALL_STATE(247)] = 2796,
  [SMALL_STATE(248)] = 2803,
  [SMALL_STATE(249)] = 2810,
  [SMALL_STATE(250)] = 2817,
  [SMALL_STATE(251)] = 2824,
  [SMALL_STATE(252)] = 2831,
  [SMALL_STATE(253)] = 2838,
  [SMALL_STATE(254)] = 2845,
  [SMALL_STATE(255)] = 2852,
  [SMALL_STATE(256)] = 2859,
  [SMALL_STATE(257)] = 2866,
  [SMALL_STATE(258)] = 2873,
  [SMALL_STATE(259)] = 2880,
  [SMALL_STATE(260)] = 2887,
  [SMALL_STATE(261)] = 2894,
  [SMALL_STATE(262)] = 2901,
  [SMALL_STATE(263)] = 2908,
  [SMALL_STATE(264)] = 2915,
  [SMALL_STATE(265)] = 2922,
  [SMALL_STATE(266)] = 2929,
  [SMALL_STATE(267)] = 2936,
  [SMALL_STATE(268)] = 2943,
  [SMALL_STATE(269)] = 2950,
  [SMALL_STATE(270)] = 2957,
  [SMALL_STATE(271)] = 2964,
  [SMALL_STATE(272)] = 2971,
  [SMALL_STATE(273)] = 2978,
  [SMALL_STATE(274)] = 2985,
  [SMALL_STATE(275)] = 2992,
  [SMALL_STATE(276)] = 2999,
  [SMALL_STATE(277)] = 3006,
  [SMALL_STATE(278)] = 3013,
  [SMALL_STATE(279)] = 3020,
  [SMALL_STATE(280)] = 3027,
  [SMALL_STATE(281)] = 3034,
  [SMALL_STATE(282)] = 3041,
  [SMALL_STATE(283)] = 3048,
  [SMALL_STATE(284)] = 3055,
  [SMALL_STATE(285)] = 3062,
  [SMALL_STATE(286)] = 3069,
  [SMALL_STATE(287)] = 3076,
  [SMALL_STATE(288)] = 3083,
  [SMALL_STATE(289)] = 3090,
  [SMALL_STATE(290)] = 3097,
  [SMALL_STATE(291)] = 3104,
  [SMALL_STATE(292)] = 3111,
  [SMALL_STATE(293)] = 3118,
  [SMALL_STATE(294)] = 3125,
  [SMALL_STATE(295)] = 3132,
  [SMALL_STATE(296)] = 3139,
  [SMALL_STATE(297)] = 3146,
  [SMALL_STATE(298)] = 3153,
  [SMALL_STATE(299)] = 3160,
  [SMALL_STATE(300)] = 3167,
  [SMALL_STATE(301)] = 3174,
  [SMALL_STATE(302)] = 3181,
  [SMALL_STATE(303)] = 3188,
  [SMALL_STATE(304)] = 3195,
  [SMALL_STATE(305)] = 3202,
  [SMALL_STATE(306)] = 3209,
  [SMALL_STATE(307)] = 3216,
  [SMALL_STATE(308)] = 3223,
  [SMALL_STATE(309)] = 3230,
  [SMALL_STATE(310)] = 3237,
  [SMALL_STATE(311)] = 3244,
  [SMALL_STATE(312)] = 3251,
  [SMALL_STATE(313)] = 3258,
  [SMALL_STATE(314)] = 3265,
  [SMALL_STATE(315)] = 3272,
  [SMALL_STATE(316)] = 3279,
  [SMALL_STATE(317)] = 3286,
  [SMALL_STATE(318)] = 3293,
  [SMALL_STATE(319)] = 3300,
  [SMALL_STATE(320)] = 3307,
  [SMALL_STATE(321)] = 3314,
  [SMALL_STATE(322)] = 3321,
  [SMALL_STATE(323)] = 3328,
  [SMALL_STATE(324)] = 3335,
  [SMALL_STATE(325)] = 3342,
  [SMALL_STATE(326)] = 3349,
  [SMALL_STATE(327)] = 3356,
  [SMALL_STATE(328)] = 3363,
  [SMALL_STATE(329)] = 3370,
  [SMALL_STATE(330)] = 3377,
  [SMALL_STATE(331)] = 3384,
  [SMALL_STATE(332)] = 3391,
  [SMALL_STATE(333)] = 3398,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(24),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(24),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(25),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(25),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trailer, 3, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(71),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(38),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(325),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(92),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(92),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 7),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(96),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(85),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(30),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(93),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(95),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 8),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(18),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [568] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 8),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [758] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
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
