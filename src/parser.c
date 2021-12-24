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
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_interactive = 7,
  anon_sym_rebase = 8,
  anon_sym_in = 9,
  anon_sym_progress = 10,
  anon_sym_SEMI = 11,
  anon_sym_onto = 12,
  anon_sym_POUND2 = 13,
  anon_sym_You = 14,
  anon_sym_are = 15,
  anon_sym_currently = 16,
  aux_sym__rebase_summary_token1 = 17,
  anon_sym_rebasing = 18,
  anon_sym_branch = 19,
  anon_sym_SQUOTE = 20,
  anon_sym_on = 21,
  anon_sym_DOT = 22,
  anon_sym_Last = 23,
  aux_sym__rebase_header_token1 = 24,
  anon_sym_done = 25,
  anon_sym_LPAREN = 26,
  aux_sym__rebase_header_token2 = 27,
  anon_sym_RPAREN = 28,
  anon_sym_COLON = 29,
  anon_sym_Next = 30,
  anon_sym_to = 31,
  anon_sym_do = 32,
  anon_sym_remaining = 33,
  anon_sym_No = 34,
  anon_sym_commands = 35,
  anon_sym_Changes = 36,
  anon_sym_be = 37,
  anon_sym_committed = 38,
  anon_sym_not = 39,
  anon_sym_staged = 40,
  anon_sym_for = 41,
  anon_sym_commit = 42,
  anon_sym_On = 43,
  anon_sym_Your = 44,
  anon_sym_is = 45,
  anon_sym_up = 46,
  anon_sym_date = 47,
  anon_sym_with = 48,
  anon_sym_SQUOTE_DOT = 49,
  anon_sym_ahead = 50,
  anon_sym_of = 51,
  anon_sym_behind = 52,
  anon_sym_by = 53,
  aux_sym__branch_declaration_token1 = 54,
  anon_sym_HEAD = 55,
  anon_sym_detached = 56,
  anon_sym_at = 57,
  anon_sym_Conflicts = 58,
  anon_sym_Untracked = 59,
  anon_sym_files = 60,
  anon_sym_newfile = 61,
  anon_sym_modified = 62,
  anon_sym_renamed = 63,
  anon_sym_deleted = 64,
  anon_sym_DASH_GT = 65,
  sym_commit = 66,
  sym__word = 67,
  sym_branch = 68,
  anon_sym_pick = 69,
  anon_sym_edit = 70,
  anon_sym_squash = 71,
  anon_sym_merge = 72,
  anon_sym_fixup = 73,
  anon_sym_drop = 74,
  anon_sym_reword = 75,
  anon_sym_exec = 76,
  anon_sym_label = 77,
  anon_sym_reset = 78,
  aux_sym_path_token1 = 79,
  sym_user = 80,
  sym_item = 81,
  sym_source = 82,
  sym__body_line = 83,
  sym_subject = 84,
  sym_message = 85,
  sym_comment = 86,
  sym__comment_body = 87,
  sym__rebase_summary = 88,
  sym__rebase_header = 89,
  sym_summary = 90,
  sym__change_header = 91,
  sym__branch_declaration = 92,
  sym_header = 93,
  sym_change = 94,
  sym_rebase_command = 95,
  sym_path = 96,
  aux_sym_source_repeat1 = 97,
  aux_sym_subject_repeat1 = 98,
  aux_sym_message_repeat1 = 99,
  aux_sym__comment_body_repeat1 = 100,
  aux_sym__rebase_summary_repeat1 = 101,
  aux_sym__rebase_summary_repeat2 = 102,
  aux_sym_summary_repeat1 = 103,
  aux_sym_summary_repeat2 = 104,
  aux_sym_path_repeat1 = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
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
  [sym__rebase_summary] = "_rebase_summary",
  [sym__rebase_header] = "summary",
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
  [sym__rebase_summary] = sym__rebase_summary,
  [sym__rebase_header] = sym_summary,
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
    .visible = false,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(339);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == 'Y') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'w') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(329);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '@') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(454);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(511);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(474);
      if (lookahead == 'H') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(480);
      if (lookahead == 'Y') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(455);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(456);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(362);
      if (lookahead != 0) ADVANCE(363);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(301);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(212);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(231);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == '.') ADVANCE(402);
      END_STATE();
    case 31:
      if (lookahead == '8') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(419);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(409);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(299);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(60)
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(238);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(508);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(177);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(286);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(405);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(507);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(418);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(410);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(416);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(390);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(406);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(270);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(400);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(404);
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(306);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(364);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(384);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 140:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 142:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(401);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(366);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(503);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 't') ADVANCE(411);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(172);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(183);
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(296);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 160:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(271);
      END_STATE();
    case 163:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 165:
      if (lookahead == 'i') ADVANCE(141);
      END_STATE();
    case 166:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 169:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(287);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(291);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(501);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(509);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(171);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(196);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(345);
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(344);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(368);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(382);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(293);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(302);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(399);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(505);
      END_STATE();
    case 245:
      if (lookahead == 'q') ADVANCE(295);
      END_STATE();
    case 246:
      if (lookahead == 'q') ADVANCE(295);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(393);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(249)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(363);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(256);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(414);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(412);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(510);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(395);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(351);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 297:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 298:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 299:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 301:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 302:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(294);
      END_STATE();
    case 304:
      if (lookahead == 'x') ADVANCE(273);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(284);
      END_STATE();
    case 308:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(308)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(500);
      END_STATE();
    case 309:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(309)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(498);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(453);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 312:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 313:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 314:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 315:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      END_STATE();
    case 316:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(515);
      END_STATE();
    case 317:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(338);
      END_STATE();
    case 318:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 319:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\'') ADVANCE(367);
      if (lookahead == '(') ADVANCE(376);
      if (lookahead == ')') ADVANCE(378);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead == ':') ADVANCE(379);
      if (lookahead == ';') ADVANCE(347);
      if (lookahead == '@') ADVANCE(316);
      if (lookahead == 'C') ADVANCE(150);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == 'Y') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(131);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == 'w') ADVANCE(162);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 320:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'Y') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 'u') ADVANCE(242);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(320)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 321:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(340);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(330);
      END_STATE();
    case 322:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(341);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(323)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(335);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 323:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(323)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(335);
      if (lookahead != 0) ADVANCE(337);
      END_STATE();
    case 324:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(474);
      if (lookahead == 'H') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(480);
      if (lookahead == 'Y') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(324)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(455);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 325:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(325)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(513);
      if (lookahead != 0) ADVANCE(514);
      END_STATE();
    case 326:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(326)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(456);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 327:
      if (eof) ADVANCE(328);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '#') ADVANCE(334);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '@') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(515);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(337);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(397);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(363);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(386);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_commit);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(433);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(450);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(452);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(497);
      if (lookahead == '@') ADVANCE(457);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(454);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(474);
      if (lookahead == 'H') ADVANCE(460);
      if (lookahead == 'O') ADVANCE(479);
      if (lookahead == 'U') ADVANCE(480);
      if (lookahead == 'Y') ADVANCE(484);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(455);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(329);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(456);
      if (lookahead != 0) ADVANCE(498);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(515);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(309)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(498);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(500);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(512);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(514);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(514);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 321},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 320},
  [7] = {.lex_state = 320},
  [8] = {.lex_state = 320},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 322},
  [11] = {.lex_state = 322},
  [12] = {.lex_state = 322},
  [13] = {.lex_state = 322},
  [14] = {.lex_state = 322},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 322},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 325},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 327},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 320},
  [25] = {.lex_state = 320},
  [26] = {.lex_state = 326},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 327},
  [29] = {.lex_state = 327},
  [30] = {.lex_state = 320},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 326},
  [33] = {.lex_state = 320},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 249},
  [36] = {.lex_state = 325},
  [37] = {.lex_state = 325},
  [38] = {.lex_state = 320},
  [39] = {.lex_state = 249},
  [40] = {.lex_state = 249},
  [41] = {.lex_state = 249},
  [42] = {.lex_state = 249},
  [43] = {.lex_state = 249},
  [44] = {.lex_state = 320},
  [45] = {.lex_state = 320},
  [46] = {.lex_state = 325},
  [47] = {.lex_state = 320},
  [48] = {.lex_state = 249},
  [49] = {.lex_state = 320},
  [50] = {.lex_state = 325},
  [51] = {.lex_state = 326},
  [52] = {.lex_state = 325},
  [53] = {.lex_state = 320},
  [54] = {.lex_state = 326},
  [55] = {.lex_state = 320},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 320},
  [60] = {.lex_state = 320},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 320},
  [64] = {.lex_state = 320},
  [65] = {.lex_state = 320},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 320},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 320},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 320},
  [79] = {.lex_state = 320},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 320},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 308},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 320},
  [92] = {.lex_state = 308},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 320},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 320},
  [99] = {.lex_state = 320},
  [100] = {.lex_state = 320},
  [101] = {.lex_state = 60},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 320},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 320},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 60},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 308},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 320},
  [124] = {.lex_state = 320},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 320},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 320},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 60},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 320},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 320},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 70},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 308},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 308},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 308},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 60},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 308},
  [177] = {.lex_state = 320},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 60},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 320},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 60},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 320},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 320},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 309},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 60},
  [202] = {.lex_state = 320},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
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
    [anon_sym_newfile] = ACTIONS(1),
    [anon_sym_modified] = ACTIONS(1),
    [anon_sym_renamed] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
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
    [sym_user] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(109),
    [sym_subject] = STATE(67),
    [sym_comment] = STATE(67),
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
      anon_sym_interactive,
    ACTIONS(19), 1,
      anon_sym_Changes,
    ACTIONS(21), 1,
      anon_sym_On,
    ACTIONS(23), 1,
      anon_sym_Your,
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
    STATE(204), 1,
      sym_header,
    STATE(205), 1,
      sym__change_header,
    STATE(57), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [46] = 13,
    ACTIONS(15), 1,
      aux_sym_source_token1,
    ACTIONS(17), 1,
      anon_sym_interactive,
    ACTIONS(19), 1,
      anon_sym_Changes,
    ACTIONS(21), 1,
      anon_sym_On,
    ACTIONS(23), 1,
      anon_sym_Your,
    ACTIONS(25), 1,
      anon_sym_HEAD,
    ACTIONS(27), 1,
      anon_sym_Conflicts,
    ACTIONS(29), 1,
      anon_sym_Untracked,
    ACTIONS(33), 1,
      sym__word,
    STATE(54), 1,
      aux_sym__comment_body_repeat1,
    STATE(204), 1,
      sym_header,
    STATE(205), 1,
      sym__change_header,
    STATE(57), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [89] = 6,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(120), 1,
      sym__rebase_header,
    STATE(121), 1,
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
  [117] = 6,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(121), 1,
      sym_rebase_command,
    STATE(129), 1,
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
  [145] = 3,
    ACTIONS(43), 1,
      anon_sym_You,
    STATE(121), 1,
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
  [164] = 3,
    ACTIONS(45), 1,
      anon_sym_You,
    STATE(121), 1,
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
  [183] = 3,
    ACTIONS(47), 1,
      anon_sym_You,
    STATE(121), 1,
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
  [202] = 2,
    STATE(121), 1,
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
  [218] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(13), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(212), 2,
      sym_message,
      sym_comment,
  [243] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_source_token1,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(212), 2,
      sym_message,
      sym_comment,
  [268] = 7,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(69), 1,
      aux_sym_comment_token1,
    ACTIONS(72), 1,
      anon_sym_POUND,
    ACTIONS(66), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(212), 2,
      sym_message,
      sym_comment,
  [293] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      aux_sym_source_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(212), 2,
      sym_message,
      sym_comment,
  [318] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(55), 1,
      anon_sym_POUND,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_source_token1,
    ACTIONS(53), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(212), 2,
      sym_message,
      sym_comment,
  [343] = 3,
    STATE(127), 1,
      sym_change,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(81), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [357] = 2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 5,
      aux_sym_source_token1,
      aux_sym_message_token1,
      aux_sym_comment_token1,
      anon_sym_POUND,
      sym_user,
  [368] = 3,
    ACTIONS(87), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(89), 3,
      sym__word,
      sym_user,
      sym_item,
  [380] = 5,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_source_token1,
    ACTIONS(93), 1,
      aux_sym_path_token1,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(126), 1,
      sym_path,
  [396] = 3,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    STATE(21), 1,
      aux_sym_message_repeat1,
    ACTIONS(97), 3,
      sym__word,
      sym_user,
      sym_item,
  [408] = 2,
    STATE(127), 1,
      sym_change,
    ACTIONS(81), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [418] = 3,
    ACTIONS(99), 1,
      aux_sym_source_token1,
    STATE(21), 1,
      aux_sym_message_repeat1,
    ACTIONS(101), 3,
      sym__word,
      sym_user,
      sym_item,
  [430] = 4,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_source_token1,
    ACTIONS(108), 1,
      aux_sym_subject_token2,
    STATE(28), 1,
      aux_sym_subject_repeat1,
  [443] = 4,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(102), 1,
      sym__rebase_header,
  [456] = 3,
    ACTIONS(112), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [467] = 3,
    ACTIONS(117), 1,
      anon_sym_POUND2,
    STATE(33), 1,
      aux_sym_summary_repeat2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [478] = 4,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 1,
      aux_sym_source_token1,
    ACTIONS(123), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__comment_body_repeat1,
  [491] = 3,
    ACTIONS(127), 1,
      aux_sym_path_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    ACTIONS(125), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [502] = 4,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym_source_token1,
    ACTIONS(133), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [515] = 4,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_source_token1,
    ACTIONS(139), 1,
      aux_sym_subject_token2,
    STATE(29), 1,
      aux_sym_subject_repeat1,
  [528] = 3,
    ACTIONS(142), 1,
      anon_sym_POUND2,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [539] = 3,
    ACTIONS(146), 1,
      aux_sym_path_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    ACTIONS(144), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [550] = 4,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 1,
      aux_sym_source_token1,
    ACTIONS(153), 1,
      sym__word,
    STATE(32), 1,
      aux_sym__comment_body_repeat1,
  [563] = 3,
    ACTIONS(158), 1,
      anon_sym_POUND2,
    STATE(33), 1,
      aux_sym_summary_repeat2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [574] = 3,
    ACTIONS(161), 1,
      aux_sym_source_token1,
    ACTIONS(163), 1,
      aux_sym__rebase_summary_token1,
    STATE(56), 1,
      aux_sym__rebase_summary_repeat2,
  [584] = 3,
    ACTIONS(165), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(167), 1,
      anon_sym_rebasing,
    STATE(39), 1,
      aux_sym__rebase_summary_repeat2,
  [594] = 3,
    ACTIONS(93), 1,
      aux_sym_path_token1,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(95), 1,
      sym_path,
  [604] = 3,
    ACTIONS(144), 1,
      aux_sym_source_token1,
    ACTIONS(169), 1,
      aux_sym_path_token1,
    STATE(37), 1,
      aux_sym_path_repeat1,
  [614] = 1,
    ACTIONS(172), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [620] = 3,
    ACTIONS(174), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(176), 1,
      anon_sym_rebasing,
    STATE(48), 1,
      aux_sym__rebase_summary_repeat2,
  [630] = 3,
    ACTIONS(176), 1,
      anon_sym_rebasing,
    ACTIONS(178), 1,
      aux_sym__rebase_summary_token1,
    STATE(43), 1,
      aux_sym__rebase_summary_repeat2,
  [640] = 3,
    ACTIONS(167), 1,
      anon_sym_rebasing,
    ACTIONS(174), 1,
      aux_sym__rebase_summary_token1,
    STATE(48), 1,
      aux_sym__rebase_summary_repeat2,
  [650] = 3,
    ACTIONS(180), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(182), 1,
      anon_sym_rebasing,
    STATE(41), 1,
      aux_sym__rebase_summary_repeat2,
  [660] = 3,
    ACTIONS(174), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(184), 1,
      anon_sym_rebasing,
    STATE(48), 1,
      aux_sym__rebase_summary_repeat2,
  [670] = 1,
    ACTIONS(186), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [676] = 3,
    ACTIONS(188), 1,
      anon_sym_up,
    ACTIONS(190), 1,
      anon_sym_ahead,
    ACTIONS(192), 1,
      anon_sym_behind,
  [686] = 3,
    ACTIONS(194), 1,
      aux_sym_path_token1,
    STATE(27), 1,
      aux_sym_path_repeat1,
    STATE(77), 1,
      sym_path,
  [696] = 2,
    ACTIONS(198), 1,
      anon_sym_POUND2,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [704] = 3,
    ACTIONS(200), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(203), 1,
      anon_sym_rebasing,
    STATE(48), 1,
      aux_sym__rebase_summary_repeat2,
  [714] = 2,
    ACTIONS(207), 1,
      anon_sym_POUND2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [722] = 3,
    ACTIONS(93), 1,
      aux_sym_path_token1,
    STATE(52), 1,
      aux_sym_path_repeat1,
    STATE(126), 1,
      sym_path,
  [732] = 3,
    ACTIONS(151), 1,
      aux_sym_source_token1,
    ACTIONS(209), 1,
      sym__word,
    STATE(51), 1,
      aux_sym__comment_body_repeat1,
  [742] = 3,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    ACTIONS(212), 1,
      aux_sym_path_token1,
    STATE(37), 1,
      aux_sym_path_repeat1,
  [752] = 2,
    ACTIONS(216), 1,
      anon_sym_POUND2,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [760] = 3,
    ACTIONS(121), 1,
      aux_sym_source_token1,
    ACTIONS(218), 1,
      sym__word,
    STATE(51), 1,
      aux_sym__comment_body_repeat1,
  [770] = 2,
    ACTIONS(222), 1,
      anon_sym_POUND2,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [778] = 3,
    ACTIONS(203), 1,
      aux_sym_source_token1,
    ACTIONS(224), 1,
      aux_sym__rebase_summary_token1,
    STATE(56), 1,
      aux_sym__rebase_summary_repeat2,
  [788] = 1,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [793] = 2,
    ACTIONS(229), 1,
      aux_sym__rebase_summary_token1,
    STATE(34), 1,
      aux_sym__rebase_summary_repeat2,
  [800] = 2,
    ACTIONS(231), 1,
      anon_sym_POUND2,
    STATE(64), 1,
      aux_sym__rebase_summary_repeat1,
  [807] = 2,
    ACTIONS(233), 1,
      anon_sym_POUND2,
    STATE(30), 1,
      aux_sym_summary_repeat1,
  [814] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [819] = 1,
    ACTIONS(220), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [824] = 2,
    ACTIONS(237), 1,
      anon_sym_POUND2,
    STATE(63), 1,
      aux_sym__rebase_summary_repeat1,
  [831] = 2,
    ACTIONS(240), 1,
      anon_sym_POUND2,
    STATE(63), 1,
      aux_sym__rebase_summary_repeat1,
  [838] = 2,
    ACTIONS(240), 1,
      anon_sym_POUND2,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat1,
  [845] = 2,
    ACTIONS(242), 1,
      anon_sym_to,
    ACTIONS(244), 1,
      anon_sym_not,
  [852] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 1,
      aux_sym_source_token1,
  [859] = 1,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [864] = 1,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [869] = 2,
    ACTIONS(252), 1,
      anon_sym_POUND2,
    STATE(63), 1,
      aux_sym__rebase_summary_repeat1,
  [876] = 1,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [881] = 1,
    ACTIONS(254), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [886] = 1,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [891] = 2,
    ACTIONS(256), 1,
      anon_sym_POUND2,
    STATE(63), 1,
      aux_sym__rebase_summary_repeat1,
  [898] = 1,
    ACTIONS(258), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [903] = 1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [908] = 2,
    ACTIONS(260), 1,
      aux_sym_source_token1,
    ACTIONS(262), 1,
      anon_sym_DASH_GT,
  [915] = 2,
    ACTIONS(264), 1,
      anon_sym_POUND2,
    STATE(25), 1,
      aux_sym_summary_repeat2,
  [922] = 2,
    ACTIONS(266), 1,
      anon_sym_POUND2,
    STATE(70), 1,
      aux_sym__rebase_summary_repeat1,
  [929] = 1,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [934] = 1,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [938] = 1,
    ACTIONS(272), 1,
      sym_commit,
  [942] = 1,
    ACTIONS(274), 1,
      aux_sym_source_token1,
  [946] = 1,
    ACTIONS(276), 1,
      anon_sym_with,
  [950] = 1,
    ACTIONS(278), 1,
      sym_branch,
  [954] = 1,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
  [958] = 1,
    ACTIONS(282), 1,
      aux_sym_source_token1,
  [962] = 1,
    ACTIONS(284), 1,
      anon_sym_SQUOTE,
  [966] = 1,
    ACTIONS(286), 1,
      anon_sym_SQUOTE,
  [970] = 1,
    ACTIONS(288), 1,
      anon_sym_by,
  [974] = 1,
    ACTIONS(290), 1,
      anon_sym_POUND2,
  [978] = 1,
    ACTIONS(292), 1,
      sym_branch,
  [982] = 1,
    ACTIONS(294), 1,
      anon_sym_by,
  [986] = 1,
    ACTIONS(296), 1,
      aux_sym__rebase_header_token2,
  [990] = 1,
    ACTIONS(298), 1,
      aux_sym_source_token1,
  [994] = 1,
    ACTIONS(300), 1,
      anon_sym_SQUOTE_DOT,
  [998] = 1,
    ACTIONS(302), 1,
      aux_sym__rebase_header_token2,
  [1002] = 1,
    ACTIONS(304), 1,
      aux_sym__branch_declaration_token1,
  [1006] = 1,
    ACTIONS(306), 1,
      aux_sym__rebase_header_token1,
  [1010] = 1,
    ACTIONS(308), 1,
      aux_sym__rebase_header_token1,
  [1014] = 1,
    ACTIONS(310), 1,
      anon_sym_commands,
  [1018] = 1,
    ACTIONS(312), 1,
      aux_sym_source_token1,
  [1022] = 1,
    ACTIONS(314), 1,
      aux_sym__branch_declaration_token1,
  [1026] = 1,
    ACTIONS(316), 1,
      anon_sym_DOT,
  [1030] = 1,
    ACTIONS(318), 1,
      anon_sym_done,
  [1034] = 1,
    ACTIONS(320), 1,
      anon_sym_to,
  [1038] = 1,
    ACTIONS(322), 1,
      anon_sym_remaining,
  [1042] = 1,
    ACTIONS(324), 1,
      anon_sym_DOT,
  [1046] = 1,
    ACTIONS(326), 1,
      ts_builtin_sym_end,
  [1050] = 1,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
  [1054] = 1,
    ACTIONS(330), 1,
      anon_sym_do,
  [1058] = 1,
    ACTIONS(332), 1,
      anon_sym_DOT,
  [1062] = 1,
    ACTIONS(334), 1,
      sym_branch,
  [1066] = 1,
    ACTIONS(336), 1,
      anon_sym_SQUOTE,
  [1070] = 1,
    ACTIONS(338), 1,
      anon_sym_date,
  [1074] = 1,
    ACTIONS(340), 1,
      aux_sym__rebase_header_token2,
  [1078] = 1,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
  [1082] = 1,
    ACTIONS(344), 1,
      aux_sym_source_token1,
  [1086] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1090] = 1,
    ACTIONS(348), 1,
      aux_sym_source_token1,
  [1094] = 1,
    ACTIONS(350), 1,
      aux_sym_source_token1,
  [1098] = 1,
    ACTIONS(352), 1,
      aux_sym_source_token1,
  [1102] = 1,
    ACTIONS(354), 1,
      anon_sym_onto,
  [1106] = 1,
    ACTIONS(356), 1,
      aux_sym__rebase_header_token1,
  [1110] = 1,
    ACTIONS(358), 1,
      aux_sym__rebase_header_token2,
  [1114] = 1,
    ACTIONS(360), 1,
      aux_sym_source_token1,
  [1118] = 1,
    ACTIONS(362), 1,
      aux_sym_source_token1,
  [1122] = 1,
    ACTIONS(364), 1,
      anon_sym_POUND2,
  [1126] = 1,
    ACTIONS(366), 1,
      aux_sym_source_token1,
  [1130] = 1,
    ACTIONS(368), 1,
      anon_sym_COLON,
  [1134] = 1,
    ACTIONS(370), 1,
      anon_sym_done,
  [1138] = 1,
    ACTIONS(372), 1,
      anon_sym_remaining,
  [1142] = 1,
    ACTIONS(374), 1,
      anon_sym_SQUOTE,
  [1146] = 1,
    ACTIONS(376), 1,
      anon_sym_of,
  [1150] = 1,
    ACTIONS(378), 1,
      anon_sym_to,
  [1154] = 1,
    ACTIONS(380), 1,
      anon_sym_commit,
  [1158] = 1,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
  [1162] = 1,
    ACTIONS(384), 1,
      aux_sym__rebase_header_token1,
  [1166] = 1,
    ACTIONS(386), 1,
      anon_sym_are,
  [1170] = 1,
    ACTIONS(388), 1,
      anon_sym_SEMI,
  [1174] = 1,
    ACTIONS(390), 1,
      aux_sym_source_token1,
  [1178] = 1,
    ACTIONS(392), 1,
      anon_sym_COLON,
  [1182] = 1,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
  [1186] = 1,
    ACTIONS(396), 1,
      anon_sym_currently,
  [1190] = 1,
    ACTIONS(398), 1,
      anon_sym_are,
  [1194] = 1,
    ACTIONS(400), 1,
      sym_commit,
  [1198] = 1,
    ACTIONS(402), 1,
      aux_sym_source_token1,
  [1202] = 1,
    ACTIONS(404), 1,
      anon_sym_COLON,
  [1206] = 1,
    ACTIONS(406), 1,
      anon_sym_for,
  [1210] = 1,
    ACTIONS(408), 1,
      anon_sym_currently,
  [1214] = 1,
    ACTIONS(410), 1,
      anon_sym_are,
  [1218] = 1,
    ACTIONS(412), 1,
      aux_sym_source_token1,
  [1222] = 1,
    ACTIONS(414), 1,
      anon_sym_branch,
  [1226] = 1,
    ACTIONS(416), 1,
      anon_sym_committed,
  [1230] = 1,
    ACTIONS(418), 1,
      anon_sym_progress,
  [1234] = 1,
    ACTIONS(420), 1,
      anon_sym_currently,
  [1238] = 1,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
  [1242] = 1,
    ACTIONS(424), 1,
      anon_sym_branch,
  [1246] = 1,
    ACTIONS(426), 1,
      anon_sym_COLON,
  [1250] = 1,
    ACTIONS(428), 1,
      aux_sym_source_token1,
  [1254] = 1,
    ACTIONS(430), 1,
      sym_branch,
  [1258] = 1,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
  [1262] = 1,
    ACTIONS(434), 1,
      anon_sym_branch,
  [1266] = 1,
    ACTIONS(436), 1,
      anon_sym_at,
  [1270] = 1,
    ACTIONS(438), 1,
      anon_sym_SQUOTE,
  [1274] = 1,
    ACTIONS(440), 1,
      sym_branch,
  [1278] = 1,
    ACTIONS(442), 1,
      anon_sym_SQUOTE,
  [1282] = 1,
    ACTIONS(444), 1,
      anon_sym_branch,
  [1286] = 1,
    ACTIONS(446), 1,
      anon_sym_on,
  [1290] = 1,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
  [1294] = 1,
    ACTIONS(450), 1,
      sym_branch,
  [1298] = 1,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
  [1302] = 1,
    ACTIONS(454), 1,
      anon_sym_SQUOTE,
  [1306] = 1,
    ACTIONS(456), 1,
      anon_sym_on,
  [1310] = 1,
    ACTIONS(458), 1,
      anon_sym_SQUOTE,
  [1314] = 1,
    ACTIONS(460), 1,
      sym_branch,
  [1318] = 1,
    ACTIONS(462), 1,
      sym_commit,
  [1322] = 1,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [1326] = 1,
    ACTIONS(466), 1,
      anon_sym_on,
  [1330] = 1,
    ACTIONS(468), 1,
      anon_sym_SQUOTE,
  [1334] = 1,
    ACTIONS(470), 1,
      anon_sym_SQUOTE,
  [1338] = 1,
    ACTIONS(472), 1,
      sym_commit,
  [1342] = 1,
    ACTIONS(474), 1,
      anon_sym_SQUOTE,
  [1346] = 1,
    ACTIONS(476), 1,
      anon_sym_on,
  [1350] = 1,
    ACTIONS(478), 1,
      anon_sym_DOT,
  [1354] = 1,
    ACTIONS(480), 1,
      anon_sym_SQUOTE,
  [1358] = 1,
    ACTIONS(482), 1,
      sym_commit,
  [1362] = 1,
    ACTIONS(484), 1,
      anon_sym_SQUOTE,
  [1366] = 1,
    ACTIONS(486), 1,
      aux_sym_source_token1,
  [1370] = 1,
    ACTIONS(488), 1,
      anon_sym_DOT,
  [1374] = 1,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
  [1378] = 1,
    ACTIONS(492), 1,
      sym_commit,
  [1382] = 1,
    ACTIONS(494), 1,
      anon_sym_is,
  [1386] = 1,
    ACTIONS(496), 1,
      aux_sym_source_token1,
  [1390] = 1,
    ACTIONS(498), 1,
      anon_sym_DOT,
  [1394] = 1,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
  [1398] = 1,
    ACTIONS(502), 1,
      sym__word,
  [1402] = 1,
    ACTIONS(504), 1,
      anon_sym_staged,
  [1406] = 1,
    ACTIONS(506), 1,
      aux_sym_source_token1,
  [1410] = 1,
    ACTIONS(508), 1,
      anon_sym_DOT,
  [1414] = 1,
    ACTIONS(510), 1,
      anon_sym_be,
  [1418] = 1,
    ACTIONS(512), 1,
      anon_sym_in,
  [1422] = 1,
    ACTIONS(514), 1,
      aux_sym_source_token1,
  [1426] = 1,
    ACTIONS(516), 1,
      aux_sym_source_token1,
  [1430] = 1,
    ACTIONS(518), 1,
      aux_sym_source_token1,
  [1434] = 1,
    ACTIONS(520), 1,
      anon_sym_files,
  [1438] = 1,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [1442] = 1,
    ACTIONS(524), 1,
      anon_sym_detached,
  [1446] = 1,
    ACTIONS(526), 1,
      anon_sym_branch,
  [1450] = 1,
    ACTIONS(528), 1,
      anon_sym_branch,
  [1454] = 1,
    ACTIONS(530), 1,
      anon_sym_rebase,
  [1458] = 1,
    ACTIONS(532), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 202,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 268,
  [SMALL_STATE(13)] = 293,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 343,
  [SMALL_STATE(16)] = 357,
  [SMALL_STATE(17)] = 368,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 396,
  [SMALL_STATE(20)] = 408,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 443,
  [SMALL_STATE(24)] = 456,
  [SMALL_STATE(25)] = 467,
  [SMALL_STATE(26)] = 478,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 502,
  [SMALL_STATE(29)] = 515,
  [SMALL_STATE(30)] = 528,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 550,
  [SMALL_STATE(33)] = 563,
  [SMALL_STATE(34)] = 574,
  [SMALL_STATE(35)] = 584,
  [SMALL_STATE(36)] = 594,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 614,
  [SMALL_STATE(39)] = 620,
  [SMALL_STATE(40)] = 630,
  [SMALL_STATE(41)] = 640,
  [SMALL_STATE(42)] = 650,
  [SMALL_STATE(43)] = 660,
  [SMALL_STATE(44)] = 670,
  [SMALL_STATE(45)] = 676,
  [SMALL_STATE(46)] = 686,
  [SMALL_STATE(47)] = 696,
  [SMALL_STATE(48)] = 704,
  [SMALL_STATE(49)] = 714,
  [SMALL_STATE(50)] = 722,
  [SMALL_STATE(51)] = 732,
  [SMALL_STATE(52)] = 742,
  [SMALL_STATE(53)] = 752,
  [SMALL_STATE(54)] = 760,
  [SMALL_STATE(55)] = 770,
  [SMALL_STATE(56)] = 778,
  [SMALL_STATE(57)] = 788,
  [SMALL_STATE(58)] = 793,
  [SMALL_STATE(59)] = 800,
  [SMALL_STATE(60)] = 807,
  [SMALL_STATE(61)] = 814,
  [SMALL_STATE(62)] = 819,
  [SMALL_STATE(63)] = 824,
  [SMALL_STATE(64)] = 831,
  [SMALL_STATE(65)] = 838,
  [SMALL_STATE(66)] = 845,
  [SMALL_STATE(67)] = 852,
  [SMALL_STATE(68)] = 859,
  [SMALL_STATE(69)] = 864,
  [SMALL_STATE(70)] = 869,
  [SMALL_STATE(71)] = 876,
  [SMALL_STATE(72)] = 881,
  [SMALL_STATE(73)] = 886,
  [SMALL_STATE(74)] = 891,
  [SMALL_STATE(75)] = 898,
  [SMALL_STATE(76)] = 903,
  [SMALL_STATE(77)] = 908,
  [SMALL_STATE(78)] = 915,
  [SMALL_STATE(79)] = 922,
  [SMALL_STATE(80)] = 929,
  [SMALL_STATE(81)] = 934,
  [SMALL_STATE(82)] = 938,
  [SMALL_STATE(83)] = 942,
  [SMALL_STATE(84)] = 946,
  [SMALL_STATE(85)] = 950,
  [SMALL_STATE(86)] = 954,
  [SMALL_STATE(87)] = 958,
  [SMALL_STATE(88)] = 962,
  [SMALL_STATE(89)] = 966,
  [SMALL_STATE(90)] = 970,
  [SMALL_STATE(91)] = 974,
  [SMALL_STATE(92)] = 978,
  [SMALL_STATE(93)] = 982,
  [SMALL_STATE(94)] = 986,
  [SMALL_STATE(95)] = 990,
  [SMALL_STATE(96)] = 994,
  [SMALL_STATE(97)] = 998,
  [SMALL_STATE(98)] = 1002,
  [SMALL_STATE(99)] = 1006,
  [SMALL_STATE(100)] = 1010,
  [SMALL_STATE(101)] = 1014,
  [SMALL_STATE(102)] = 1018,
  [SMALL_STATE(103)] = 1022,
  [SMALL_STATE(104)] = 1026,
  [SMALL_STATE(105)] = 1030,
  [SMALL_STATE(106)] = 1034,
  [SMALL_STATE(107)] = 1038,
  [SMALL_STATE(108)] = 1042,
  [SMALL_STATE(109)] = 1046,
  [SMALL_STATE(110)] = 1050,
  [SMALL_STATE(111)] = 1054,
  [SMALL_STATE(112)] = 1058,
  [SMALL_STATE(113)] = 1062,
  [SMALL_STATE(114)] = 1066,
  [SMALL_STATE(115)] = 1070,
  [SMALL_STATE(116)] = 1074,
  [SMALL_STATE(117)] = 1078,
  [SMALL_STATE(118)] = 1082,
  [SMALL_STATE(119)] = 1086,
  [SMALL_STATE(120)] = 1090,
  [SMALL_STATE(121)] = 1094,
  [SMALL_STATE(122)] = 1098,
  [SMALL_STATE(123)] = 1102,
  [SMALL_STATE(124)] = 1106,
  [SMALL_STATE(125)] = 1110,
  [SMALL_STATE(126)] = 1114,
  [SMALL_STATE(127)] = 1118,
  [SMALL_STATE(128)] = 1122,
  [SMALL_STATE(129)] = 1126,
  [SMALL_STATE(130)] = 1130,
  [SMALL_STATE(131)] = 1134,
  [SMALL_STATE(132)] = 1138,
  [SMALL_STATE(133)] = 1142,
  [SMALL_STATE(134)] = 1146,
  [SMALL_STATE(135)] = 1150,
  [SMALL_STATE(136)] = 1154,
  [SMALL_STATE(137)] = 1158,
  [SMALL_STATE(138)] = 1162,
  [SMALL_STATE(139)] = 1166,
  [SMALL_STATE(140)] = 1170,
  [SMALL_STATE(141)] = 1174,
  [SMALL_STATE(142)] = 1178,
  [SMALL_STATE(143)] = 1182,
  [SMALL_STATE(144)] = 1186,
  [SMALL_STATE(145)] = 1190,
  [SMALL_STATE(146)] = 1194,
  [SMALL_STATE(147)] = 1198,
  [SMALL_STATE(148)] = 1202,
  [SMALL_STATE(149)] = 1206,
  [SMALL_STATE(150)] = 1210,
  [SMALL_STATE(151)] = 1214,
  [SMALL_STATE(152)] = 1218,
  [SMALL_STATE(153)] = 1222,
  [SMALL_STATE(154)] = 1226,
  [SMALL_STATE(155)] = 1230,
  [SMALL_STATE(156)] = 1234,
  [SMALL_STATE(157)] = 1238,
  [SMALL_STATE(158)] = 1242,
  [SMALL_STATE(159)] = 1246,
  [SMALL_STATE(160)] = 1250,
  [SMALL_STATE(161)] = 1254,
  [SMALL_STATE(162)] = 1258,
  [SMALL_STATE(163)] = 1262,
  [SMALL_STATE(164)] = 1266,
  [SMALL_STATE(165)] = 1270,
  [SMALL_STATE(166)] = 1274,
  [SMALL_STATE(167)] = 1278,
  [SMALL_STATE(168)] = 1282,
  [SMALL_STATE(169)] = 1286,
  [SMALL_STATE(170)] = 1290,
  [SMALL_STATE(171)] = 1294,
  [SMALL_STATE(172)] = 1298,
  [SMALL_STATE(173)] = 1302,
  [SMALL_STATE(174)] = 1306,
  [SMALL_STATE(175)] = 1310,
  [SMALL_STATE(176)] = 1314,
  [SMALL_STATE(177)] = 1318,
  [SMALL_STATE(178)] = 1322,
  [SMALL_STATE(179)] = 1326,
  [SMALL_STATE(180)] = 1330,
  [SMALL_STATE(181)] = 1334,
  [SMALL_STATE(182)] = 1338,
  [SMALL_STATE(183)] = 1342,
  [SMALL_STATE(184)] = 1346,
  [SMALL_STATE(185)] = 1350,
  [SMALL_STATE(186)] = 1354,
  [SMALL_STATE(187)] = 1358,
  [SMALL_STATE(188)] = 1362,
  [SMALL_STATE(189)] = 1366,
  [SMALL_STATE(190)] = 1370,
  [SMALL_STATE(191)] = 1374,
  [SMALL_STATE(192)] = 1378,
  [SMALL_STATE(193)] = 1382,
  [SMALL_STATE(194)] = 1386,
  [SMALL_STATE(195)] = 1390,
  [SMALL_STATE(196)] = 1394,
  [SMALL_STATE(197)] = 1398,
  [SMALL_STATE(198)] = 1402,
  [SMALL_STATE(199)] = 1406,
  [SMALL_STATE(200)] = 1410,
  [SMALL_STATE(201)] = 1414,
  [SMALL_STATE(202)] = 1418,
  [SMALL_STATE(203)] = 1422,
  [SMALL_STATE(204)] = 1426,
  [SMALL_STATE(205)] = 1430,
  [SMALL_STATE(206)] = 1434,
  [SMALL_STATE(207)] = 1438,
  [SMALL_STATE(208)] = 1442,
  [SMALL_STATE(209)] = 1446,
  [SMALL_STATE(210)] = 1450,
  [SMALL_STATE(211)] = 1454,
  [SMALL_STATE(212)] = 1458,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(76),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(20),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(29),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(31),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(32),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(50),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rebase_command, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(48),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(51),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(56),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(9),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [326] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
