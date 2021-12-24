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
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 32
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
  anon_sym_rebasing = 17,
  anon_sym_branch = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_on = 20,
  anon_sym_DOT = 21,
  anon_sym_Last = 22,
  anon_sym_command = 23,
  anon_sym_done = 24,
  anon_sym_LPAREN = 25,
  aux_sym__rebase_header_token1 = 26,
  anon_sym_RPAREN = 27,
  anon_sym_COLON = 28,
  anon_sym_Next = 29,
  anon_sym_commands = 30,
  anon_sym_to = 31,
  anon_sym_do = 32,
  anon_sym_remaining = 33,
  anon_sym_Changes = 34,
  anon_sym_be = 35,
  anon_sym_committed = 36,
  anon_sym_not = 37,
  anon_sym_staged = 38,
  anon_sym_for = 39,
  anon_sym_commit = 40,
  anon_sym_On = 41,
  anon_sym_Your = 42,
  anon_sym_is = 43,
  anon_sym_up = 44,
  anon_sym_date = 45,
  anon_sym_with = 46,
  anon_sym_SQUOTE_DOT = 47,
  anon_sym_ahead = 48,
  anon_sym_of = 49,
  anon_sym_behind = 50,
  anon_sym_by = 51,
  aux_sym__branch_declaration_token1 = 52,
  anon_sym_HEAD = 53,
  anon_sym_detached = 54,
  anon_sym_at = 55,
  anon_sym_Conflicts = 56,
  anon_sym_Untracked = 57,
  anon_sym_files = 58,
  anon_sym_newfile = 59,
  anon_sym_modified = 60,
  anon_sym_renamed = 61,
  anon_sym_deleted = 62,
  anon_sym_DASH_GT = 63,
  sym_commit = 64,
  sym__word = 65,
  sym_branch = 66,
  anon_sym_pick = 67,
  anon_sym_edit = 68,
  anon_sym_squash = 69,
  anon_sym_merge = 70,
  anon_sym_fixup = 71,
  anon_sym_drop = 72,
  anon_sym_reword = 73,
  anon_sym_exec = 74,
  anon_sym_label = 75,
  anon_sym_reset = 76,
  aux_sym_rebase_command_token1 = 77,
  aux_sym_path_token1 = 78,
  sym_user = 79,
  sym_item = 80,
  sym_source = 81,
  sym__body_line = 82,
  sym_subject = 83,
  sym_message = 84,
  sym_comment = 85,
  sym__comment_body = 86,
  sym__rebase_summary = 87,
  sym_summary = 88,
  sym__rebase_header = 89,
  sym__change_header = 90,
  sym__branch_declaration = 91,
  sym_header = 92,
  sym_change = 93,
  sym_rebase_command = 94,
  sym_path = 95,
  aux_sym_source_repeat1 = 96,
  aux_sym_subject_repeat1 = 97,
  aux_sym_message_repeat1 = 98,
  aux_sym__comment_body_repeat1 = 99,
  aux_sym__rebase_summary_repeat1 = 100,
  aux_sym_summary_repeat1 = 101,
  aux_sym_summary_repeat2 = 102,
  aux_sym_rebase_command_repeat1 = 103,
  aux_sym_path_repeat1 = 104,
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
  [anon_sym_rebasing] = "rebasing",
  [anon_sym_branch] = "branch",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_on] = "on",
  [anon_sym_DOT] = ".",
  [anon_sym_Last] = "Last",
  [anon_sym_command] = "command",
  [anon_sym_done] = "done",
  [anon_sym_LPAREN] = "(",
  [aux_sym__rebase_header_token1] = "_rebase_header_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_Next] = "Next",
  [anon_sym_commands] = "commands",
  [anon_sym_to] = "to",
  [anon_sym_do] = "do",
  [anon_sym_remaining] = "remaining",
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
  [aux_sym_rebase_command_token1] = "rebase_command_token1",
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
  [sym_summary] = "summary",
  [sym__rebase_header] = "summary",
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
  [aux_sym_summary_repeat1] = "summary_repeat1",
  [aux_sym_summary_repeat2] = "summary_repeat2",
  [aux_sym_rebase_command_repeat1] = "rebase_command_repeat1",
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
  [anon_sym_rebasing] = anon_sym_rebasing,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_Last] = anon_sym_Last,
  [anon_sym_command] = anon_sym_command,
  [anon_sym_done] = anon_sym_done,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__rebase_header_token1] = aux_sym__rebase_header_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_Next] = anon_sym_Next,
  [anon_sym_commands] = anon_sym_commands,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_remaining] = anon_sym_remaining,
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
  [aux_sym_rebase_command_token1] = aux_sym_rebase_command_token1,
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
  [sym_summary] = sym_summary,
  [sym__rebase_header] = sym_summary,
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
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
  [aux_sym_summary_repeat2] = aux_sym_summary_repeat2,
  [aux_sym_rebase_command_repeat1] = aux_sym_rebase_command_repeat1,
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
  [anon_sym_command] = {
    .visible = true,
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
  [aux_sym__rebase_header_token1] = {
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
  [anon_sym_commands] = {
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
  [aux_sym_rebase_command_token1] = {
    .visible = false,
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
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [sym__rebase_header] = {
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
  [aux_sym_summary_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rebase_command_repeat1] = {
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
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(338);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')') ADVANCE(365);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == 'Y') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(149);
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
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(328);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(440);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(499);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'H') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'Y') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(441);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(442);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(497);
      if (lookahead != 0) ADVANCE(498);
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
      if (lookahead == ' ') ADVANCE(300);
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
      if (lookahead == ' ') ADVANCE(289);
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
      if (lookahead == ' ') ADVANCE(257);
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
      if (lookahead == '.') ADVANCE(388);
      END_STATE();
    case 31:
      if (lookahead == '8') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == '>') ADVANCE(405);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(395);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(229);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(298);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(219);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'i') ADVANCE(277);
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
      if (lookahead == 'c') ADVANCE(494);
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
      if (lookahead == 'c') ADVANCE(285);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(70)
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(389);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(391);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(493);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(404);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(403);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(396);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(402);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(399);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(386);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(490);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(342);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(401);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
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
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(249);
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
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 131:
      if (lookahead == 'f') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(305);
      END_STATE();
    case 134:
      if (lookahead == 'f') ADVANCE(175);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(161);
      END_STATE();
    case 136:
      if (lookahead == 'g') ADVANCE(353);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(372);
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
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 144:
      if (lookahead == 'h') ADVANCE(387);
      END_STATE();
    case 145:
      if (lookahead == 'h') ADVANCE(354);
      END_STATE();
    case 146:
      if (lookahead == 'h') ADVANCE(489);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 't') ADVANCE(397);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
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
      if (lookahead == 'i') ADVANCE(295);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
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
      if (lookahead == 'i') ADVANCE(270);
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
      if (lookahead == 'i') ADVANCE(273);
      END_STATE();
    case 168:
      if (lookahead == 'i') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
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
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(290);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 176:
      if (lookahead == 'k') ADVANCE(487);
      END_STATE();
    case 177:
      if (lookahead == 'k') ADVANCE(124);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(495);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(304);
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
      if (lookahead == 'x') ADVANCE(293);
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
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(344);
      if (lookahead == 's') ADVANCE(384);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(343);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(356);
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
      if (lookahead == 'n') ADVANCE(279);
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
      if (lookahead == 'n') ADVANCE(280);
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
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(251);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(369);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(301);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(297);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(385);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(492);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(491);
      END_STATE();
    case 245:
      if (lookahead == 'q') ADVANCE(294);
      END_STATE();
    case 246:
      if (lookahead == 'q') ADVANCE(294);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(373);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(345);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(398);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(230);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(394);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(253);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(350);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(349);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 295:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 296:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 297:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 298:
      if (lookahead == 'v') ADVANCE(117);
      END_STATE();
    case 299:
      if (lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(166);
      END_STATE();
    case 301:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(293);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(272);
      END_STATE();
    case 304:
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(282);
      END_STATE();
    case 307:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(307)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(486);
      END_STATE();
    case 308:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(308)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(484);
      END_STATE();
    case 309:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 310:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(309);
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
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(503);
      END_STATE();
    case 316:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(337);
      END_STATE();
    case 317:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 318:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '\'') ADVANCE(355);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')') ADVANCE(365);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(358);
      if (lookahead == ':') ADVANCE(366);
      if (lookahead == ';') ADVANCE(346);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead == 'H') ADVANCE(37);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(199);
      if (lookahead == 'U') ADVANCE(200);
      if (lookahead == 'Y') ADVANCE(221);
      if (lookahead == 'a') ADVANCE(149);
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
          lookahead == ' ') SKIP(318)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 319:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead == 'Y') ADVANCE(228);
      if (lookahead == 'a') ADVANCE(150);
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
          lookahead == ' ') SKIP(319)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      END_STATE();
    case 320:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(339);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0) ADVANCE(329);
      END_STATE();
    case 321:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(340);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(322)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(334);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 322:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(322)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(334);
      if (lookahead != 0) ADVANCE(336);
      END_STATE();
    case 323:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'H') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'Y') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(323)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(441);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 324:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(324)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(501);
      if (lookahead != 0) ADVANCE(502);
      END_STATE();
    case 325:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(325)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(442);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 326:
      if (eof) ADVANCE(327);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0) ADVANCE(332);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '#') ADVANCE(333);
      if (lookahead == '@') ADVANCE(335);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '@') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(336);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_You);
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_rebasing);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_command);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_command);
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_be);
      if (lookahead == 'h') ADVANCE(164);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_commit);
      if (lookahead == 's') ADVANCE(393);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
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
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(483);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(440);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(460);
      if (lookahead == 'H') ADVANCE(446);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == 'U') ADVANCE(466);
      if (lookahead == 'Y') ADVANCE(470);
      if (lookahead == 'i') ADVANCE(469);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(441);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(442);
      if (lookahead != 0) ADVANCE(484);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(503);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(448);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(308)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(484);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(486);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_rebase_command_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_rebase_command_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(500);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(502);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(502);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(502);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(502);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 320},
  [2] = {.lex_state = 323},
  [3] = {.lex_state = 323},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 319},
  [7] = {.lex_state = 319},
  [8] = {.lex_state = 319},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 321},
  [11] = {.lex_state = 321},
  [12] = {.lex_state = 321},
  [13] = {.lex_state = 321},
  [14] = {.lex_state = 321},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 321},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 324},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 319},
  [23] = {.lex_state = 326},
  [24] = {.lex_state = 325},
  [25] = {.lex_state = 319},
  [26] = {.lex_state = 326},
  [27] = {.lex_state = 326},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 325},
  [30] = {.lex_state = 319},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 319},
  [33] = {.lex_state = 325},
  [34] = {.lex_state = 319},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 324},
  [37] = {.lex_state = 324},
  [38] = {.lex_state = 319},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 324},
  [41] = {.lex_state = 319},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 319},
  [44] = {.lex_state = 319},
  [45] = {.lex_state = 319},
  [46] = {.lex_state = 325},
  [47] = {.lex_state = 324},
  [48] = {.lex_state = 324},
  [49] = {.lex_state = 319},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 319},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 319},
  [55] = {.lex_state = 319},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 319},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 319},
  [62] = {.lex_state = 319},
  [63] = {.lex_state = 319},
  [64] = {.lex_state = 319},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 319},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 319},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 307},
  [81] = {.lex_state = 319},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 307},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 319},
  [91] = {.lex_state = 307},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 319},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 319},
  [98] = {.lex_state = 60},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 319},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 319},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 60},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 319},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 319},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 319},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 70},
  [127] = {.lex_state = 319},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 60},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 308},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 307},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 307},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 60},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 307},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 60},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 319},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 60},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 319},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 319},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 60},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 319},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
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
    [anon_sym_command] = ACTIONS(1),
    [anon_sym_done] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [aux_sym__rebase_header_token1] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_Next] = ACTIONS(1),
    [anon_sym_commands] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_remaining] = ACTIONS(1),
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
    [sym_source] = STATE(100),
    [sym_subject] = STATE(71),
    [sym_comment] = STATE(71),
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
    STATE(24), 1,
      aux_sym__comment_body_repeat1,
    STATE(183), 1,
      sym_header,
    STATE(185), 1,
      sym__change_header,
    STATE(66), 4,
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
    STATE(46), 1,
      aux_sym__comment_body_repeat1,
    STATE(183), 1,
      sym_header,
    STATE(185), 1,
      sym__change_header,
    STATE(66), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [89] = 5,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    STATE(116), 1,
      sym__rebase_header,
    STATE(117), 1,
      sym_rebase_command,
    ACTIONS(39), 10,
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
  [114] = 5,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    STATE(117), 1,
      sym_rebase_command,
    STATE(125), 1,
      sym__rebase_header,
    ACTIONS(39), 10,
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
  [139] = 3,
    ACTIONS(41), 1,
      anon_sym_You,
    STATE(117), 1,
      sym_rebase_command,
    ACTIONS(39), 10,
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
  [158] = 3,
    ACTIONS(43), 1,
      anon_sym_You,
    STATE(117), 1,
      sym_rebase_command,
    ACTIONS(39), 10,
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
  [177] = 3,
    ACTIONS(45), 1,
      anon_sym_You,
    STATE(117), 1,
      sym_rebase_command,
    ACTIONS(39), 10,
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
  [196] = 2,
    STATE(117), 1,
      sym_rebase_command,
    ACTIONS(39), 10,
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
  [212] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(12), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(192), 2,
      sym_message,
      sym_comment,
  [237] = 7,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_POUND,
    ACTIONS(60), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(192), 2,
      sym_message,
      sym_comment,
  [262] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      aux_sym_source_token1,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(192), 2,
      sym_message,
      sym_comment,
  [287] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_source_token1,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(14), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(192), 2,
      sym_message,
      sym_comment,
  [312] = 7,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(53), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      aux_sym_source_token1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      sym_user,
    STATE(11), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(192), 2,
      sym_message,
      sym_comment,
  [337] = 3,
    STATE(133), 1,
      sym_change,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    ACTIONS(79), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [351] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 5,
      aux_sym_source_token1,
      aux_sym_message_token1,
      aux_sym_comment_token1,
      anon_sym_POUND,
      sym_user,
  [362] = 3,
    ACTIONS(85), 1,
      aux_sym_source_token1,
    STATE(21), 1,
      aux_sym_message_repeat1,
    ACTIONS(87), 3,
      sym__word,
      sym_user,
      sym_item,
  [374] = 5,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_source_token1,
    ACTIONS(91), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_path,
  [390] = 3,
    ACTIONS(93), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(95), 3,
      sym__word,
      sym_user,
      sym_item,
  [402] = 2,
    STATE(133), 1,
      sym_change,
    ACTIONS(79), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [412] = 3,
    ACTIONS(98), 1,
      aux_sym_source_token1,
    STATE(19), 1,
      aux_sym_message_repeat1,
    ACTIONS(100), 3,
      sym__word,
      sym_user,
      sym_item,
  [424] = 3,
    ACTIONS(104), 1,
      anon_sym_POUND2,
    STATE(22), 1,
      aux_sym_summary_repeat2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [435] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_source_token1,
    ACTIONS(111), 1,
      aux_sym_subject_token2,
    STATE(26), 1,
      aux_sym_subject_repeat1,
  [448] = 4,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_source_token1,
    ACTIONS(117), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__comment_body_repeat1,
  [461] = 3,
    ACTIONS(121), 1,
      anon_sym_POUND2,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [472] = 4,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_source_token1,
    ACTIONS(127), 1,
      aux_sym_subject_token2,
    STATE(27), 1,
      aux_sym_subject_repeat1,
  [485] = 4,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym_source_token1,
    ACTIONS(133), 1,
      aux_sym_subject_token2,
    STATE(27), 1,
      aux_sym_subject_repeat1,
  [498] = 3,
    ACTIONS(138), 1,
      aux_sym_path_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    ACTIONS(136), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [509] = 4,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_source_token1,
    ACTIONS(144), 1,
      sym__word,
    STATE(29), 1,
      aux_sym__comment_body_repeat1,
  [522] = 3,
    ACTIONS(149), 1,
      anon_sym_POUND2,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [533] = 3,
    ACTIONS(154), 1,
      aux_sym_path_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    ACTIONS(152), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [544] = 3,
    ACTIONS(157), 1,
      anon_sym_POUND2,
    STATE(22), 1,
      aux_sym_summary_repeat2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [555] = 3,
    ACTIONS(142), 1,
      aux_sym_source_token1,
    ACTIONS(159), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__comment_body_repeat1,
  [565] = 1,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [571] = 3,
    ACTIONS(164), 1,
      aux_sym_source_token1,
    ACTIONS(166), 1,
      aux_sym_rebase_command_token1,
    STATE(35), 1,
      aux_sym_rebase_command_repeat1,
  [581] = 3,
    ACTIONS(91), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(94), 1,
      sym_path,
  [591] = 3,
    ACTIONS(169), 1,
      aux_sym_path_token1,
    STATE(28), 1,
      aux_sym_path_repeat1,
    STATE(70), 1,
      sym_path,
  [601] = 2,
    ACTIONS(173), 1,
      anon_sym_POUND2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [609] = 3,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    STATE(99), 1,
      sym__rebase_header,
  [619] = 3,
    ACTIONS(136), 1,
      aux_sym_source_token1,
    ACTIONS(175), 1,
      aux_sym_path_token1,
    STATE(48), 1,
      aux_sym_path_repeat1,
  [629] = 2,
    ACTIONS(179), 1,
      anon_sym_POUND2,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [637] = 3,
    ACTIONS(181), 1,
      aux_sym_source_token1,
    ACTIONS(183), 1,
      aux_sym_rebase_command_token1,
    STATE(35), 1,
      aux_sym_rebase_command_repeat1,
  [647] = 3,
    ACTIONS(185), 1,
      anon_sym_up,
    ACTIONS(187), 1,
      anon_sym_ahead,
    ACTIONS(189), 1,
      anon_sym_behind,
  [657] = 2,
    ACTIONS(193), 1,
      anon_sym_POUND2,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [665] = 1,
    ACTIONS(195), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [671] = 3,
    ACTIONS(115), 1,
      aux_sym_source_token1,
    ACTIONS(197), 1,
      sym__word,
    STATE(33), 1,
      aux_sym__comment_body_repeat1,
  [681] = 3,
    ACTIONS(91), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_path,
  [691] = 3,
    ACTIONS(152), 1,
      aux_sym_source_token1,
    ACTIONS(199), 1,
      aux_sym_path_token1,
    STATE(48), 1,
      aux_sym_path_repeat1,
  [701] = 2,
    ACTIONS(202), 1,
      anon_sym_POUND2,
    STATE(25), 1,
      aux_sym_summary_repeat1,
  [708] = 1,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [713] = 2,
    ACTIONS(206), 1,
      anon_sym_POUND2,
    STATE(62), 1,
      aux_sym__rebase_summary_repeat1,
  [720] = 2,
    ACTIONS(208), 1,
      aux_sym_rebase_command_token1,
    STATE(42), 1,
      aux_sym_rebase_command_repeat1,
  [727] = 1,
    ACTIONS(210), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [732] = 2,
    ACTIONS(212), 1,
      anon_sym_POUND2,
    STATE(55), 1,
      aux_sym__rebase_summary_repeat1,
  [739] = 2,
    ACTIONS(214), 1,
      anon_sym_POUND2,
    STATE(55), 1,
      aux_sym__rebase_summary_repeat1,
  [746] = 1,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [751] = 2,
    ACTIONS(219), 1,
      anon_sym_POUND2,
    STATE(54), 1,
      aux_sym__rebase_summary_repeat1,
  [758] = 1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [763] = 1,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [768] = 1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [773] = 2,
    ACTIONS(225), 1,
      anon_sym_POUND2,
    STATE(32), 1,
      aux_sym_summary_repeat2,
  [780] = 2,
    ACTIONS(227), 1,
      anon_sym_POUND2,
    STATE(55), 1,
      aux_sym__rebase_summary_repeat1,
  [787] = 2,
    ACTIONS(227), 1,
      anon_sym_POUND2,
    STATE(64), 1,
      aux_sym__rebase_summary_repeat1,
  [794] = 2,
    ACTIONS(229), 1,
      anon_sym_POUND2,
    STATE(55), 1,
      aux_sym__rebase_summary_repeat1,
  [801] = 1,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [806] = 1,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [811] = 1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [816] = 1,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [821] = 2,
    ACTIONS(235), 1,
      anon_sym_to,
    ACTIONS(237), 1,
      anon_sym_not,
  [828] = 2,
    ACTIONS(239), 1,
      aux_sym_source_token1,
    ACTIONS(241), 1,
      anon_sym_DASH_GT,
  [835] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      aux_sym_source_token1,
  [842] = 1,
    ACTIONS(245), 1,
      aux_sym__branch_declaration_token1,
  [846] = 1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [850] = 1,
    ACTIONS(249), 1,
      aux_sym_source_token1,
  [854] = 1,
    ACTIONS(251), 1,
      anon_sym_onto,
  [858] = 1,
    ACTIONS(253), 1,
      aux_sym_source_token1,
  [862] = 1,
    ACTIONS(255), 1,
      anon_sym_COLON,
  [866] = 1,
    ACTIONS(257), 1,
      anon_sym_date,
  [870] = 1,
    ACTIONS(259), 1,
      anon_sym_SQUOTE,
  [874] = 1,
    ACTIONS(261), 1,
      sym_branch,
  [878] = 1,
    ACTIONS(263), 1,
      sym_commit,
  [882] = 1,
    ACTIONS(265), 1,
      aux_sym_source_token1,
  [886] = 1,
    ACTIONS(267), 1,
      anon_sym_with,
  [890] = 1,
    ACTIONS(269), 1,
      sym_branch,
  [894] = 1,
    ACTIONS(271), 1,
      anon_sym_SQUOTE,
  [898] = 1,
    ACTIONS(273), 1,
      aux_sym_source_token1,
  [902] = 1,
    ACTIONS(275), 1,
      anon_sym_SQUOTE,
  [906] = 1,
    ACTIONS(277), 1,
      anon_sym_SQUOTE,
  [910] = 1,
    ACTIONS(279), 1,
      anon_sym_by,
  [914] = 1,
    ACTIONS(281), 1,
      anon_sym_POUND2,
  [918] = 1,
    ACTIONS(283), 1,
      sym_branch,
  [922] = 1,
    ACTIONS(285), 1,
      anon_sym_by,
  [926] = 1,
    ACTIONS(287), 1,
      aux_sym__rebase_header_token1,
  [930] = 1,
    ACTIONS(289), 1,
      aux_sym_source_token1,
  [934] = 1,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_DOT,
  [938] = 1,
    ACTIONS(293), 1,
      aux_sym__rebase_header_token1,
  [942] = 1,
    ACTIONS(295), 1,
      anon_sym_command,
  [946] = 1,
    ACTIONS(297), 1,
      anon_sym_commands,
  [950] = 1,
    ACTIONS(299), 1,
      aux_sym_source_token1,
  [954] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [958] = 1,
    ACTIONS(303), 1,
      aux_sym__branch_declaration_token1,
  [962] = 1,
    ACTIONS(305), 1,
      anon_sym_DOT,
  [966] = 1,
    ACTIONS(307), 1,
      anon_sym_done,
  [970] = 1,
    ACTIONS(309), 1,
      anon_sym_to,
  [974] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON,
  [978] = 1,
    ACTIONS(313), 1,
      anon_sym_DOT,
  [982] = 1,
    ACTIONS(315), 1,
      anon_sym_SQUOTE,
  [986] = 1,
    ACTIONS(317), 1,
      anon_sym_LPAREN,
  [990] = 1,
    ACTIONS(319), 1,
      anon_sym_do,
  [994] = 1,
    ACTIONS(321), 1,
      anon_sym_of,
  [998] = 1,
    ACTIONS(323), 1,
      anon_sym_to,
  [1002] = 1,
    ACTIONS(325), 1,
      anon_sym_commit,
  [1006] = 1,
    ACTIONS(327), 1,
      aux_sym__rebase_header_token1,
  [1010] = 1,
    ACTIONS(329), 1,
      anon_sym_LPAREN,
  [1014] = 1,
    ACTIONS(331), 1,
      anon_sym_COLON,
  [1018] = 1,
    ACTIONS(333), 1,
      aux_sym_source_token1,
  [1022] = 1,
    ACTIONS(335), 1,
      aux_sym_source_token1,
  [1026] = 1,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [1030] = 1,
    ACTIONS(339), 1,
      aux_sym_source_token1,
  [1034] = 1,
    ACTIONS(341), 1,
      anon_sym_command,
  [1038] = 1,
    ACTIONS(343), 1,
      aux_sym__rebase_header_token1,
  [1042] = 1,
    ACTIONS(345), 1,
      sym_commit,
  [1046] = 1,
    ACTIONS(347), 1,
      anon_sym_for,
  [1050] = 1,
    ACTIONS(349), 1,
      anon_sym_POUND2,
  [1054] = 1,
    ACTIONS(351), 1,
      aux_sym_source_token1,
  [1058] = 1,
    ACTIONS(353), 1,
      anon_sym_committed,
  [1062] = 1,
    ACTIONS(355), 1,
      anon_sym_done,
  [1066] = 1,
    ACTIONS(357), 1,
      anon_sym_remaining,
  [1070] = 1,
    ACTIONS(359), 1,
      anon_sym_progress,
  [1074] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1078] = 1,
    ACTIONS(363), 1,
      aux_sym_source_token1,
  [1082] = 1,
    ACTIONS(365), 1,
      anon_sym_at,
  [1086] = 1,
    ACTIONS(367), 1,
      aux_sym_source_token1,
  [1090] = 1,
    ACTIONS(369), 1,
      anon_sym_commands,
  [1094] = 1,
    ACTIONS(371), 1,
      anon_sym_are,
  [1098] = 1,
    ACTIONS(373), 1,
      anon_sym_is,
  [1102] = 1,
    ACTIONS(375), 1,
      sym__word,
  [1106] = 1,
    ACTIONS(377), 1,
      anon_sym_COLON,
  [1110] = 1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [1114] = 1,
    ACTIONS(381), 1,
      anon_sym_currently,
  [1118] = 1,
    ACTIONS(383), 1,
      anon_sym_are,
  [1122] = 1,
    ACTIONS(385), 1,
      anon_sym_staged,
  [1126] = 1,
    ACTIONS(387), 1,
      aux_sym_source_token1,
  [1130] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [1134] = 1,
    ACTIONS(391), 1,
      anon_sym_rebasing,
  [1138] = 1,
    ACTIONS(393), 1,
      anon_sym_currently,
  [1142] = 1,
    ACTIONS(395), 1,
      anon_sym_are,
  [1146] = 1,
    ACTIONS(397), 1,
      aux_sym_source_token1,
  [1150] = 1,
    ACTIONS(399), 1,
      anon_sym_branch,
  [1154] = 1,
    ACTIONS(401), 1,
      anon_sym_rebasing,
  [1158] = 1,
    ACTIONS(403), 1,
      anon_sym_currently,
  [1162] = 1,
    ACTIONS(405), 1,
      anon_sym_SQUOTE,
  [1166] = 1,
    ACTIONS(407), 1,
      anon_sym_branch,
  [1170] = 1,
    ACTIONS(409), 1,
      anon_sym_rebasing,
  [1174] = 1,
    ACTIONS(411), 1,
      sym_branch,
  [1178] = 1,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
  [1182] = 1,
    ACTIONS(415), 1,
      anon_sym_branch,
  [1186] = 1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [1190] = 1,
    ACTIONS(419), 1,
      sym_branch,
  [1194] = 1,
    ACTIONS(421), 1,
      anon_sym_SQUOTE,
  [1198] = 1,
    ACTIONS(423), 1,
      anon_sym_on,
  [1202] = 1,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
  [1206] = 1,
    ACTIONS(427), 1,
      sym_branch,
  [1210] = 1,
    ACTIONS(429), 1,
      anon_sym_SQUOTE,
  [1214] = 1,
    ACTIONS(431), 1,
      anon_sym_on,
  [1218] = 1,
    ACTIONS(433), 1,
      anon_sym_SQUOTE,
  [1222] = 1,
    ACTIONS(435), 1,
      sym_commit,
  [1226] = 1,
    ACTIONS(437), 1,
      anon_sym_SQUOTE,
  [1230] = 1,
    ACTIONS(439), 1,
      anon_sym_on,
  [1234] = 1,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
  [1238] = 1,
    ACTIONS(443), 1,
      sym_commit,
  [1242] = 1,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
  [1246] = 1,
    ACTIONS(447), 1,
      anon_sym_DOT,
  [1250] = 1,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
  [1254] = 1,
    ACTIONS(451), 1,
      sym_commit,
  [1258] = 1,
    ACTIONS(453), 1,
      aux_sym_source_token1,
  [1262] = 1,
    ACTIONS(455), 1,
      anon_sym_DOT,
  [1266] = 1,
    ACTIONS(457), 1,
      anon_sym_SQUOTE,
  [1270] = 1,
    ACTIONS(459), 1,
      anon_sym_be,
  [1274] = 1,
    ACTIONS(461), 1,
      aux_sym_source_token1,
  [1278] = 1,
    ACTIONS(463), 1,
      anon_sym_DOT,
  [1282] = 1,
    ACTIONS(465), 1,
      anon_sym_in,
  [1286] = 1,
    ACTIONS(467), 1,
      aux_sym_source_token1,
  [1290] = 1,
    ACTIONS(469), 1,
      aux_sym_source_token1,
  [1294] = 1,
    ACTIONS(471), 1,
      aux_sym_source_token1,
  [1298] = 1,
    ACTIONS(473), 1,
      anon_sym_files,
  [1302] = 1,
    ACTIONS(475), 1,
      anon_sym_COLON,
  [1306] = 1,
    ACTIONS(477), 1,
      anon_sym_detached,
  [1310] = 1,
    ACTIONS(479), 1,
      anon_sym_branch,
  [1314] = 1,
    ACTIONS(481), 1,
      anon_sym_branch,
  [1318] = 1,
    ACTIONS(483), 1,
      anon_sym_rebase,
  [1322] = 1,
    ACTIONS(485), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 158,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 212,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 262,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 351,
  [SMALL_STATE(17)] = 362,
  [SMALL_STATE(18)] = 374,
  [SMALL_STATE(19)] = 390,
  [SMALL_STATE(20)] = 402,
  [SMALL_STATE(21)] = 412,
  [SMALL_STATE(22)] = 424,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 448,
  [SMALL_STATE(25)] = 461,
  [SMALL_STATE(26)] = 472,
  [SMALL_STATE(27)] = 485,
  [SMALL_STATE(28)] = 498,
  [SMALL_STATE(29)] = 509,
  [SMALL_STATE(30)] = 522,
  [SMALL_STATE(31)] = 533,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 565,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 581,
  [SMALL_STATE(37)] = 591,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 609,
  [SMALL_STATE(40)] = 619,
  [SMALL_STATE(41)] = 629,
  [SMALL_STATE(42)] = 637,
  [SMALL_STATE(43)] = 647,
  [SMALL_STATE(44)] = 657,
  [SMALL_STATE(45)] = 665,
  [SMALL_STATE(46)] = 671,
  [SMALL_STATE(47)] = 681,
  [SMALL_STATE(48)] = 691,
  [SMALL_STATE(49)] = 701,
  [SMALL_STATE(50)] = 708,
  [SMALL_STATE(51)] = 713,
  [SMALL_STATE(52)] = 720,
  [SMALL_STATE(53)] = 727,
  [SMALL_STATE(54)] = 732,
  [SMALL_STATE(55)] = 739,
  [SMALL_STATE(56)] = 746,
  [SMALL_STATE(57)] = 751,
  [SMALL_STATE(58)] = 758,
  [SMALL_STATE(59)] = 763,
  [SMALL_STATE(60)] = 768,
  [SMALL_STATE(61)] = 773,
  [SMALL_STATE(62)] = 780,
  [SMALL_STATE(63)] = 787,
  [SMALL_STATE(64)] = 794,
  [SMALL_STATE(65)] = 801,
  [SMALL_STATE(66)] = 806,
  [SMALL_STATE(67)] = 811,
  [SMALL_STATE(68)] = 816,
  [SMALL_STATE(69)] = 821,
  [SMALL_STATE(70)] = 828,
  [SMALL_STATE(71)] = 835,
  [SMALL_STATE(72)] = 842,
  [SMALL_STATE(73)] = 846,
  [SMALL_STATE(74)] = 850,
  [SMALL_STATE(75)] = 854,
  [SMALL_STATE(76)] = 858,
  [SMALL_STATE(77)] = 862,
  [SMALL_STATE(78)] = 866,
  [SMALL_STATE(79)] = 870,
  [SMALL_STATE(80)] = 874,
  [SMALL_STATE(81)] = 878,
  [SMALL_STATE(82)] = 882,
  [SMALL_STATE(83)] = 886,
  [SMALL_STATE(84)] = 890,
  [SMALL_STATE(85)] = 894,
  [SMALL_STATE(86)] = 898,
  [SMALL_STATE(87)] = 902,
  [SMALL_STATE(88)] = 906,
  [SMALL_STATE(89)] = 910,
  [SMALL_STATE(90)] = 914,
  [SMALL_STATE(91)] = 918,
  [SMALL_STATE(92)] = 922,
  [SMALL_STATE(93)] = 926,
  [SMALL_STATE(94)] = 930,
  [SMALL_STATE(95)] = 934,
  [SMALL_STATE(96)] = 938,
  [SMALL_STATE(97)] = 942,
  [SMALL_STATE(98)] = 946,
  [SMALL_STATE(99)] = 950,
  [SMALL_STATE(100)] = 954,
  [SMALL_STATE(101)] = 958,
  [SMALL_STATE(102)] = 962,
  [SMALL_STATE(103)] = 966,
  [SMALL_STATE(104)] = 970,
  [SMALL_STATE(105)] = 974,
  [SMALL_STATE(106)] = 978,
  [SMALL_STATE(107)] = 982,
  [SMALL_STATE(108)] = 986,
  [SMALL_STATE(109)] = 990,
  [SMALL_STATE(110)] = 994,
  [SMALL_STATE(111)] = 998,
  [SMALL_STATE(112)] = 1002,
  [SMALL_STATE(113)] = 1006,
  [SMALL_STATE(114)] = 1010,
  [SMALL_STATE(115)] = 1014,
  [SMALL_STATE(116)] = 1018,
  [SMALL_STATE(117)] = 1022,
  [SMALL_STATE(118)] = 1026,
  [SMALL_STATE(119)] = 1030,
  [SMALL_STATE(120)] = 1034,
  [SMALL_STATE(121)] = 1038,
  [SMALL_STATE(122)] = 1042,
  [SMALL_STATE(123)] = 1046,
  [SMALL_STATE(124)] = 1050,
  [SMALL_STATE(125)] = 1054,
  [SMALL_STATE(126)] = 1058,
  [SMALL_STATE(127)] = 1062,
  [SMALL_STATE(128)] = 1066,
  [SMALL_STATE(129)] = 1070,
  [SMALL_STATE(130)] = 1074,
  [SMALL_STATE(131)] = 1078,
  [SMALL_STATE(132)] = 1082,
  [SMALL_STATE(133)] = 1086,
  [SMALL_STATE(134)] = 1090,
  [SMALL_STATE(135)] = 1094,
  [SMALL_STATE(136)] = 1098,
  [SMALL_STATE(137)] = 1102,
  [SMALL_STATE(138)] = 1106,
  [SMALL_STATE(139)] = 1110,
  [SMALL_STATE(140)] = 1114,
  [SMALL_STATE(141)] = 1118,
  [SMALL_STATE(142)] = 1122,
  [SMALL_STATE(143)] = 1126,
  [SMALL_STATE(144)] = 1130,
  [SMALL_STATE(145)] = 1134,
  [SMALL_STATE(146)] = 1138,
  [SMALL_STATE(147)] = 1142,
  [SMALL_STATE(148)] = 1146,
  [SMALL_STATE(149)] = 1150,
  [SMALL_STATE(150)] = 1154,
  [SMALL_STATE(151)] = 1158,
  [SMALL_STATE(152)] = 1162,
  [SMALL_STATE(153)] = 1166,
  [SMALL_STATE(154)] = 1170,
  [SMALL_STATE(155)] = 1174,
  [SMALL_STATE(156)] = 1178,
  [SMALL_STATE(157)] = 1182,
  [SMALL_STATE(158)] = 1186,
  [SMALL_STATE(159)] = 1190,
  [SMALL_STATE(160)] = 1194,
  [SMALL_STATE(161)] = 1198,
  [SMALL_STATE(162)] = 1202,
  [SMALL_STATE(163)] = 1206,
  [SMALL_STATE(164)] = 1210,
  [SMALL_STATE(165)] = 1214,
  [SMALL_STATE(166)] = 1218,
  [SMALL_STATE(167)] = 1222,
  [SMALL_STATE(168)] = 1226,
  [SMALL_STATE(169)] = 1230,
  [SMALL_STATE(170)] = 1234,
  [SMALL_STATE(171)] = 1238,
  [SMALL_STATE(172)] = 1242,
  [SMALL_STATE(173)] = 1246,
  [SMALL_STATE(174)] = 1250,
  [SMALL_STATE(175)] = 1254,
  [SMALL_STATE(176)] = 1258,
  [SMALL_STATE(177)] = 1262,
  [SMALL_STATE(178)] = 1266,
  [SMALL_STATE(179)] = 1270,
  [SMALL_STATE(180)] = 1274,
  [SMALL_STATE(181)] = 1278,
  [SMALL_STATE(182)] = 1282,
  [SMALL_STATE(183)] = 1286,
  [SMALL_STATE(184)] = 1290,
  [SMALL_STATE(185)] = 1294,
  [SMALL_STATE(186)] = 1298,
  [SMALL_STATE(187)] = 1302,
  [SMALL_STATE(188)] = 1306,
  [SMALL_STATE(189)] = 1310,
  [SMALL_STATE(190)] = 1314,
  [SMALL_STATE(191)] = 1318,
  [SMALL_STATE(192)] = 1322,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(19),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(47),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(27),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(20),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(31),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(33),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_rebase_command_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rebase_command_repeat1, 2), SHIFT_REPEAT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rebase_command, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(48),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [301] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
