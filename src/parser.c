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
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym_source_token1 = 1,
  aux_sym_source_token2 = 2,
  aux_sym_subject_token1 = 3,
  aux_sym_subject_token2 = 4,
  aux_sym_message_token1 = 5,
  aux_sym_message_token2 = 6,
  anon_sym_POUND = 7,
  anon_sym_interactive = 8,
  anon_sym_rebase = 9,
  anon_sym_in = 10,
  anon_sym_progress = 11,
  anon_sym_SEMI = 12,
  anon_sym_onto = 13,
  anon_sym_POUND2 = 14,
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
  anon_sym_HEAD = 56,
  anon_sym_detached = 57,
  anon_sym_at = 58,
  anon_sym_Conflicts = 59,
  anon_sym_Untracked = 60,
  anon_sym_files = 61,
  anon_sym_newfile = 62,
  anon_sym_modified = 63,
  anon_sym_renamed = 64,
  anon_sym_deleted = 65,
  anon_sym_DASH_GT = 66,
  sym_commit = 67,
  sym__word = 68,
  sym_branch = 69,
  anon_sym_pick = 70,
  anon_sym_edit = 71,
  anon_sym_squash = 72,
  anon_sym_merge = 73,
  anon_sym_fixup = 74,
  anon_sym_drop = 75,
  anon_sym_reword = 76,
  anon_sym_exec = 77,
  anon_sym_label = 78,
  anon_sym_reset = 79,
  aux_sym_path_token1 = 80,
  sym_user = 81,
  sym_item = 82,
  aux_sym__rest_token1 = 83,
  sym_source = 84,
  sym__body_line = 85,
  sym_subject = 86,
  sym_message = 87,
  sym_comment = 88,
  sym__comment_body = 89,
  sym__rebase_summary = 90,
  sym__rebase_header = 91,
  sym_summary = 92,
  sym__change_header = 93,
  sym__branch_declaration = 94,
  sym_header = 95,
  sym_change = 96,
  sym_rebase_command = 97,
  sym_path = 98,
  aux_sym__rest = 99,
  aux_sym_source_repeat1 = 100,
  aux_sym_subject_repeat1 = 101,
  aux_sym_message_repeat1 = 102,
  aux_sym_message_repeat2 = 103,
  aux_sym__comment_body_repeat1 = 104,
  aux_sym__rebase_summary_repeat1 = 105,
  aux_sym__rebase_summary_repeat2 = 106,
  aux_sym_summary_repeat1 = 107,
  aux_sym_summary_repeat2 = 108,
  aux_sym_path_repeat1 = 109,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_source_token2] = "scissors",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [aux_sym_message_token2] = "message_token2",
  [anon_sym_POUND] = "#",
  [anon_sym_interactive] = "interactive",
  [anon_sym_rebase] = "rebase",
  [anon_sym_in] = "in",
  [anon_sym_progress] = "progress",
  [anon_sym_SEMI] = ";",
  [anon_sym_onto] = "onto",
  [anon_sym_POUND2] = "#",
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
  [sym__body_line] = "_body_line",
  [sym_subject] = "subject",
  [sym_message] = "message",
  [sym_comment] = "comment",
  [sym__comment_body] = "_comment_body",
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
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym_message_repeat2] = "message_repeat2",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym__rebase_summary_repeat1] = "_rebase_summary_repeat1",
  [aux_sym__rebase_summary_repeat2] = "_rebase_summary_repeat2",
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_summary_repeat2] = "summary_repeat2",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_source_token2] = aux_sym_source_token2,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [aux_sym_message_token2] = aux_sym_message_token2,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_rebase] = anon_sym_rebase,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_progress] = anon_sym_progress,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_onto] = anon_sym_onto,
  [anon_sym_POUND2] = anon_sym_POUND,
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
  [sym__body_line] = sym__body_line,
  [sym_subject] = sym_subject,
  [sym_message] = sym_message,
  [sym_comment] = sym_comment,
  [sym__comment_body] = sym__comment_body,
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
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym_message_repeat2] = aux_sym_message_repeat2,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
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
    .visible = false,
    .named = false,
  },
  [aux_sym_source_token2] = {
    .visible = true,
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
  [anon_sym_POUND2] = {
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
  [aux_sym_subject_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_body_repeat1] = {
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
  field_kind = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_kind] = "kind",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [6] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
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
  [3] = {
    [3] = sym_message,
  },
  [4] = {
    [2] = sym_branch,
  },
  [5] = {
    [4] = sym_message,
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 11,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 26,
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
  [52] = 45,
  [53] = 53,
  [54] = 21,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 63,
  [75] = 75,
  [76] = 41,
  [77] = 77,
  [78] = 78,
  [79] = 61,
  [80] = 75,
  [81] = 39,
  [82] = 77,
  [83] = 35,
  [84] = 28,
  [85] = 29,
  [86] = 86,
  [87] = 78,
  [88] = 88,
  [89] = 55,
  [90] = 34,
  [91] = 27,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 88,
  [96] = 96,
  [97] = 92,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 47,
  [103] = 49,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 40,
  [109] = 44,
  [110] = 110,
  [111] = 110,
  [112] = 112,
  [113] = 106,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 51,
  [118] = 104,
  [119] = 115,
  [120] = 120,
  [121] = 59,
  [122] = 105,
  [123] = 123,
  [124] = 107,
  [125] = 125,
  [126] = 116,
  [127] = 120,
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
  [238] = 230,
  [239] = 239,
  [240] = 229,
  [241] = 241,
  [242] = 202,
  [243] = 207,
  [244] = 212,
  [245] = 216,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 198,
  [251] = 203,
  [252] = 208,
  [253] = 213,
  [254] = 194,
  [255] = 199,
  [256] = 204,
  [257] = 209,
  [258] = 190,
  [259] = 195,
  [260] = 200,
  [261] = 205,
  [262] = 186,
  [263] = 191,
  [264] = 196,
  [265] = 201,
  [266] = 182,
  [267] = 187,
  [268] = 192,
  [269] = 197,
  [270] = 178,
  [271] = 183,
  [272] = 188,
  [273] = 193,
  [274] = 174,
  [275] = 179,
  [276] = 184,
  [277] = 189,
  [278] = 170,
  [279] = 175,
  [280] = 180,
  [281] = 185,
  [282] = 166,
  [283] = 171,
  [284] = 176,
  [285] = 181,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 157,
  [293] = 163,
  [294] = 169,
  [295] = 152,
  [296] = 158,
  [297] = 164,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 247,
  [302] = 246,
  [303] = 303,
  [304] = 304,
  [305] = 133,
  [306] = 142,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 153,
  [312] = 312,
  [313] = 211,
  [314] = 218,
  [315] = 223,
  [316] = 128,
  [317] = 237,
  [318] = 286,
  [319] = 300,
  [320] = 310,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\'') ADVANCE(274);
      if (lookahead == '(') ADVANCE(274);
      if (lookahead == ')') ADVANCE(274);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == 'C') ADVANCE(274);
      if (lookahead == 'H') ADVANCE(274);
      if (lookahead == 'L') ADVANCE(274);
      if (lookahead == 'N') ADVANCE(274);
      if (lookahead == 'O') ADVANCE(274);
      if (lookahead == 'U') ADVANCE(274);
      if (lookahead == 'Y') ADVANCE(274);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'b') ADVANCE(274);
      if (lookahead == 'c') ADVANCE(274);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead == 'f') ADVANCE(274);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(274);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(274);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 't') ADVANCE(274);
      if (lookahead == 'u') ADVANCE(274);
      if (lookahead == 'w') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(438);
      if (lookahead == '@') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(301);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead == 'd') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(170);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(452);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(416);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'O') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(422);
      if (lookahead == 'Y') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (lookahead != 0) ADVANCE(313);
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
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(160);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(222);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(184);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(117);
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
      if (lookahead == '.') ADVANCE(346);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(363);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(292);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(192);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(172);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(196);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(109);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(125);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(349);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(447);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(335);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(261);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(296);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(223);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 115:
      if (lookahead == 'f') ADVANCE(348);
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 116:
      if (lookahead == 'f') ADVANCE(147);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(330);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(213);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(315);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(443);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(140);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(101);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 149:
      if (lookahead == 'k') ADVANCE(441);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(250);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 155:
      if (lookahead == 'l') ADVANCE(113);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 156:
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 'x') ADVANCE(241);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(185);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 164:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 165:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(210);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(328);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(209);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 200:
      if (lookahead == 'p') ADVANCE(343);
      END_STATE();
    case 201:
      if (lookahead == 'p') ADVANCE(446);
      END_STATE();
    case 202:
      if (lookahead == 'p') ADVANCE(445);
      END_STATE();
    case 203:
      if (lookahead == 'q') ADVANCE(242);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(313);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(358);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(298);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(332);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(442);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(450);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 240:
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 241:
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 242:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 243:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 244:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 245:
      if (lookahead == 'v') ADVANCE(93);
      END_STATE();
    case 246:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 247:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 248:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 249:
      if (lookahead == 'x') ADVANCE(225);
      END_STATE();
    case 250:
      if (lookahead == 'y') ADVANCE(305);
      END_STATE();
    case 251:
      if (lookahead == 'y') ADVANCE(230);
      END_STATE();
    case 252:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 253:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(440);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 261:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(273);
      END_STATE();
    case 262:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(453);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(452);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 263:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(293);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0) ADVANCE(274);
      END_STATE();
    case 264:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == 'C') ADVANCE(416);
      if (lookahead == 'H') ADVANCE(402);
      if (lookahead == 'O') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(422);
      if (lookahead == 'Y') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 265:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      if (lookahead != 0) ADVANCE(439);
      END_STATE();
    case 266:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(302);
      if (lookahead == '\'') ADVANCE(316);
      if (lookahead == '(') ADVANCE(323);
      if (lookahead == ')') ADVANCE(325);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == ':') ADVANCE(326);
      if (lookahead == ';') ADVANCE(299);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(187);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(133);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(142);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 267:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(294);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead != 0) ADVANCE(292);
      END_STATE();
    case 268:
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(276);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_source_token2);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(440);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(313);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '@') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(292);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_POUND2);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(313);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(439);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(454);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'o') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(439);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(457);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(269);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == '\r') ADVANCE(456);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(290);
      if (lookahead != 0) ADVANCE(457);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 263},
  [2] = {.lex_state = 264},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 266},
  [5] = {.lex_state = 266},
  [6] = {.lex_state = 266},
  [7] = {.lex_state = 266},
  [8] = {.lex_state = 266},
  [9] = {.lex_state = 266},
  [10] = {.lex_state = 266},
  [11] = {.lex_state = 266},
  [12] = {.lex_state = 266},
  [13] = {.lex_state = 266},
  [14] = {.lex_state = 267},
  [15] = {.lex_state = 267},
  [16] = {.lex_state = 266},
  [17] = {.lex_state = 267},
  [18] = {.lex_state = 267},
  [19] = {.lex_state = 267},
  [20] = {.lex_state = 266},
  [21] = {.lex_state = 262},
  [22] = {.lex_state = 267},
  [23] = {.lex_state = 266},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 266},
  [27] = {.lex_state = 265},
  [28] = {.lex_state = 266},
  [29] = {.lex_state = 266},
  [30] = {.lex_state = 268},
  [31] = {.lex_state = 266},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 265},
  [35] = {.lex_state = 266},
  [36] = {.lex_state = 268},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 268},
  [39] = {.lex_state = 266},
  [40] = {.lex_state = 266},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 458},
  [43] = {.lex_state = 458},
  [44] = {.lex_state = 266},
  [45] = {.lex_state = 266},
  [46] = {.lex_state = 458},
  [47] = {.lex_state = 266},
  [48] = {.lex_state = 458},
  [49] = {.lex_state = 266},
  [50] = {.lex_state = 458},
  [51] = {.lex_state = 266},
  [52] = {.lex_state = 266},
  [53] = {.lex_state = 458},
  [54] = {.lex_state = 262},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 458},
  [57] = {.lex_state = 458},
  [58] = {.lex_state = 458},
  [59] = {.lex_state = 266},
  [60] = {.lex_state = 264},
  [61] = {.lex_state = 206},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 262},
  [64] = {.lex_state = 264},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 458},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 264},
  [69] = {.lex_state = 206},
  [70] = {.lex_state = 264},
  [71] = {.lex_state = 264},
  [72] = {.lex_state = 266},
  [73] = {.lex_state = 264},
  [74] = {.lex_state = 262},
  [75] = {.lex_state = 206},
  [76] = {.lex_state = 262},
  [77] = {.lex_state = 206},
  [78] = {.lex_state = 206},
  [79] = {.lex_state = 206},
  [80] = {.lex_state = 206},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 206},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 262},
  [87] = {.lex_state = 206},
  [88] = {.lex_state = 206},
  [89] = {.lex_state = 262},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 206},
  [93] = {.lex_state = 264},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 206},
  [96] = {.lex_state = 264},
  [97] = {.lex_state = 206},
  [98] = {.lex_state = 264},
  [99] = {.lex_state = 264},
  [100] = {.lex_state = 262},
  [101] = {.lex_state = 264},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 266},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 266},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 3},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 266},
  [129] = {.lex_state = 266},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 266},
  [132] = {.lex_state = 264},
  [133] = {.lex_state = 264},
  [134] = {.lex_state = 264},
  [135] = {.lex_state = 266},
  [136] = {.lex_state = 266},
  [137] = {.lex_state = 266},
  [138] = {.lex_state = 266},
  [139] = {.lex_state = 266},
  [140] = {.lex_state = 266},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 264},
  [143] = {.lex_state = 266},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 266},
  [146] = {.lex_state = 266},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 266},
  [149] = {.lex_state = 266},
  [150] = {.lex_state = 266},
  [151] = {.lex_state = 266},
  [152] = {.lex_state = 266},
  [153] = {.lex_state = 264},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 266},
  [156] = {.lex_state = 266},
  [157] = {.lex_state = 266},
  [158] = {.lex_state = 266},
  [159] = {.lex_state = 266},
  [160] = {.lex_state = 264},
  [161] = {.lex_state = 266},
  [162] = {.lex_state = 266},
  [163] = {.lex_state = 266},
  [164] = {.lex_state = 266},
  [165] = {.lex_state = 264},
  [166] = {.lex_state = 266},
  [167] = {.lex_state = 266},
  [168] = {.lex_state = 266},
  [169] = {.lex_state = 266},
  [170] = {.lex_state = 266},
  [171] = {.lex_state = 266},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 264},
  [174] = {.lex_state = 253},
  [175] = {.lex_state = 266},
  [176] = {.lex_state = 266},
  [177] = {.lex_state = 266},
  [178] = {.lex_state = 266},
  [179] = {.lex_state = 253},
  [180] = {.lex_state = 266},
  [181] = {.lex_state = 266},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 266},
  [184] = {.lex_state = 253},
  [185] = {.lex_state = 266},
  [186] = {.lex_state = 266},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 266},
  [189] = {.lex_state = 253},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 266},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 266},
  [194] = {.lex_state = 266},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 266},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 266},
  [199] = {.lex_state = 266},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 266},
  [202] = {.lex_state = 264},
  [203] = {.lex_state = 266},
  [204] = {.lex_state = 266},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 264},
  [207] = {.lex_state = 264},
  [208] = {.lex_state = 266},
  [209] = {.lex_state = 266},
  [210] = {.lex_state = 253},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 264},
  [213] = {.lex_state = 266},
  [214] = {.lex_state = 266},
  [215] = {.lex_state = 266},
  [216] = {.lex_state = 264},
  [217] = {.lex_state = 266},
  [218] = {.lex_state = 264},
  [219] = {.lex_state = 266},
  [220] = {.lex_state = 253},
  [221] = {.lex_state = 266},
  [222] = {.lex_state = 264},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 253},
  [225] = {.lex_state = 266},
  [226] = {.lex_state = 266},
  [227] = {.lex_state = 266},
  [228] = {.lex_state = 264},
  [229] = {.lex_state = 264},
  [230] = {.lex_state = 264},
  [231] = {.lex_state = 266},
  [232] = {.lex_state = 266},
  [233] = {.lex_state = 266},
  [234] = {.lex_state = 266},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 266},
  [237] = {.lex_state = 266},
  [238] = {.lex_state = 264},
  [239] = {.lex_state = 264},
  [240] = {.lex_state = 264},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 264},
  [243] = {.lex_state = 264},
  [244] = {.lex_state = 264},
  [245] = {.lex_state = 264},
  [246] = {.lex_state = 264},
  [247] = {.lex_state = 264},
  [248] = {.lex_state = 266},
  [249] = {.lex_state = 57},
  [250] = {.lex_state = 266},
  [251] = {.lex_state = 266},
  [252] = {.lex_state = 266},
  [253] = {.lex_state = 266},
  [254] = {.lex_state = 266},
  [255] = {.lex_state = 266},
  [256] = {.lex_state = 266},
  [257] = {.lex_state = 266},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 266},
  [263] = {.lex_state = 266},
  [264] = {.lex_state = 266},
  [265] = {.lex_state = 266},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 266},
  [271] = {.lex_state = 266},
  [272] = {.lex_state = 266},
  [273] = {.lex_state = 266},
  [274] = {.lex_state = 253},
  [275] = {.lex_state = 253},
  [276] = {.lex_state = 253},
  [277] = {.lex_state = 253},
  [278] = {.lex_state = 266},
  [279] = {.lex_state = 266},
  [280] = {.lex_state = 266},
  [281] = {.lex_state = 266},
  [282] = {.lex_state = 266},
  [283] = {.lex_state = 266},
  [284] = {.lex_state = 266},
  [285] = {.lex_state = 266},
  [286] = {.lex_state = 266},
  [287] = {.lex_state = 266},
  [288] = {.lex_state = 264},
  [289] = {.lex_state = 266},
  [290] = {.lex_state = 266},
  [291] = {.lex_state = 6},
  [292] = {.lex_state = 266},
  [293] = {.lex_state = 266},
  [294] = {.lex_state = 266},
  [295] = {.lex_state = 266},
  [296] = {.lex_state = 266},
  [297] = {.lex_state = 266},
  [298] = {.lex_state = 266},
  [299] = {.lex_state = 57},
  [300] = {.lex_state = 266},
  [301] = {.lex_state = 264},
  [302] = {.lex_state = 264},
  [303] = {.lex_state = 266},
  [304] = {.lex_state = 266},
  [305] = {.lex_state = 264},
  [306] = {.lex_state = 264},
  [307] = {.lex_state = 266},
  [308] = {.lex_state = 266},
  [309] = {.lex_state = 266},
  [310] = {.lex_state = 266},
  [311] = {.lex_state = 264},
  [312] = {.lex_state = 264},
  [313] = {.lex_state = 3},
  [314] = {.lex_state = 264},
  [315] = {.lex_state = 3},
  [316] = {.lex_state = 266},
  [317] = {.lex_state = 266},
  [318] = {.lex_state = 266},
  [319] = {.lex_state = 266},
  [320] = {.lex_state = 266},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_source_token2] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_message_token1] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_interactive] = ACTIONS(1),
    [anon_sym_rebase] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_progress] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_onto] = ACTIONS(1),
    [anon_sym_POUND2] = ACTIONS(1),
    [anon_sym_You] = ACTIONS(1),
    [anon_sym_are] = ACTIONS(1),
    [anon_sym_currently] = ACTIONS(1),
    [anon_sym_rebasing] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_Last] = ACTIONS(1),
    [aux_sym__rebase_header_token1] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__rebase_header_token2] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Next] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_remaining] = ACTIONS(1),
    [anon_sym_No] = ACTIONS(1),
    [anon_sym_commands] = ACTIONS(1),
    [anon_sym_Changes] = ACTIONS(1),
    [anon_sym_be] = ACTIONS(1),
    [anon_sym_committed] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_staged] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_commit] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_Your] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_ahead] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_behind] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [aux_sym__branch_declaration_token1] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_detached] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_Conflicts] = ACTIONS(1),
    [anon_sym_Untracked] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_modified] = ACTIONS(1),
    [anon_sym_renamed] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_pick] = ACTIONS(1),
    [anon_sym_edit] = ACTIONS(1),
    [anon_sym_squash] = ACTIONS(1),
    [anon_sym_merge] = ACTIONS(1),
    [anon_sym_fixup] = ACTIONS(1),
    [anon_sym_drop] = ACTIONS(1),
    [anon_sym_reword] = ACTIONS(1),
    [anon_sym_exec] = ACTIONS(1),
    [anon_sym_label] = ACTIONS(1),
    [anon_sym_reset] = ACTIONS(1),
    [aux_sym_path_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(206),
    [sym_subject] = STATE(71),
    [sym_comment] = STATE(71),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_source_token2] = ACTIONS(9),
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
    STATE(27), 1,
      aux_sym__comment_body_repeat1,
    STATE(301), 1,
      sym_header,
    STATE(302), 1,
      sym__change_header,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
    STATE(99), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [48] = 14,
    ACTIONS(15), 1,
      aux_sym_source_token1,
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
    ACTIONS(35), 1,
      anon_sym_interactive,
    ACTIONS(37), 1,
      sym__word,
    STATE(91), 1,
      aux_sym__comment_body_repeat1,
    STATE(246), 1,
      sym__change_header,
    STATE(247), 1,
      sym_header,
    STATE(99), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [94] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(134), 1,
      sym_rebase_command,
    STATE(305), 1,
      sym__rebase_header,
    ACTIONS(45), 10,
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
  [125] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(134), 1,
      sym_rebase_command,
    STATE(306), 1,
      sym__rebase_header,
    ACTIONS(45), 10,
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
  [156] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(133), 1,
      sym__rebase_header,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [187] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(134), 1,
      sym_rebase_command,
    STATE(142), 1,
      sym__rebase_header,
    ACTIONS(45), 10,
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
  [218] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [240] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(49), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [262] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(51), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [284] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [306] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [328] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_You,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [350] = 10,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      aux_sym_source_token2,
    ACTIONS(65), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      aux_sym_message_token2,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_user,
    STATE(62), 1,
      aux_sym_message_repeat1,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(312), 2,
      sym_message,
      sym_comment,
  [383] = 10,
    ACTIONS(65), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      aux_sym_message_token2,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_user,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_source_token1,
    ACTIONS(77), 1,
      aux_sym_source_token2,
    STATE(62), 1,
      aux_sym_message_repeat1,
    STATE(17), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(312), 2,
      sym_message,
      sym_comment,
  [416] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(134), 1,
      sym_rebase_command,
    ACTIONS(45), 10,
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
  [435] = 10,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    ACTIONS(65), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      aux_sym_message_token2,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_user,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_source_token2,
    STATE(62), 1,
      aux_sym_message_repeat1,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(312), 2,
      sym_message,
      sym_comment,
  [468] = 10,
    ACTIONS(65), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      aux_sym_message_token2,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_user,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_source_token2,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    STATE(62), 1,
      aux_sym_message_repeat1,
    STATE(14), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(312), 2,
      sym_message,
      sym_comment,
  [501] = 9,
    ACTIONS(87), 1,
      aux_sym_source_token1,
    ACTIONS(90), 1,
      aux_sym_message_token1,
    ACTIONS(93), 1,
      aux_sym_message_token2,
    ACTIONS(96), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      sym_user,
    STATE(62), 1,
      aux_sym_message_repeat1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      aux_sym_source_token2,
    STATE(19), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(312), 2,
      sym_message,
      sym_comment,
  [532] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(230), 1,
      sym_change,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [550] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(106), 1,
      aux_sym_source_token2,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(229), 1,
      sym_path,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [570] = 2,
    ACTIONS(112), 3,
      aux_sym_message_token1,
      aux_sym_message_token2,
      anon_sym_POUND,
    ACTIONS(110), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
      sym_user,
  [582] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    STATE(238), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [598] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(114), 1,
      aux_sym_source_token1,
    ACTIONS(116), 1,
      sym__word,
    STATE(25), 1,
      aux_sym_message_repeat2,
    ACTIONS(118), 2,
      sym_user,
      sym_item,
  [615] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(120), 1,
      aux_sym_source_token1,
    ACTIONS(122), 1,
      sym__word,
    STATE(25), 1,
      aux_sym_message_repeat2,
    ACTIONS(125), 2,
      sym_user,
      sym_item,
  [632] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(230), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [645] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(130), 1,
      sym__word,
    STATE(34), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [660] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(134), 1,
      anon_sym_POUND2,
    STATE(39), 1,
      aux_sym_summary_repeat2,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [675] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(136), 1,
      anon_sym_POUND2,
    STATE(35), 1,
      aux_sym_summary_repeat1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [690] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(140), 1,
      aux_sym_subject_token2,
    STATE(38), 1,
      aux_sym_subject_repeat1,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [705] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(238), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [718] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(116), 1,
      sym__word,
    ACTIONS(142), 1,
      aux_sym_source_token1,
    STATE(25), 1,
      aux_sym_message_repeat2,
    ACTIONS(118), 2,
      sym_user,
      sym_item,
  [735] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(114), 1,
      aux_sym_source_token1,
    ACTIONS(144), 1,
      sym__word,
    STATE(32), 1,
      aux_sym_message_repeat2,
    ACTIONS(146), 2,
      sym_user,
      sym_item,
  [752] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(150), 1,
      sym__word,
    STATE(34), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [767] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(155), 1,
      anon_sym_POUND2,
    STATE(35), 1,
      aux_sym_summary_repeat1,
    ACTIONS(153), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [782] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(160), 1,
      aux_sym_subject_token2,
    STATE(36), 1,
      aux_sym_subject_repeat1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [797] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(163), 1,
      aux_sym_source_token1,
    ACTIONS(165), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_message_repeat2,
    ACTIONS(167), 2,
      sym_user,
      sym_item,
  [814] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(171), 1,
      aux_sym_subject_token2,
    STATE(36), 1,
      aux_sym_subject_repeat1,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [829] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      anon_sym_POUND2,
    STATE(39), 1,
      aux_sym_summary_repeat2,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [844] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      anon_sym_POUND2,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [856] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(184), 1,
      aux_sym_path_token1,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(182), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [870] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    STATE(46), 1,
      aux_sym__rest,
  [886] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym__rest,
  [902] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(196), 1,
      anon_sym_POUND2,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [914] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(153), 1,
      sym__rebase_header,
  [930] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      aux_sym_source_token1,
    ACTIONS(203), 1,
      aux_sym__rest_token1,
    STATE(46), 1,
      aux_sym__rest,
  [946] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(208), 1,
      anon_sym_POUND2,
    ACTIONS(206), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [958] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    STATE(58), 1,
      aux_sym__rest,
  [974] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(212), 1,
      anon_sym_POUND2,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [986] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym__rest,
  [1002] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(218), 1,
      anon_sym_POUND2,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1014] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(311), 1,
      sym__rebase_header,
  [1030] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    STATE(50), 1,
      aux_sym__rest,
  [1046] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(240), 1,
      sym_path,
  [1062] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(222), 1,
      aux_sym_path_token1,
    STATE(55), 1,
      aux_sym_path_repeat1,
    ACTIONS(220), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [1076] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym__rest,
  [1092] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    STATE(42), 1,
      aux_sym__rest,
  [1108] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      aux_sym_source_token1,
    ACTIONS(190), 1,
      aux_sym__rest_token1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym__rest,
  [1124] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(231), 1,
      anon_sym_POUND2,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1136] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1145] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(233), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(235), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1158] = 4,
    ACTIONS(237), 1,
      aux_sym_message_token1,
    ACTIONS(239), 1,
      aux_sym_message_token2,
    ACTIONS(241), 1,
      sym_user,
    STATE(94), 1,
      aux_sym_message_repeat1,
  [1171] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(229), 1,
      sym_path,
  [1184] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1193] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(245), 1,
      aux_sym_source_token1,
    ACTIONS(247), 1,
      aux_sym__rebase_summary_token1,
    STATE(67), 1,
      aux_sym__rebase_summary_repeat2,
  [1206] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(251), 1,
      aux_sym__rest_token1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1217] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(253), 1,
      aux_sym_source_token1,
    ACTIONS(255), 1,
      aux_sym__rebase_summary_token1,
    STATE(67), 1,
      aux_sym__rebase_summary_repeat2,
  [1230] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1239] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(260), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(263), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1252] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1261] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_source_token2,
    ACTIONS(267), 1,
      aux_sym_source_token1,
  [1274] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      anon_sym_up,
    ACTIONS(271), 1,
      anon_sym_ahead,
    ACTIONS(273), 1,
      anon_sym_behind,
  [1287] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1296] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(240), 1,
      sym_path,
  [1309] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(279), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1322] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(182), 1,
      aux_sym_source_token1,
    ACTIONS(281), 1,
      aux_sym_path_token1,
    STATE(89), 1,
      aux_sym_path_repeat1,
  [1335] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(279), 1,
      anon_sym_rebasing,
    ACTIONS(283), 1,
      aux_sym__rebase_summary_token1,
    STATE(78), 1,
      aux_sym__rebase_summary_repeat2,
  [1348] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(285), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1361] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(287), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(289), 1,
      anon_sym_rebasing,
    STATE(80), 1,
      aux_sym__rebase_summary_repeat2,
  [1374] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1387] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(173), 1,
      aux_sym_source_token1,
    ACTIONS(293), 1,
      anon_sym_POUND2,
    STATE(81), 1,
      aux_sym_summary_repeat2,
  [1400] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    ACTIONS(296), 1,
      aux_sym__rebase_summary_token1,
    STATE(87), 1,
      aux_sym__rebase_summary_repeat2,
  [1413] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(298), 1,
      anon_sym_POUND2,
    STATE(83), 1,
      aux_sym_summary_repeat1,
  [1426] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(132), 1,
      aux_sym_source_token1,
    ACTIONS(301), 1,
      anon_sym_POUND2,
    STATE(81), 1,
      aux_sym_summary_repeat2,
  [1439] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(132), 1,
      aux_sym_source_token1,
    ACTIONS(303), 1,
      anon_sym_POUND2,
    STATE(83), 1,
      aux_sym_summary_repeat1,
  [1452] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      aux_sym_path_token1,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(114), 1,
      sym_path,
  [1465] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1478] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    ACTIONS(309), 1,
      aux_sym__rebase_summary_token1,
    STATE(92), 1,
      aux_sym__rebase_summary_repeat2,
  [1491] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(220), 1,
      aux_sym_source_token1,
    ACTIONS(311), 1,
      aux_sym_path_token1,
    STATE(89), 1,
      aux_sym_path_repeat1,
  [1504] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(148), 1,
      aux_sym_source_token1,
    ACTIONS(314), 1,
      sym__word,
    STATE(90), 1,
      aux_sym__comment_body_repeat1,
  [1517] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(317), 1,
      sym__word,
    STATE(90), 1,
      aux_sym__comment_body_repeat1,
  [1530] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(319), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1543] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(321), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1552] = 4,
    ACTIONS(323), 1,
      aux_sym_message_token1,
    ACTIONS(326), 1,
      aux_sym_message_token2,
    ACTIONS(328), 1,
      sym_user,
    STATE(94), 1,
      aux_sym_message_repeat1,
  [1565] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(285), 1,
      anon_sym_rebasing,
    ACTIONS(330), 1,
      aux_sym__rebase_summary_token1,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat2,
  [1578] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(332), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1587] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(334), 1,
      anon_sym_rebasing,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1600] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(210), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1609] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(336), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1618] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(108), 1,
      aux_sym_path_token1,
    STATE(76), 1,
      aux_sym_path_repeat1,
    STATE(173), 1,
      sym_path,
  [1631] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1640] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(206), 1,
      aux_sym_source_token1,
    ACTIONS(338), 1,
      anon_sym_POUND2,
  [1650] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(210), 1,
      aux_sym_source_token1,
    ACTIONS(340), 1,
      anon_sym_POUND2,
  [1660] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(342), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1670] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(344), 1,
      anon_sym_POUND2,
    STATE(29), 1,
      aux_sym_summary_repeat1,
  [1680] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(342), 1,
      anon_sym_POUND2,
    STATE(110), 1,
      aux_sym__rebase_summary_repeat1,
  [1690] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(346), 1,
      anon_sym_POUND2,
    STATE(28), 1,
      aux_sym_summary_repeat2,
  [1700] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(178), 2,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [1708] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(194), 2,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [1716] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(348), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1726] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1736] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(352), 1,
      anon_sym_to,
    ACTIONS(354), 1,
      anon_sym_not,
  [1746] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(356), 1,
      anon_sym_POUND2,
    STATE(111), 1,
      aux_sym__rebase_summary_repeat1,
  [1756] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(358), 1,
      aux_sym_source_token1,
    ACTIONS(360), 1,
      anon_sym_DASH_GT,
  [1766] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(362), 1,
      anon_sym_POUND2,
    STATE(104), 1,
      aux_sym__rebase_summary_repeat1,
  [1776] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(364), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1786] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(216), 1,
      aux_sym_source_token1,
    ACTIONS(366), 1,
      anon_sym_POUND2,
  [1796] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(356), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1806] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      anon_sym_POUND2,
    STATE(118), 1,
      aux_sym__rebase_summary_repeat1,
  [1816] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(370), 1,
      anon_sym_POUND2,
    STATE(116), 1,
      aux_sym__rebase_summary_repeat1,
  [1826] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(229), 1,
      aux_sym_source_token1,
    ACTIONS(372), 1,
      anon_sym_POUND2,
  [1836] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(374), 1,
      anon_sym_POUND2,
    STATE(85), 1,
      aux_sym_summary_repeat1,
  [1846] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(376), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1856] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(379), 1,
      anon_sym_POUND2,
    STATE(84), 1,
      aux_sym_summary_repeat2,
  [1866] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      aux_sym__rebase_summary_token1,
    STATE(65), 1,
      aux_sym__rebase_summary_repeat2,
  [1876] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1886] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(385), 1,
      anon_sym_POUND2,
    STATE(126), 1,
      aux_sym__rebase_summary_repeat1,
  [1896] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      anon_sym_onto,
  [1903] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
  [1910] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      aux_sym__rebase_header_token2,
  [1917] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
  [1924] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      aux_sym_source_token1,
  [1931] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      aux_sym_source_token1,
  [1938] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      aux_sym_source_token1,
  [1945] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_by,
  [1952] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_do,
  [1959] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      aux_sym__rebase_header_token1,
  [1966] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      aux_sym__rebase_header_token2,
  [1973] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
  [1980] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      anon_sym_DOT,
  [1987] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      anon_sym_POUND2,
  [1994] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      aux_sym_source_token1,
  [2001] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_remaining,
  [2008] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      anon_sym_done,
  [2015] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      anon_sym_remaining,
  [2022] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      anon_sym_to,
  [2029] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      anon_sym_done,
  [2036] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      anon_sym_DOT,
  [2043] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      aux_sym__branch_declaration_token1,
  [2050] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [2057] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      aux_sym__rebase_header_token1,
  [2064] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      anon_sym_are,
  [2071] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      aux_sym_source_token1,
  [2078] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      anon_sym_commands,
  [2085] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [2092] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [2099] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      anon_sym_currently,
  [2106] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_are,
  [2113] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      aux_sym__rebase_header_token1,
  [2120] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      aux_sym_source_token1,
  [2127] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      anon_sym_COLON,
  [2134] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      aux_sym__rebase_header_token1,
  [2141] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      anon_sym_currently,
  [2148] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_are,
  [2155] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      aux_sym_source_token1,
  [2162] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      anon_sym_branch,
  [2169] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      aux_sym__branch_declaration_token1,
  [2176] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      aux_sym__rebase_header_token2,
  [2183] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      anon_sym_currently,
  [2190] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
  [2197] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      anon_sym_branch,
  [2204] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      anon_sym_SQUOTE_DOT,
  [2211] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      aux_sym_source_token1,
  [2218] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      sym_branch,
  [2225] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
  [2232] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      anon_sym_branch,
  [2239] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      aux_sym__rebase_header_token2,
  [2246] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
  [2253] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      sym_branch,
  [2260] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
  [2267] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_branch,
  [2274] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      anon_sym_on,
  [2281] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
  [2288] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      sym_branch,
  [2295] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_SQUOTE,
  [2302] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
  [2309] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      anon_sym_on,
  [2316] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
  [2323] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      sym_branch,
  [2330] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      sym_commit,
  [2337] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
  [2344] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      anon_sym_on,
  [2351] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
  [2358] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
  [2365] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      sym_commit,
  [2372] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
  [2379] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      anon_sym_on,
  [2386] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      anon_sym_DOT,
  [2393] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
  [2400] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      sym_commit,
  [2407] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
  [2414] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      aux_sym_source_token1,
  [2421] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      anon_sym_DOT,
  [2428] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
  [2435] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      sym_commit,
  [2442] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      ts_builtin_sym_end,
  [2449] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      aux_sym_source_token1,
  [2456] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      anon_sym_DOT,
  [2463] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
  [2470] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      sym_branch,
  [2477] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(553), 1,
      anon_sym_POUND2,
  [2484] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(555), 1,
      aux_sym_source_token1,
  [2491] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(557), 1,
      anon_sym_DOT,
  [2498] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(559), 1,
      anon_sym_by,
  [2505] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(561), 1,
      anon_sym_SQUOTE,
  [2512] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(563), 1,
      aux_sym_source_token1,
  [2519] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
  [2526] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(567), 1,
      aux_sym_source_token1,
  [2533] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(569), 1,
      anon_sym_SQUOTE,
  [2540] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(571), 1,
      sym_branch,
  [2547] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(573), 1,
      anon_sym_with,
  [2554] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(575), 1,
      aux_sym_source_token1,
  [2561] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(577), 1,
      sym_commit,
  [2568] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(579), 1,
      sym_branch,
  [2575] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(581), 1,
      anon_sym_DOT,
  [2582] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(583), 1,
      anon_sym_date,
  [2589] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(585), 1,
      anon_sym_COLON,
  [2596] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(587), 1,
      aux_sym_source_token1,
  [2603] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(589), 1,
      aux_sym_source_token1,
  [2610] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(591), 1,
      aux_sym_source_token1,
  [2617] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(593), 1,
      anon_sym_COLON,
  [2624] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(595), 1,
      anon_sym_SQUOTE,
  [2631] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(597), 1,
      anon_sym_of,
  [2638] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(599), 1,
      anon_sym_to,
  [2645] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(601), 1,
      anon_sym_commit,
  [2652] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(603), 1,
      anon_sym_COLON,
  [2659] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(605), 1,
      anon_sym_SEMI,
  [2666] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(607), 1,
      aux_sym_source_token1,
  [2673] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(609), 1,
      aux_sym_source_token1,
  [2680] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(611), 1,
      aux_sym_source_token1,
  [2687] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(613), 1,
      sym_commit,
  [2694] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(615), 1,
      aux_sym_source_token1,
  [2701] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(617), 1,
      aux_sym_source_token1,
  [2708] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(619), 1,
      aux_sym_source_token1,
  [2715] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(621), 1,
      aux_sym_source_token1,
  [2722] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(623), 1,
      aux_sym_source_token1,
  [2729] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(625), 1,
      aux_sym_source_token1,
  [2736] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(627), 1,
      anon_sym_for,
  [2743] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(629), 1,
      anon_sym_committed,
  [2750] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(631), 1,
      anon_sym_DOT,
  [2757] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(633), 1,
      anon_sym_DOT,
  [2764] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(635), 1,
      anon_sym_DOT,
  [2771] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(637), 1,
      anon_sym_DOT,
  [2778] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(639), 1,
      anon_sym_SQUOTE,
  [2785] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(641), 1,
      anon_sym_SQUOTE,
  [2792] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
  [2799] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(645), 1,
      anon_sym_SQUOTE,
  [2806] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(647), 1,
      sym_commit,
  [2813] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(649), 1,
      sym_commit,
  [2820] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(651), 1,
      sym_commit,
  [2827] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(653), 1,
      sym_commit,
  [2834] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
  [2841] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
  [2848] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [2855] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
  [2862] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(663), 1,
      anon_sym_on,
  [2869] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(665), 1,
      anon_sym_on,
  [2876] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(667), 1,
      anon_sym_on,
  [2883] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(669), 1,
      anon_sym_on,
  [2890] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
  [2897] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
  [2904] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
  [2911] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
  [2918] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(679), 1,
      sym_branch,
  [2925] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(681), 1,
      sym_branch,
  [2932] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(683), 1,
      sym_branch,
  [2939] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(685), 1,
      sym_branch,
  [2946] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
  [2953] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(689), 1,
      anon_sym_SQUOTE,
  [2960] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
  [2967] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
  [2974] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(695), 1,
      anon_sym_branch,
  [2981] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(697), 1,
      anon_sym_branch,
  [2988] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(699), 1,
      anon_sym_branch,
  [2995] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(701), 1,
      anon_sym_branch,
  [3002] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(703), 1,
      anon_sym_progress,
  [3009] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(705), 1,
      anon_sym_COLON,
  [3016] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(707), 1,
      aux_sym_source_token1,
  [3023] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(709), 1,
      anon_sym_at,
  [3030] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(711), 1,
      anon_sym_is,
  [3037] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(713), 1,
      sym__word,
  [3044] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(715), 1,
      anon_sym_currently,
  [3051] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(717), 1,
      anon_sym_currently,
  [3058] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(719), 1,
      anon_sym_currently,
  [3065] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(721), 1,
      anon_sym_are,
  [3072] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(723), 1,
      anon_sym_are,
  [3079] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(725), 1,
      anon_sym_are,
  [3086] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(727), 1,
      anon_sym_staged,
  [3093] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(729), 1,
      anon_sym_be,
  [3100] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(731), 1,
      anon_sym_in,
  [3107] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(733), 1,
      aux_sym_source_token1,
  [3114] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(735), 1,
      aux_sym_source_token1,
  [3121] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(737), 1,
      anon_sym_files,
  [3128] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(739), 1,
      anon_sym_COLON,
  [3135] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(741), 1,
      aux_sym_source_token1,
  [3142] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(743), 1,
      aux_sym_source_token1,
  [3149] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(745), 1,
      anon_sym_detached,
  [3156] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(747), 1,
      anon_sym_branch,
  [3163] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(749), 1,
      anon_sym_branch,
  [3170] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(751), 1,
      anon_sym_rebase,
  [3177] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(753), 1,
      aux_sym_source_token1,
  [3184] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(755), 1,
      aux_sym_source_token1,
  [3191] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(757), 1,
      anon_sym_POUND2,
  [3198] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(759), 1,
      aux_sym_source_token1,
  [3205] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(761), 1,
      sym_commit,
  [3212] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(763), 1,
      anon_sym_onto,
  [3219] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(765), 1,
      anon_sym_SEMI,
  [3226] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(767), 1,
      anon_sym_progress,
  [3233] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(769), 1,
      anon_sym_in,
  [3240] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(771), 1,
      anon_sym_rebase,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 306,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 416,
  [SMALL_STATE(17)] = 435,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 570,
  [SMALL_STATE(23)] = 582,
  [SMALL_STATE(24)] = 598,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 632,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 690,
  [SMALL_STATE(31)] = 705,
  [SMALL_STATE(32)] = 718,
  [SMALL_STATE(33)] = 735,
  [SMALL_STATE(34)] = 752,
  [SMALL_STATE(35)] = 767,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 814,
  [SMALL_STATE(39)] = 829,
  [SMALL_STATE(40)] = 844,
  [SMALL_STATE(41)] = 856,
  [SMALL_STATE(42)] = 870,
  [SMALL_STATE(43)] = 886,
  [SMALL_STATE(44)] = 902,
  [SMALL_STATE(45)] = 914,
  [SMALL_STATE(46)] = 930,
  [SMALL_STATE(47)] = 946,
  [SMALL_STATE(48)] = 958,
  [SMALL_STATE(49)] = 974,
  [SMALL_STATE(50)] = 986,
  [SMALL_STATE(51)] = 1002,
  [SMALL_STATE(52)] = 1014,
  [SMALL_STATE(53)] = 1030,
  [SMALL_STATE(54)] = 1046,
  [SMALL_STATE(55)] = 1062,
  [SMALL_STATE(56)] = 1076,
  [SMALL_STATE(57)] = 1092,
  [SMALL_STATE(58)] = 1108,
  [SMALL_STATE(59)] = 1124,
  [SMALL_STATE(60)] = 1136,
  [SMALL_STATE(61)] = 1145,
  [SMALL_STATE(62)] = 1158,
  [SMALL_STATE(63)] = 1171,
  [SMALL_STATE(64)] = 1184,
  [SMALL_STATE(65)] = 1193,
  [SMALL_STATE(66)] = 1206,
  [SMALL_STATE(67)] = 1217,
  [SMALL_STATE(68)] = 1230,
  [SMALL_STATE(69)] = 1239,
  [SMALL_STATE(70)] = 1252,
  [SMALL_STATE(71)] = 1261,
  [SMALL_STATE(72)] = 1274,
  [SMALL_STATE(73)] = 1287,
  [SMALL_STATE(74)] = 1296,
  [SMALL_STATE(75)] = 1309,
  [SMALL_STATE(76)] = 1322,
  [SMALL_STATE(77)] = 1335,
  [SMALL_STATE(78)] = 1348,
  [SMALL_STATE(79)] = 1361,
  [SMALL_STATE(80)] = 1374,
  [SMALL_STATE(81)] = 1387,
  [SMALL_STATE(82)] = 1400,
  [SMALL_STATE(83)] = 1413,
  [SMALL_STATE(84)] = 1426,
  [SMALL_STATE(85)] = 1439,
  [SMALL_STATE(86)] = 1452,
  [SMALL_STATE(87)] = 1465,
  [SMALL_STATE(88)] = 1478,
  [SMALL_STATE(89)] = 1491,
  [SMALL_STATE(90)] = 1504,
  [SMALL_STATE(91)] = 1517,
  [SMALL_STATE(92)] = 1530,
  [SMALL_STATE(93)] = 1543,
  [SMALL_STATE(94)] = 1552,
  [SMALL_STATE(95)] = 1565,
  [SMALL_STATE(96)] = 1578,
  [SMALL_STATE(97)] = 1587,
  [SMALL_STATE(98)] = 1600,
  [SMALL_STATE(99)] = 1609,
  [SMALL_STATE(100)] = 1618,
  [SMALL_STATE(101)] = 1631,
  [SMALL_STATE(102)] = 1640,
  [SMALL_STATE(103)] = 1650,
  [SMALL_STATE(104)] = 1660,
  [SMALL_STATE(105)] = 1670,
  [SMALL_STATE(106)] = 1680,
  [SMALL_STATE(107)] = 1690,
  [SMALL_STATE(108)] = 1700,
  [SMALL_STATE(109)] = 1708,
  [SMALL_STATE(110)] = 1716,
  [SMALL_STATE(111)] = 1726,
  [SMALL_STATE(112)] = 1736,
  [SMALL_STATE(113)] = 1746,
  [SMALL_STATE(114)] = 1756,
  [SMALL_STATE(115)] = 1766,
  [SMALL_STATE(116)] = 1776,
  [SMALL_STATE(117)] = 1786,
  [SMALL_STATE(118)] = 1796,
  [SMALL_STATE(119)] = 1806,
  [SMALL_STATE(120)] = 1816,
  [SMALL_STATE(121)] = 1826,
  [SMALL_STATE(122)] = 1836,
  [SMALL_STATE(123)] = 1846,
  [SMALL_STATE(124)] = 1856,
  [SMALL_STATE(125)] = 1866,
  [SMALL_STATE(126)] = 1876,
  [SMALL_STATE(127)] = 1886,
  [SMALL_STATE(128)] = 1896,
  [SMALL_STATE(129)] = 1903,
  [SMALL_STATE(130)] = 1910,
  [SMALL_STATE(131)] = 1917,
  [SMALL_STATE(132)] = 1924,
  [SMALL_STATE(133)] = 1931,
  [SMALL_STATE(134)] = 1938,
  [SMALL_STATE(135)] = 1945,
  [SMALL_STATE(136)] = 1952,
  [SMALL_STATE(137)] = 1959,
  [SMALL_STATE(138)] = 1966,
  [SMALL_STATE(139)] = 1973,
  [SMALL_STATE(140)] = 1980,
  [SMALL_STATE(141)] = 1987,
  [SMALL_STATE(142)] = 1994,
  [SMALL_STATE(143)] = 2001,
  [SMALL_STATE(144)] = 2008,
  [SMALL_STATE(145)] = 2015,
  [SMALL_STATE(146)] = 2022,
  [SMALL_STATE(147)] = 2029,
  [SMALL_STATE(148)] = 2036,
  [SMALL_STATE(149)] = 2043,
  [SMALL_STATE(150)] = 2050,
  [SMALL_STATE(151)] = 2057,
  [SMALL_STATE(152)] = 2064,
  [SMALL_STATE(153)] = 2071,
  [SMALL_STATE(154)] = 2078,
  [SMALL_STATE(155)] = 2085,
  [SMALL_STATE(156)] = 2092,
  [SMALL_STATE(157)] = 2099,
  [SMALL_STATE(158)] = 2106,
  [SMALL_STATE(159)] = 2113,
  [SMALL_STATE(160)] = 2120,
  [SMALL_STATE(161)] = 2127,
  [SMALL_STATE(162)] = 2134,
  [SMALL_STATE(163)] = 2141,
  [SMALL_STATE(164)] = 2148,
  [SMALL_STATE(165)] = 2155,
  [SMALL_STATE(166)] = 2162,
  [SMALL_STATE(167)] = 2169,
  [SMALL_STATE(168)] = 2176,
  [SMALL_STATE(169)] = 2183,
  [SMALL_STATE(170)] = 2190,
  [SMALL_STATE(171)] = 2197,
  [SMALL_STATE(172)] = 2204,
  [SMALL_STATE(173)] = 2211,
  [SMALL_STATE(174)] = 2218,
  [SMALL_STATE(175)] = 2225,
  [SMALL_STATE(176)] = 2232,
  [SMALL_STATE(177)] = 2239,
  [SMALL_STATE(178)] = 2246,
  [SMALL_STATE(179)] = 2253,
  [SMALL_STATE(180)] = 2260,
  [SMALL_STATE(181)] = 2267,
  [SMALL_STATE(182)] = 2274,
  [SMALL_STATE(183)] = 2281,
  [SMALL_STATE(184)] = 2288,
  [SMALL_STATE(185)] = 2295,
  [SMALL_STATE(186)] = 2302,
  [SMALL_STATE(187)] = 2309,
  [SMALL_STATE(188)] = 2316,
  [SMALL_STATE(189)] = 2323,
  [SMALL_STATE(190)] = 2330,
  [SMALL_STATE(191)] = 2337,
  [SMALL_STATE(192)] = 2344,
  [SMALL_STATE(193)] = 2351,
  [SMALL_STATE(194)] = 2358,
  [SMALL_STATE(195)] = 2365,
  [SMALL_STATE(196)] = 2372,
  [SMALL_STATE(197)] = 2379,
  [SMALL_STATE(198)] = 2386,
  [SMALL_STATE(199)] = 2393,
  [SMALL_STATE(200)] = 2400,
  [SMALL_STATE(201)] = 2407,
  [SMALL_STATE(202)] = 2414,
  [SMALL_STATE(203)] = 2421,
  [SMALL_STATE(204)] = 2428,
  [SMALL_STATE(205)] = 2435,
  [SMALL_STATE(206)] = 2442,
  [SMALL_STATE(207)] = 2449,
  [SMALL_STATE(208)] = 2456,
  [SMALL_STATE(209)] = 2463,
  [SMALL_STATE(210)] = 2470,
  [SMALL_STATE(211)] = 2477,
  [SMALL_STATE(212)] = 2484,
  [SMALL_STATE(213)] = 2491,
  [SMALL_STATE(214)] = 2498,
  [SMALL_STATE(215)] = 2505,
  [SMALL_STATE(216)] = 2512,
  [SMALL_STATE(217)] = 2519,
  [SMALL_STATE(218)] = 2526,
  [SMALL_STATE(219)] = 2533,
  [SMALL_STATE(220)] = 2540,
  [SMALL_STATE(221)] = 2547,
  [SMALL_STATE(222)] = 2554,
  [SMALL_STATE(223)] = 2561,
  [SMALL_STATE(224)] = 2568,
  [SMALL_STATE(225)] = 2575,
  [SMALL_STATE(226)] = 2582,
  [SMALL_STATE(227)] = 2589,
  [SMALL_STATE(228)] = 2596,
  [SMALL_STATE(229)] = 2603,
  [SMALL_STATE(230)] = 2610,
  [SMALL_STATE(231)] = 2617,
  [SMALL_STATE(232)] = 2624,
  [SMALL_STATE(233)] = 2631,
  [SMALL_STATE(234)] = 2638,
  [SMALL_STATE(235)] = 2645,
  [SMALL_STATE(236)] = 2652,
  [SMALL_STATE(237)] = 2659,
  [SMALL_STATE(238)] = 2666,
  [SMALL_STATE(239)] = 2673,
  [SMALL_STATE(240)] = 2680,
  [SMALL_STATE(241)] = 2687,
  [SMALL_STATE(242)] = 2694,
  [SMALL_STATE(243)] = 2701,
  [SMALL_STATE(244)] = 2708,
  [SMALL_STATE(245)] = 2715,
  [SMALL_STATE(246)] = 2722,
  [SMALL_STATE(247)] = 2729,
  [SMALL_STATE(248)] = 2736,
  [SMALL_STATE(249)] = 2743,
  [SMALL_STATE(250)] = 2750,
  [SMALL_STATE(251)] = 2757,
  [SMALL_STATE(252)] = 2764,
  [SMALL_STATE(253)] = 2771,
  [SMALL_STATE(254)] = 2778,
  [SMALL_STATE(255)] = 2785,
  [SMALL_STATE(256)] = 2792,
  [SMALL_STATE(257)] = 2799,
  [SMALL_STATE(258)] = 2806,
  [SMALL_STATE(259)] = 2813,
  [SMALL_STATE(260)] = 2820,
  [SMALL_STATE(261)] = 2827,
  [SMALL_STATE(262)] = 2834,
  [SMALL_STATE(263)] = 2841,
  [SMALL_STATE(264)] = 2848,
  [SMALL_STATE(265)] = 2855,
  [SMALL_STATE(266)] = 2862,
  [SMALL_STATE(267)] = 2869,
  [SMALL_STATE(268)] = 2876,
  [SMALL_STATE(269)] = 2883,
  [SMALL_STATE(270)] = 2890,
  [SMALL_STATE(271)] = 2897,
  [SMALL_STATE(272)] = 2904,
  [SMALL_STATE(273)] = 2911,
  [SMALL_STATE(274)] = 2918,
  [SMALL_STATE(275)] = 2925,
  [SMALL_STATE(276)] = 2932,
  [SMALL_STATE(277)] = 2939,
  [SMALL_STATE(278)] = 2946,
  [SMALL_STATE(279)] = 2953,
  [SMALL_STATE(280)] = 2960,
  [SMALL_STATE(281)] = 2967,
  [SMALL_STATE(282)] = 2974,
  [SMALL_STATE(283)] = 2981,
  [SMALL_STATE(284)] = 2988,
  [SMALL_STATE(285)] = 2995,
  [SMALL_STATE(286)] = 3002,
  [SMALL_STATE(287)] = 3009,
  [SMALL_STATE(288)] = 3016,
  [SMALL_STATE(289)] = 3023,
  [SMALL_STATE(290)] = 3030,
  [SMALL_STATE(291)] = 3037,
  [SMALL_STATE(292)] = 3044,
  [SMALL_STATE(293)] = 3051,
  [SMALL_STATE(294)] = 3058,
  [SMALL_STATE(295)] = 3065,
  [SMALL_STATE(296)] = 3072,
  [SMALL_STATE(297)] = 3079,
  [SMALL_STATE(298)] = 3086,
  [SMALL_STATE(299)] = 3093,
  [SMALL_STATE(300)] = 3100,
  [SMALL_STATE(301)] = 3107,
  [SMALL_STATE(302)] = 3114,
  [SMALL_STATE(303)] = 3121,
  [SMALL_STATE(304)] = 3128,
  [SMALL_STATE(305)] = 3135,
  [SMALL_STATE(306)] = 3142,
  [SMALL_STATE(307)] = 3149,
  [SMALL_STATE(308)] = 3156,
  [SMALL_STATE(309)] = 3163,
  [SMALL_STATE(310)] = 3170,
  [SMALL_STATE(311)] = 3177,
  [SMALL_STATE(312)] = 3184,
  [SMALL_STATE(313)] = 3191,
  [SMALL_STATE(314)] = 3198,
  [SMALL_STATE(315)] = 3205,
  [SMALL_STATE(316)] = 3212,
  [SMALL_STATE(317)] = 3219,
  [SMALL_STATE(318)] = 3226,
  [SMALL_STATE(319)] = 3233,
  [SMALL_STATE(320)] = 3240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(25),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(26),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(63),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(66),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(55),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(67),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(69),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(74),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(31),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(89),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(90),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(94),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(16),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 6),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [543] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
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
