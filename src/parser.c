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
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 83
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  aux_sym_message_token2 = 5,
  aux_sym_comment_token1 = 6,
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
  sym_source = 83,
  sym__body_line = 84,
  sym_subject = 85,
  sym_message = 86,
  sym_comment = 87,
  sym__comment_body = 88,
  sym__rebase_summary = 89,
  sym__rebase_header = 90,
  sym_summary = 91,
  sym__change_header = 92,
  sym__branch_declaration = 93,
  sym_header = 94,
  sym_change = 95,
  sym_rebase_command = 96,
  sym_path = 97,
  aux_sym_source_repeat1 = 98,
  aux_sym_subject_repeat1 = 99,
  aux_sym_message_repeat1 = 100,
  aux_sym_message_repeat2 = 101,
  aux_sym__comment_body_repeat1 = 102,
  aux_sym__rebase_summary_repeat1 = 103,
  aux_sym__rebase_summary_repeat2 = 104,
  aux_sym_summary_repeat1 = 105,
  aux_sym_summary_repeat2 = 106,
  aux_sym_path_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [aux_sym_message_token2] = "message_token2",
  [aux_sym_comment_token1] = "scissors",
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
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [aux_sym_message_token2] = aux_sym_message_token2,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [aux_sym_comment_token1] = {
    .visible = true,
    .named = true,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 30,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 31,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 54,
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
  [90] = 90,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(436);
      if (lookahead == '\'') ADVANCE(267);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == ')') ADVANCE(267);
      if (lookahead == '-') ADVANCE(267);
      if (lookahead == '.') ADVANCE(267);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == ';') ADVANCE(267);
      if (lookahead == 'C') ADVANCE(267);
      if (lookahead == 'H') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(267);
      if (lookahead == 'N') ADVANCE(267);
      if (lookahead == 'O') ADVANCE(267);
      if (lookahead == 'U') ADVANCE(267);
      if (lookahead == 'Y') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == 'u') ADVANCE(267);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(266);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(421);
      if (lookahead == '@') ADVANCE(382);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(270);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(434);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(435);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(273);
      if (lookahead != 0) ADVANCE(297);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(218);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(200);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(180);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(8);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(330);
      END_STATE();
    case 30:
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == '>') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 33:
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(276);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(189);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(241);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(214);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(192);
      END_STATE();
    case 52:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(431);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(128);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(141);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(333);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(430);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(338);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(213);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(343);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(248);
      END_STATE();
    case 111:
      if (lookahead == 'f') ADVANCE(332);
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 112:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(209);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(329);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(299);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 123:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 124:
      if (lookahead == 'h') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 125:
      if (lookahead == 'h') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 126:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(98);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 145:
      if (lookahead == 'k') ADVANCE(424);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(432);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 153:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(237);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(142);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(301);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(285);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 188:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(207);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 196:
      if (lookahead == 'p') ADVANCE(327);
      END_STATE();
    case 197:
      if (lookahead == 'p') ADVANCE(429);
      END_STATE();
    case 198:
      if (lookahead == 'p') ADVANCE(428);
      END_STATE();
    case 199:
      if (lookahead == 'q') ADVANCE(238);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(297);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 213:
      if (lookahead == 's') ADVANCE(316);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(320);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(287);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 238:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 239:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 240:
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 241:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 242:
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 243:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 244:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 245:
      if (lookahead == 'x') ADVANCE(221);
      END_STATE();
    case 246:
      if (lookahead == 'y') ADVANCE(289);
      END_STATE();
    case 247:
      if (lookahead == 'y') ADVANCE(226);
      END_STATE();
    case 248:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 249:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(423);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      END_STATE();
    case 256:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 257:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 258:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(278);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(267);
      if (lookahead != 0) ADVANCE(267);
      END_STATE();
    case 259:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\'') ADVANCE(300);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(309);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(302);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(76);
      if (lookahead == 'Y') ADVANCE(183);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == 'w') ADVANCE(137);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 260:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(279);
      if (lookahead == '@') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(271);
      if (lookahead != 0) ADVANCE(276);
      END_STATE();
    case 261:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(399);
      if (lookahead == 'H') ADVANCE(385);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead == 'U') ADVANCE(405);
      if (lookahead == 'Y') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(270);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 262:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(270);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 263:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(435);
      if (lookahead != 0) ADVANCE(436);
      END_STATE();
    case 264:
      if (eof) ADVANCE(265);
      if (lookahead == '\n') ADVANCE(266);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0) ADVANCE(269);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(269);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(276);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(423);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(297);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '@') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(437);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(276);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
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
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(437);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(387);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(436);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(436);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(437);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 258},
  [2] = {.lex_state = 261},
  [3] = {.lex_state = 259},
  [4] = {.lex_state = 259},
  [5] = {.lex_state = 259},
  [6] = {.lex_state = 259},
  [7] = {.lex_state = 259},
  [8] = {.lex_state = 260},
  [9] = {.lex_state = 260},
  [10] = {.lex_state = 260},
  [11] = {.lex_state = 260},
  [12] = {.lex_state = 260},
  [13] = {.lex_state = 259},
  [14] = {.lex_state = 259},
  [15] = {.lex_state = 260},
  [16] = {.lex_state = 259},
  [17] = {.lex_state = 263},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 264},
  [24] = {.lex_state = 259},
  [25] = {.lex_state = 259},
  [26] = {.lex_state = 259},
  [27] = {.lex_state = 262},
  [28] = {.lex_state = 262},
  [29] = {.lex_state = 259},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 264},
  [33] = {.lex_state = 259},
  [34] = {.lex_state = 264},
  [35] = {.lex_state = 202},
  [36] = {.lex_state = 263},
  [37] = {.lex_state = 202},
  [38] = {.lex_state = 263},
  [39] = {.lex_state = 259},
  [40] = {.lex_state = 259},
  [41] = {.lex_state = 259},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 263},
  [44] = {.lex_state = 259},
  [45] = {.lex_state = 263},
  [46] = {.lex_state = 259},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 259},
  [49] = {.lex_state = 202},
  [50] = {.lex_state = 202},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 263},
  [53] = {.lex_state = 202},
  [54] = {.lex_state = 202},
  [55] = {.lex_state = 202},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 259},
  [58] = {.lex_state = 261},
  [59] = {.lex_state = 259},
  [60] = {.lex_state = 259},
  [61] = {.lex_state = 259},
  [62] = {.lex_state = 259},
  [63] = {.lex_state = 259},
  [64] = {.lex_state = 259},
  [65] = {.lex_state = 259},
  [66] = {.lex_state = 261},
  [67] = {.lex_state = 261},
  [68] = {.lex_state = 259},
  [69] = {.lex_state = 261},
  [70] = {.lex_state = 261},
  [71] = {.lex_state = 261},
  [72] = {.lex_state = 259},
  [73] = {.lex_state = 261},
  [74] = {.lex_state = 259},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 259},
  [77] = {.lex_state = 261},
  [78] = {.lex_state = 261},
  [79] = {.lex_state = 261},
  [80] = {.lex_state = 261},
  [81] = {.lex_state = 261},
  [82] = {.lex_state = 261},
  [83] = {.lex_state = 259},
  [84] = {.lex_state = 261},
  [85] = {.lex_state = 259},
  [86] = {.lex_state = 261},
  [87] = {.lex_state = 259},
  [88] = {.lex_state = 259},
  [89] = {.lex_state = 259},
  [90] = {.lex_state = 249},
  [91] = {.lex_state = 259},
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 259},
  [94] = {.lex_state = 249},
  [95] = {.lex_state = 259},
  [96] = {.lex_state = 261},
  [97] = {.lex_state = 259},
  [98] = {.lex_state = 259},
  [99] = {.lex_state = 259},
  [100] = {.lex_state = 259},
  [101] = {.lex_state = 249},
  [102] = {.lex_state = 259},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 261},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 259},
  [108] = {.lex_state = 259},
  [109] = {.lex_state = 259},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 261},
  [112] = {.lex_state = 259},
  [113] = {.lex_state = 259},
  [114] = {.lex_state = 259},
  [115] = {.lex_state = 259},
  [116] = {.lex_state = 259},
  [117] = {.lex_state = 259},
  [118] = {.lex_state = 259},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 259},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 259},
  [123] = {.lex_state = 261},
  [124] = {.lex_state = 259},
  [125] = {.lex_state = 261},
  [126] = {.lex_state = 259},
  [127] = {.lex_state = 259},
  [128] = {.lex_state = 259},
  [129] = {.lex_state = 26},
  [130] = {.lex_state = 259},
  [131] = {.lex_state = 259},
  [132] = {.lex_state = 259},
  [133] = {.lex_state = 261},
  [134] = {.lex_state = 259},
  [135] = {.lex_state = 259},
  [136] = {.lex_state = 259},
  [137] = {.lex_state = 259},
  [138] = {.lex_state = 259},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 259},
  [141] = {.lex_state = 259},
  [142] = {.lex_state = 259},
  [143] = {.lex_state = 259},
  [144] = {.lex_state = 259},
  [145] = {.lex_state = 259},
  [146] = {.lex_state = 259},
  [147] = {.lex_state = 261},
  [148] = {.lex_state = 259},
  [149] = {.lex_state = 259},
  [150] = {.lex_state = 261},
  [151] = {.lex_state = 261},
  [152] = {.lex_state = 259},
  [153] = {.lex_state = 259},
  [154] = {.lex_state = 259},
  [155] = {.lex_state = 259},
  [156] = {.lex_state = 261},
  [157] = {.lex_state = 259},
  [158] = {.lex_state = 259},
  [159] = {.lex_state = 261},
  [160] = {.lex_state = 259},
  [161] = {.lex_state = 259},
  [162] = {.lex_state = 259},
  [163] = {.lex_state = 59},
  [164] = {.lex_state = 259},
  [165] = {.lex_state = 249},
  [166] = {.lex_state = 259},
  [167] = {.lex_state = 259},
  [168] = {.lex_state = 259},
  [169] = {.lex_state = 259},
  [170] = {.lex_state = 249},
  [171] = {.lex_state = 259},
  [172] = {.lex_state = 259},
  [173] = {.lex_state = 26},
  [174] = {.lex_state = 259},
  [175] = {.lex_state = 249},
  [176] = {.lex_state = 259},
  [177] = {.lex_state = 259},
  [178] = {.lex_state = 26},
  [179] = {.lex_state = 259},
  [180] = {.lex_state = 249},
  [181] = {.lex_state = 259},
  [182] = {.lex_state = 259},
  [183] = {.lex_state = 26},
  [184] = {.lex_state = 259},
  [185] = {.lex_state = 259},
  [186] = {.lex_state = 259},
  [187] = {.lex_state = 259},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 259},
  [190] = {.lex_state = 259},
  [191] = {.lex_state = 259},
  [192] = {.lex_state = 259},
  [193] = {.lex_state = 261},
  [194] = {.lex_state = 259},
  [195] = {.lex_state = 259},
  [196] = {.lex_state = 259},
  [197] = {.lex_state = 261},
  [198] = {.lex_state = 261},
  [199] = {.lex_state = 259},
  [200] = {.lex_state = 259},
  [201] = {.lex_state = 259},
  [202] = {.lex_state = 259},
  [203] = {.lex_state = 261},
  [204] = {.lex_state = 259},
  [205] = {.lex_state = 262},
  [206] = {.lex_state = 259},
  [207] = {.lex_state = 261},
  [208] = {.lex_state = 26},
  [209] = {.lex_state = 259},
  [210] = {.lex_state = 261},
  [211] = {.lex_state = 261},
  [212] = {.lex_state = 261},
  [213] = {.lex_state = 259},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
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
    [sym_source] = STATE(212),
    [sym_subject] = STATE(81),
    [sym_comment] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym_subject_token1] = ACTIONS(9),
    [aux_sym_message_token1] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(11),
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
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
    STATE(210), 1,
      sym_header,
    STATE(211), 1,
      sym__change_header,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(80), 4,
      sym__comment_body,
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
    STATE(82), 1,
      sym__rebase_header,
    STATE(125), 1,
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
  [78] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(125), 1,
      sym_rebase_command,
    STATE(133), 1,
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
  [109] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(43), 1,
      anon_sym_You,
    STATE(125), 1,
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
  [131] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(45), 1,
      anon_sym_You,
    STATE(125), 1,
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
  [153] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      anon_sym_You,
    STATE(125), 1,
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
  [175] = 10,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      aux_sym_message_token2,
    ACTIONS(57), 1,
      sym_user,
    STATE(56), 1,
      aux_sym_message_repeat1,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(159), 2,
      sym_message,
      sym_comment,
  [208] = 10,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      aux_sym_message_token2,
    ACTIONS(57), 1,
      sym_user,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    STATE(56), 1,
      aux_sym_message_repeat1,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(159), 2,
      sym_message,
      sym_comment,
  [241] = 10,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      aux_sym_message_token2,
    ACTIONS(57), 1,
      sym_user,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    STATE(56), 1,
      aux_sym_message_repeat1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(159), 2,
      sym_message,
      sym_comment,
  [274] = 10,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(55), 1,
      aux_sym_message_token2,
    ACTIONS(57), 1,
      sym_user,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      aux_sym_message_repeat1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(159), 2,
      sym_message,
      sym_comment,
  [307] = 10,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_source_token1,
    ACTIONS(72), 1,
      aux_sym_message_token1,
    ACTIONS(75), 1,
      aux_sym_message_token2,
    ACTIONS(78), 1,
      aux_sym_comment_token1,
    ACTIONS(81), 1,
      anon_sym_POUND,
    ACTIONS(84), 1,
      sym_user,
    STATE(56), 1,
      aux_sym_message_repeat1,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(159), 2,
      sym_message,
      sym_comment,
  [340] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(125), 1,
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
  [359] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(147), 1,
      sym_change,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(89), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [376] = 2,
    ACTIONS(93), 3,
      aux_sym_message_token1,
      aux_sym_message_token2,
      anon_sym_POUND,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_comment_token1,
      sym_user,
  [388] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(147), 1,
      sym_change,
    ACTIONS(89), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [401] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(95), 1,
      aux_sym_path_token1,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_path,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [418] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(99), 1,
      sym__word,
    STATE(21), 1,
      aux_sym_message_repeat2,
    ACTIONS(101), 2,
      sym_user,
      sym_item,
  [435] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(105), 1,
      sym__word,
    STATE(18), 1,
      aux_sym_message_repeat2,
    ACTIONS(107), 2,
      sym_user,
      sym_item,
  [452] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(109), 1,
      sym__word,
    STATE(22), 1,
      aux_sym_message_repeat2,
    ACTIONS(111), 2,
      sym_user,
      sym_item,
  [469] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(113), 1,
      aux_sym_source_token1,
    ACTIONS(115), 1,
      sym__word,
    STATE(21), 1,
      aux_sym_message_repeat2,
    ACTIONS(118), 2,
      sym_user,
      sym_item,
  [486] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(99), 1,
      sym__word,
    ACTIONS(121), 1,
      aux_sym_source_token1,
    STATE(21), 1,
      aux_sym_message_repeat2,
    ACTIONS(101), 2,
      sym_user,
      sym_item,
  [503] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(125), 1,
      aux_sym_subject_token2,
    STATE(34), 1,
      aux_sym_subject_repeat1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [517] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(129), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [531] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(134), 1,
      anon_sym_POUND2,
    STATE(25), 1,
      aux_sym_summary_repeat2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [545] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(111), 1,
      sym__rebase_header,
  [561] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(139), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [575] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(144), 1,
      sym__word,
    STATE(27), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [589] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(148), 1,
      anon_sym_POUND2,
    STATE(25), 1,
      aux_sym_summary_repeat2,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [603] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(152), 1,
      aux_sym_path_token1,
    STATE(30), 1,
      aux_sym_path_repeat1,
    ACTIONS(150), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [617] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(157), 1,
      aux_sym_path_token1,
    STATE(30), 1,
      aux_sym_path_repeat1,
    ACTIONS(155), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [631] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(161), 1,
      aux_sym_subject_token2,
    STATE(32), 1,
      aux_sym_subject_repeat1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [645] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(164), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [659] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(168), 1,
      aux_sym_subject_token2,
    STATE(32), 1,
      aux_sym_subject_repeat1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [673] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(170), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(172), 1,
      anon_sym_rebasing,
    STATE(53), 1,
      aux_sym__rebase_summary_repeat2,
  [686] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(95), 1,
      aux_sym_path_token1,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(104), 1,
      sym_path,
  [699] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(174), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(177), 1,
      anon_sym_rebasing,
    STATE(37), 1,
      aux_sym__rebase_summary_repeat2,
  [712] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(150), 1,
      aux_sym_source_token1,
    ACTIONS(179), 1,
      aux_sym_path_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
  [725] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(182), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [734] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(184), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [743] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(188), 1,
      anon_sym_POUND2,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [754] = 4,
    ACTIONS(190), 1,
      aux_sym_message_token1,
    ACTIONS(193), 1,
      aux_sym_message_token2,
    ACTIONS(195), 1,
      sym_user,
    STATE(42), 1,
      aux_sym_message_repeat1,
  [767] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(197), 1,
      aux_sym_path_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_path,
  [780] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(201), 1,
      anon_sym_POUND2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [791] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(155), 1,
      aux_sym_source_token1,
    ACTIONS(203), 1,
      aux_sym_path_token1,
    STATE(38), 1,
      aux_sym_path_repeat1,
  [804] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(207), 1,
      anon_sym_POUND2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [815] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(209), 1,
      aux_sym_source_token1,
    ACTIONS(211), 1,
      aux_sym__rebase_summary_token1,
    STATE(51), 1,
      aux_sym__rebase_summary_repeat2,
  [828] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(215), 1,
      anon_sym_POUND2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [839] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(219), 1,
      anon_sym_rebasing,
    STATE(37), 1,
      aux_sym__rebase_summary_repeat2,
  [852] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(221), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(223), 1,
      anon_sym_rebasing,
    STATE(49), 1,
      aux_sym__rebase_summary_repeat2,
  [865] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(225), 1,
      aux_sym_source_token1,
    ACTIONS(227), 1,
      aux_sym__rebase_summary_token1,
    STATE(51), 1,
      aux_sym__rebase_summary_repeat2,
  [878] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(95), 1,
      aux_sym_path_token1,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_path,
  [891] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(223), 1,
      anon_sym_rebasing,
    STATE(37), 1,
      aux_sym__rebase_summary_repeat2,
  [904] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(172), 1,
      anon_sym_rebasing,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    STATE(37), 1,
      aux_sym__rebase_summary_repeat2,
  [917] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(230), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(232), 1,
      anon_sym_rebasing,
    STATE(54), 1,
      aux_sym__rebase_summary_repeat2,
  [930] = 4,
    ACTIONS(234), 1,
      aux_sym_message_token1,
    ACTIONS(236), 1,
      aux_sym_message_token2,
    ACTIONS(238), 1,
      sym_user,
    STATE(42), 1,
      aux_sym_message_repeat1,
  [943] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(240), 1,
      anon_sym_up,
    ACTIONS(242), 1,
      anon_sym_ahead,
    ACTIONS(244), 1,
      anon_sym_behind,
  [956] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [964] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(248), 1,
      anon_sym_POUND2,
    STATE(68), 1,
      aux_sym__rebase_summary_repeat1,
  [974] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(250), 1,
      anon_sym_POUND2,
    STATE(29), 1,
      aux_sym_summary_repeat2,
  [984] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(252), 1,
      anon_sym_POUND2,
    STATE(59), 1,
      aux_sym__rebase_summary_repeat1,
  [994] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(252), 1,
      anon_sym_POUND2,
    STATE(68), 1,
      aux_sym__rebase_summary_repeat1,
  [1004] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(254), 1,
      anon_sym_to,
    ACTIONS(256), 1,
      anon_sym_not,
  [1014] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(258), 1,
      anon_sym_POUND2,
    STATE(33), 1,
      aux_sym_summary_repeat1,
  [1024] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(260), 1,
      anon_sym_POUND2,
    STATE(62), 1,
      aux_sym__rebase_summary_repeat1,
  [1034] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1042] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1050] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(264), 1,
      anon_sym_POUND2,
    STATE(68), 1,
      aux_sym__rebase_summary_repeat1,
  [1060] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(15), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1068] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1076] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1084] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(269), 1,
      anon_sym_POUND2,
    STATE(68), 1,
      aux_sym__rebase_summary_repeat1,
  [1094] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1102] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(273), 1,
      aux_sym_source_token1,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
  [1112] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      aux_sym__rebase_summary_token1,
    STATE(47), 1,
      aux_sym__rebase_summary_repeat2,
  [1122] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(279), 1,
      anon_sym_POUND2,
    STATE(72), 1,
      aux_sym__rebase_summary_repeat1,
  [1132] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1140] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1148] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1156] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1164] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(287), 1,
      aux_sym_source_token1,
  [1174] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(289), 1,
      aux_sym_source_token1,
  [1181] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1188] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(293), 1,
      aux_sym_source_token1,
  [1195] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(295), 1,
      anon_sym_onto,
  [1202] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(297), 1,
      aux_sym_source_token1,
  [1209] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(299), 1,
      anon_sym_COLON,
  [1216] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(301), 1,
      anon_sym_date,
  [1223] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(303), 1,
      anon_sym_SQUOTE,
  [1230] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      sym_branch,
  [1237] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(307), 1,
      sym_commit,
  [1244] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(309), 1,
      aux_sym_source_token1,
  [1251] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(311), 1,
      anon_sym_with,
  [1258] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(313), 1,
      sym_branch,
  [1265] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
  [1272] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(317), 1,
      aux_sym_source_token1,
  [1279] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(319), 1,
      anon_sym_SQUOTE,
  [1286] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      anon_sym_SQUOTE,
  [1293] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(323), 1,
      anon_sym_by,
  [1300] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(325), 1,
      anon_sym_POUND2,
  [1307] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(327), 1,
      sym_branch,
  [1314] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      anon_sym_by,
  [1321] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(331), 1,
      aux_sym__rebase_header_token2,
  [1328] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(333), 1,
      aux_sym_source_token1,
  [1335] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(335), 1,
      anon_sym_SQUOTE_DOT,
  [1342] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(337), 1,
      aux_sym__rebase_header_token2,
  [1349] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(339), 1,
      aux_sym__branch_declaration_token1,
  [1356] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(341), 1,
      aux_sym__rebase_header_token1,
  [1363] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(343), 1,
      aux_sym__rebase_header_token1,
  [1370] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(345), 1,
      anon_sym_commands,
  [1377] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(347), 1,
      aux_sym_source_token1,
  [1384] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(349), 1,
      aux_sym__branch_declaration_token1,
  [1391] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(351), 1,
      anon_sym_DOT,
  [1398] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(353), 1,
      anon_sym_done,
  [1405] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(355), 1,
      anon_sym_to,
  [1412] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(357), 1,
      anon_sym_remaining,
  [1419] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(359), 1,
      anon_sym_DOT,
  [1426] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [1433] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(363), 1,
      anon_sym_do,
  [1440] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(365), 1,
      anon_sym_DOT,
  [1447] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(367), 1,
      aux_sym__rebase_header_token2,
  [1454] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
  [1461] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(371), 1,
      aux_sym_source_token1,
  [1468] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(373), 1,
      anon_sym_detached,
  [1475] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(375), 1,
      aux_sym_source_token1,
  [1482] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(377), 1,
      anon_sym_branch,
  [1489] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(379), 1,
      anon_sym_COLON,
  [1496] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      aux_sym__rebase_header_token1,
  [1503] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      aux_sym__rebase_header_token2,
  [1510] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [1517] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
  [1524] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      anon_sym_POUND2,
  [1531] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      aux_sym_source_token1,
  [1538] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      anon_sym_branch,
  [1545] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      anon_sym_done,
  [1552] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      anon_sym_remaining,
  [1559] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      anon_sym_of,
  [1566] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_to,
  [1573] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_commit,
  [1580] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [1587] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [1594] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      aux_sym__rebase_header_token1,
  [1601] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      anon_sym_are,
  [1608] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      anon_sym_rebase,
  [1615] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      anon_sym_SEMI,
  [1622] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_COLON,
  [1629] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      aux_sym_source_token1,
  [1636] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      anon_sym_currently,
  [1643] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      anon_sym_are,
  [1650] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      aux_sym_source_token1,
  [1657] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      aux_sym_source_token1,
  [1664] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      anon_sym_COLON,
  [1671] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      sym_commit,
  [1678] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      anon_sym_currently,
  [1685] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      anon_sym_are,
  [1692] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      aux_sym_source_token1,
  [1699] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      anon_sym_branch,
  [1706] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      anon_sym_for,
  [1713] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      aux_sym_source_token1,
  [1720] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      anon_sym_currently,
  [1727] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_SQUOTE,
  [1734] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      anon_sym_branch,
  [1741] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      anon_sym_committed,
  [1748] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      anon_sym_progress,
  [1755] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      sym_branch,
  [1762] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      anon_sym_SQUOTE,
  [1769] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_branch,
  [1776] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [1783] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      anon_sym_SQUOTE,
  [1790] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      sym_branch,
  [1797] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      anon_sym_SQUOTE,
  [1804] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      anon_sym_branch,
  [1811] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      anon_sym_on,
  [1818] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      anon_sym_SQUOTE,
  [1825] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      sym_branch,
  [1832] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      anon_sym_SQUOTE,
  [1839] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      anon_sym_SQUOTE,
  [1846] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      anon_sym_on,
  [1853] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      anon_sym_SQUOTE,
  [1860] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      sym_branch,
  [1867] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      sym_commit,
  [1874] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      anon_sym_SQUOTE,
  [1881] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      anon_sym_on,
  [1888] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_SQUOTE,
  [1895] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
  [1902] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      sym_commit,
  [1909] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      anon_sym_SQUOTE,
  [1916] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_on,
  [1923] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_DOT,
  [1930] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      anon_sym_SQUOTE,
  [1937] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      sym_commit,
  [1944] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      anon_sym_SQUOTE,
  [1951] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      aux_sym_source_token1,
  [1958] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      anon_sym_DOT,
  [1965] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      anon_sym_SQUOTE,
  [1972] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      sym_commit,
  [1979] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      aux_sym_source_token1,
  [1986] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      aux_sym_source_token1,
  [1993] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      anon_sym_DOT,
  [2000] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      anon_sym_SQUOTE,
  [2007] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      anon_sym_at,
  [2014] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_is,
  [2021] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      aux_sym_source_token1,
  [2028] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      anon_sym_DOT,
  [2035] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      sym__word,
  [2042] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      anon_sym_staged,
  [2049] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      aux_sym_source_token1,
  [2056] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      anon_sym_be,
  [2063] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      anon_sym_in,
  [2070] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      aux_sym_source_token1,
  [2077] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      aux_sym_source_token1,
  [2084] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
  [2091] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 208,
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 274,
  [SMALL_STATE(12)] = 307,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 359,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 388,
  [SMALL_STATE(17)] = 401,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 435,
  [SMALL_STATE(20)] = 452,
  [SMALL_STATE(21)] = 469,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 531,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 561,
  [SMALL_STATE(28)] = 575,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 603,
  [SMALL_STATE(31)] = 617,
  [SMALL_STATE(32)] = 631,
  [SMALL_STATE(33)] = 645,
  [SMALL_STATE(34)] = 659,
  [SMALL_STATE(35)] = 673,
  [SMALL_STATE(36)] = 686,
  [SMALL_STATE(37)] = 699,
  [SMALL_STATE(38)] = 712,
  [SMALL_STATE(39)] = 725,
  [SMALL_STATE(40)] = 734,
  [SMALL_STATE(41)] = 743,
  [SMALL_STATE(42)] = 754,
  [SMALL_STATE(43)] = 767,
  [SMALL_STATE(44)] = 780,
  [SMALL_STATE(45)] = 791,
  [SMALL_STATE(46)] = 804,
  [SMALL_STATE(47)] = 815,
  [SMALL_STATE(48)] = 828,
  [SMALL_STATE(49)] = 839,
  [SMALL_STATE(50)] = 852,
  [SMALL_STATE(51)] = 865,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 891,
  [SMALL_STATE(54)] = 904,
  [SMALL_STATE(55)] = 917,
  [SMALL_STATE(56)] = 930,
  [SMALL_STATE(57)] = 943,
  [SMALL_STATE(58)] = 956,
  [SMALL_STATE(59)] = 964,
  [SMALL_STATE(60)] = 974,
  [SMALL_STATE(61)] = 984,
  [SMALL_STATE(62)] = 994,
  [SMALL_STATE(63)] = 1004,
  [SMALL_STATE(64)] = 1014,
  [SMALL_STATE(65)] = 1024,
  [SMALL_STATE(66)] = 1034,
  [SMALL_STATE(67)] = 1042,
  [SMALL_STATE(68)] = 1050,
  [SMALL_STATE(69)] = 1060,
  [SMALL_STATE(70)] = 1068,
  [SMALL_STATE(71)] = 1076,
  [SMALL_STATE(72)] = 1084,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1102,
  [SMALL_STATE(75)] = 1112,
  [SMALL_STATE(76)] = 1122,
  [SMALL_STATE(77)] = 1132,
  [SMALL_STATE(78)] = 1140,
  [SMALL_STATE(79)] = 1148,
  [SMALL_STATE(80)] = 1156,
  [SMALL_STATE(81)] = 1164,
  [SMALL_STATE(82)] = 1174,
  [SMALL_STATE(83)] = 1181,
  [SMALL_STATE(84)] = 1188,
  [SMALL_STATE(85)] = 1195,
  [SMALL_STATE(86)] = 1202,
  [SMALL_STATE(87)] = 1209,
  [SMALL_STATE(88)] = 1216,
  [SMALL_STATE(89)] = 1223,
  [SMALL_STATE(90)] = 1230,
  [SMALL_STATE(91)] = 1237,
  [SMALL_STATE(92)] = 1244,
  [SMALL_STATE(93)] = 1251,
  [SMALL_STATE(94)] = 1258,
  [SMALL_STATE(95)] = 1265,
  [SMALL_STATE(96)] = 1272,
  [SMALL_STATE(97)] = 1279,
  [SMALL_STATE(98)] = 1286,
  [SMALL_STATE(99)] = 1293,
  [SMALL_STATE(100)] = 1300,
  [SMALL_STATE(101)] = 1307,
  [SMALL_STATE(102)] = 1314,
  [SMALL_STATE(103)] = 1321,
  [SMALL_STATE(104)] = 1328,
  [SMALL_STATE(105)] = 1335,
  [SMALL_STATE(106)] = 1342,
  [SMALL_STATE(107)] = 1349,
  [SMALL_STATE(108)] = 1356,
  [SMALL_STATE(109)] = 1363,
  [SMALL_STATE(110)] = 1370,
  [SMALL_STATE(111)] = 1377,
  [SMALL_STATE(112)] = 1384,
  [SMALL_STATE(113)] = 1391,
  [SMALL_STATE(114)] = 1398,
  [SMALL_STATE(115)] = 1405,
  [SMALL_STATE(116)] = 1412,
  [SMALL_STATE(117)] = 1419,
  [SMALL_STATE(118)] = 1426,
  [SMALL_STATE(119)] = 1433,
  [SMALL_STATE(120)] = 1440,
  [SMALL_STATE(121)] = 1447,
  [SMALL_STATE(122)] = 1454,
  [SMALL_STATE(123)] = 1461,
  [SMALL_STATE(124)] = 1468,
  [SMALL_STATE(125)] = 1475,
  [SMALL_STATE(126)] = 1482,
  [SMALL_STATE(127)] = 1489,
  [SMALL_STATE(128)] = 1496,
  [SMALL_STATE(129)] = 1503,
  [SMALL_STATE(130)] = 1510,
  [SMALL_STATE(131)] = 1517,
  [SMALL_STATE(132)] = 1524,
  [SMALL_STATE(133)] = 1531,
  [SMALL_STATE(134)] = 1538,
  [SMALL_STATE(135)] = 1545,
  [SMALL_STATE(136)] = 1552,
  [SMALL_STATE(137)] = 1559,
  [SMALL_STATE(138)] = 1566,
  [SMALL_STATE(139)] = 1573,
  [SMALL_STATE(140)] = 1580,
  [SMALL_STATE(141)] = 1587,
  [SMALL_STATE(142)] = 1594,
  [SMALL_STATE(143)] = 1601,
  [SMALL_STATE(144)] = 1608,
  [SMALL_STATE(145)] = 1615,
  [SMALL_STATE(146)] = 1622,
  [SMALL_STATE(147)] = 1629,
  [SMALL_STATE(148)] = 1636,
  [SMALL_STATE(149)] = 1643,
  [SMALL_STATE(150)] = 1650,
  [SMALL_STATE(151)] = 1657,
  [SMALL_STATE(152)] = 1664,
  [SMALL_STATE(153)] = 1671,
  [SMALL_STATE(154)] = 1678,
  [SMALL_STATE(155)] = 1685,
  [SMALL_STATE(156)] = 1692,
  [SMALL_STATE(157)] = 1699,
  [SMALL_STATE(158)] = 1706,
  [SMALL_STATE(159)] = 1713,
  [SMALL_STATE(160)] = 1720,
  [SMALL_STATE(161)] = 1727,
  [SMALL_STATE(162)] = 1734,
  [SMALL_STATE(163)] = 1741,
  [SMALL_STATE(164)] = 1748,
  [SMALL_STATE(165)] = 1755,
  [SMALL_STATE(166)] = 1762,
  [SMALL_STATE(167)] = 1769,
  [SMALL_STATE(168)] = 1776,
  [SMALL_STATE(169)] = 1783,
  [SMALL_STATE(170)] = 1790,
  [SMALL_STATE(171)] = 1797,
  [SMALL_STATE(172)] = 1804,
  [SMALL_STATE(173)] = 1811,
  [SMALL_STATE(174)] = 1818,
  [SMALL_STATE(175)] = 1825,
  [SMALL_STATE(176)] = 1832,
  [SMALL_STATE(177)] = 1839,
  [SMALL_STATE(178)] = 1846,
  [SMALL_STATE(179)] = 1853,
  [SMALL_STATE(180)] = 1860,
  [SMALL_STATE(181)] = 1867,
  [SMALL_STATE(182)] = 1874,
  [SMALL_STATE(183)] = 1881,
  [SMALL_STATE(184)] = 1888,
  [SMALL_STATE(185)] = 1895,
  [SMALL_STATE(186)] = 1902,
  [SMALL_STATE(187)] = 1909,
  [SMALL_STATE(188)] = 1916,
  [SMALL_STATE(189)] = 1923,
  [SMALL_STATE(190)] = 1930,
  [SMALL_STATE(191)] = 1937,
  [SMALL_STATE(192)] = 1944,
  [SMALL_STATE(193)] = 1951,
  [SMALL_STATE(194)] = 1958,
  [SMALL_STATE(195)] = 1965,
  [SMALL_STATE(196)] = 1972,
  [SMALL_STATE(197)] = 1979,
  [SMALL_STATE(198)] = 1986,
  [SMALL_STATE(199)] = 1993,
  [SMALL_STATE(200)] = 2000,
  [SMALL_STATE(201)] = 2007,
  [SMALL_STATE(202)] = 2014,
  [SMALL_STATE(203)] = 2021,
  [SMALL_STATE(204)] = 2028,
  [SMALL_STATE(205)] = 2035,
  [SMALL_STATE(206)] = 2042,
  [SMALL_STATE(207)] = 2049,
  [SMALL_STATE(208)] = 2056,
  [SMALL_STATE(209)] = 2063,
  [SMALL_STATE(210)] = 2070,
  [SMALL_STATE(211)] = 2077,
  [SMALL_STATE(212)] = 2084,
  [SMALL_STATE(213)] = 2091,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(69),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(21),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(16),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(52),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(27),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(32),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(37),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(42),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(51),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(13),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [549] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
