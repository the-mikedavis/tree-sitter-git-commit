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
#define STATE_COUNT 328
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
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
  sym__body_line = 89,
  sym_subject = 90,
  sym_message = 91,
  sym_comment = 92,
  sym__comment_body = 93,
  sym__rebase_summary = 94,
  sym__rebase_header = 95,
  sym_summary = 96,
  sym__change_header = 97,
  sym__branch_declaration = 98,
  sym_header = 99,
  sym_change = 100,
  sym_rebase_command = 101,
  sym_path = 102,
  aux_sym__rest = 103,
  aux_sym_source_repeat1 = 104,
  aux_sym_subject_repeat1 = 105,
  aux_sym_message_repeat1 = 106,
  aux_sym_message_repeat2 = 107,
  aux_sym__comment_body_repeat1 = 108,
  aux_sym__rebase_summary_repeat1 = 109,
  aux_sym__rebase_summary_repeat2 = 110,
  aux_sym_summary_repeat1 = 111,
  aux_sym_summary_repeat2 = 112,
  aux_sym_path_repeat1 = 113,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '\'') ADVANCE(284);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == ')') ADVANCE(284);
      if (lookahead == ',') ADVANCE(284);
      if (lookahead == '-') ADVANCE(284);
      if (lookahead == '.') ADVANCE(284);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == ';') ADVANCE(284);
      if (lookahead == 'C') ADVANCE(284);
      if (lookahead == 'H') ADVANCE(284);
      if (lookahead == 'L') ADVANCE(284);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead == 'O') ADVANCE(284);
      if (lookahead == 'U') ADVANCE(284);
      if (lookahead == 'Y') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 'd') ADVANCE(284);
      if (lookahead == 'e') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(284);
      if (lookahead == 'h') ADVANCE(284);
      if (lookahead == 'i') ADVANCE(284);
      if (lookahead == 'l') ADVANCE(284);
      if (lookahead == 'm') ADVANCE(284);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'o') ADVANCE(284);
      if (lookahead == 'p') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead == 's') ADVANCE(284);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead == 'u') ADVANCE(284);
      if (lookahead == 'w') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(280);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(452);
      if (lookahead == '@') ADVANCE(413);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(466);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(430);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead == 'U') ADVANCE(436);
      if (lookahead == 'Y') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0) ADVANCE(323);
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
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(158);
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
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(123);
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
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(377);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(302);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(199);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(253);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(242);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'i') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(92);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(462);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(461);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(271);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(96);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == 'o') ADVANCE(81);
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
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(231);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'y') ADVANCE(360);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(262);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(220);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(457);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(120);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 156:
      if (lookahead == 'k') ADVANCE(455);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(118);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'x') ADVANCE(249);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 166:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 167:
      if (lookahead == 'm') ADVANCE(190);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(174);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(153);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 191:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(460);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(459);
      END_STATE();
    case 210:
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(323);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 223:
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(342);
      END_STATE();
    case 226:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 227:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 228:
      if (lookahead == 's') ADVANCE(232);
      END_STATE();
    case 229:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(456);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(464);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(313);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(209);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(102);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(82);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(97);
      END_STATE();
    case 254:
      if (lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 255:
      if (lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 256:
      if (lookahead == 'w') ADVANCE(146);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(28);
      END_STATE();
    case 259:
      if (lookahead == 'x') ADVANCE(233);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(454);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
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
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(467);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(466);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 273:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(303);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 274:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == 'C') ADVANCE(430);
      if (lookahead == 'H') ADVANCE(416);
      if (lookahead == 'O') ADVANCE(435);
      if (lookahead == 'U') ADVANCE(436);
      if (lookahead == 'Y') ADVANCE(440);
      if (lookahead == 'i') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 275:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(412);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 276:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'Y') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'm') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(207);
      if (lookahead == 'w') ADVANCE(148);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 277:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 278:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(286);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_source_token2);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0) ADVANCE(294);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(454);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(471);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(468);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(302);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_POUND2);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_POUND2);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(361);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_commit);
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
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
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
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(453);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(468);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(418);
      if (lookahead == 'o') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(467);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(467);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(468);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(470);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(471);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 273},
  [2] = {.lex_state = 274},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 276},
  [5] = {.lex_state = 276},
  [6] = {.lex_state = 276},
  [7] = {.lex_state = 276},
  [8] = {.lex_state = 276},
  [9] = {.lex_state = 276},
  [10] = {.lex_state = 276},
  [11] = {.lex_state = 276},
  [12] = {.lex_state = 276},
  [13] = {.lex_state = 276},
  [14] = {.lex_state = 277},
  [15] = {.lex_state = 277},
  [16] = {.lex_state = 276},
  [17] = {.lex_state = 277},
  [18] = {.lex_state = 277},
  [19] = {.lex_state = 277},
  [20] = {.lex_state = 276},
  [21] = {.lex_state = 276},
  [22] = {.lex_state = 277},
  [23] = {.lex_state = 272},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 276},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 276},
  [28] = {.lex_state = 278},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 276},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 276},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 276},
  [35] = {.lex_state = 275},
  [36] = {.lex_state = 278},
  [37] = {.lex_state = 278},
  [38] = {.lex_state = 276},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 472},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 276},
  [43] = {.lex_state = 472},
  [44] = {.lex_state = 472},
  [45] = {.lex_state = 472},
  [46] = {.lex_state = 276},
  [47] = {.lex_state = 472},
  [48] = {.lex_state = 276},
  [49] = {.lex_state = 276},
  [50] = {.lex_state = 276},
  [51] = {.lex_state = 276},
  [52] = {.lex_state = 276},
  [53] = {.lex_state = 276},
  [54] = {.lex_state = 472},
  [55] = {.lex_state = 272},
  [56] = {.lex_state = 472},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 472},
  [59] = {.lex_state = 472},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 472},
  [62] = {.lex_state = 213},
  [63] = {.lex_state = 272},
  [64] = {.lex_state = 274},
  [65] = {.lex_state = 276},
  [66] = {.lex_state = 274},
  [67] = {.lex_state = 272},
  [68] = {.lex_state = 274},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 274},
  [71] = {.lex_state = 274},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 213},
  [74] = {.lex_state = 274},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 274},
  [77] = {.lex_state = 213},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 272},
  [81] = {.lex_state = 272},
  [82] = {.lex_state = 213},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 213},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 274},
  [89] = {.lex_state = 272},
  [90] = {.lex_state = 213},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 272},
  [93] = {.lex_state = 274},
  [94] = {.lex_state = 213},
  [95] = {.lex_state = 274},
  [96] = {.lex_state = 213},
  [97] = {.lex_state = 274},
  [98] = {.lex_state = 274},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 213},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 213},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 276},
  [105] = {.lex_state = 276},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 276},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
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
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 276},
  [131] = {.lex_state = 263},
  [132] = {.lex_state = 276},
  [133] = {.lex_state = 276},
  [134] = {.lex_state = 276},
  [135] = {.lex_state = 276},
  [136] = {.lex_state = 276},
  [137] = {.lex_state = 276},
  [138] = {.lex_state = 274},
  [139] = {.lex_state = 276},
  [140] = {.lex_state = 274},
  [141] = {.lex_state = 274},
  [142] = {.lex_state = 276},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 276},
  [145] = {.lex_state = 276},
  [146] = {.lex_state = 276},
  [147] = {.lex_state = 276},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 274},
  [150] = {.lex_state = 274},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 276},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 276},
  [155] = {.lex_state = 276},
  [156] = {.lex_state = 276},
  [157] = {.lex_state = 276},
  [158] = {.lex_state = 276},
  [159] = {.lex_state = 276},
  [160] = {.lex_state = 276},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 276},
  [163] = {.lex_state = 276},
  [164] = {.lex_state = 274},
  [165] = {.lex_state = 276},
  [166] = {.lex_state = 276},
  [167] = {.lex_state = 274},
  [168] = {.lex_state = 276},
  [169] = {.lex_state = 276},
  [170] = {.lex_state = 276},
  [171] = {.lex_state = 276},
  [172] = {.lex_state = 274},
  [173] = {.lex_state = 276},
  [174] = {.lex_state = 276},
  [175] = {.lex_state = 263},
  [176] = {.lex_state = 276},
  [177] = {.lex_state = 276},
  [178] = {.lex_state = 276},
  [179] = {.lex_state = 3},
  [180] = {.lex_state = 276},
  [181] = {.lex_state = 263},
  [182] = {.lex_state = 276},
  [183] = {.lex_state = 276},
  [184] = {.lex_state = 276},
  [185] = {.lex_state = 276},
  [186] = {.lex_state = 263},
  [187] = {.lex_state = 276},
  [188] = {.lex_state = 276},
  [189] = {.lex_state = 276},
  [190] = {.lex_state = 276},
  [191] = {.lex_state = 263},
  [192] = {.lex_state = 276},
  [193] = {.lex_state = 276},
  [194] = {.lex_state = 276},
  [195] = {.lex_state = 276},
  [196] = {.lex_state = 263},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 276},
  [199] = {.lex_state = 276},
  [200] = {.lex_state = 276},
  [201] = {.lex_state = 276},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 276},
  [204] = {.lex_state = 276},
  [205] = {.lex_state = 276},
  [206] = {.lex_state = 276},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 276},
  [209] = {.lex_state = 274},
  [210] = {.lex_state = 276},
  [211] = {.lex_state = 276},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 274},
  [214] = {.lex_state = 274},
  [215] = {.lex_state = 276},
  [216] = {.lex_state = 276},
  [217] = {.lex_state = 276},
  [218] = {.lex_state = 274},
  [219] = {.lex_state = 274},
  [220] = {.lex_state = 276},
  [221] = {.lex_state = 276},
  [222] = {.lex_state = 276},
  [223] = {.lex_state = 274},
  [224] = {.lex_state = 263},
  [225] = {.lex_state = 276},
  [226] = {.lex_state = 274},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 276},
  [229] = {.lex_state = 276},
  [230] = {.lex_state = 276},
  [231] = {.lex_state = 276},
  [232] = {.lex_state = 276},
  [233] = {.lex_state = 274},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 274},
  [236] = {.lex_state = 274},
  [237] = {.lex_state = 276},
  [238] = {.lex_state = 263},
  [239] = {.lex_state = 276},
  [240] = {.lex_state = 276},
  [241] = {.lex_state = 276},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 276},
  [244] = {.lex_state = 276},
  [245] = {.lex_state = 274},
  [246] = {.lex_state = 274},
  [247] = {.lex_state = 274},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 274},
  [250] = {.lex_state = 274},
  [251] = {.lex_state = 274},
  [252] = {.lex_state = 274},
  [253] = {.lex_state = 274},
  [254] = {.lex_state = 274},
  [255] = {.lex_state = 276},
  [256] = {.lex_state = 276},
  [257] = {.lex_state = 276},
  [258] = {.lex_state = 276},
  [259] = {.lex_state = 276},
  [260] = {.lex_state = 276},
  [261] = {.lex_state = 276},
  [262] = {.lex_state = 276},
  [263] = {.lex_state = 276},
  [264] = {.lex_state = 276},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 276},
  [270] = {.lex_state = 276},
  [271] = {.lex_state = 276},
  [272] = {.lex_state = 276},
  [273] = {.lex_state = 276},
  [274] = {.lex_state = 276},
  [275] = {.lex_state = 276},
  [276] = {.lex_state = 276},
  [277] = {.lex_state = 276},
  [278] = {.lex_state = 276},
  [279] = {.lex_state = 276},
  [280] = {.lex_state = 276},
  [281] = {.lex_state = 263},
  [282] = {.lex_state = 263},
  [283] = {.lex_state = 263},
  [284] = {.lex_state = 263},
  [285] = {.lex_state = 276},
  [286] = {.lex_state = 276},
  [287] = {.lex_state = 276},
  [288] = {.lex_state = 276},
  [289] = {.lex_state = 276},
  [290] = {.lex_state = 276},
  [291] = {.lex_state = 276},
  [292] = {.lex_state = 276},
  [293] = {.lex_state = 58},
  [294] = {.lex_state = 276},
  [295] = {.lex_state = 276},
  [296] = {.lex_state = 274},
  [297] = {.lex_state = 276},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 276},
  [300] = {.lex_state = 276},
  [301] = {.lex_state = 276},
  [302] = {.lex_state = 276},
  [303] = {.lex_state = 276},
  [304] = {.lex_state = 276},
  [305] = {.lex_state = 276},
  [306] = {.lex_state = 58},
  [307] = {.lex_state = 276},
  [308] = {.lex_state = 274},
  [309] = {.lex_state = 274},
  [310] = {.lex_state = 276},
  [311] = {.lex_state = 276},
  [312] = {.lex_state = 274},
  [313] = {.lex_state = 274},
  [314] = {.lex_state = 276},
  [315] = {.lex_state = 276},
  [316] = {.lex_state = 276},
  [317] = {.lex_state = 276},
  [318] = {.lex_state = 274},
  [319] = {.lex_state = 274},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 274},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 276},
  [325] = {.lex_state = 276},
  [326] = {.lex_state = 276},
  [327] = {.lex_state = 276},
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
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_have] = ACTIONS(1),
    [anon_sym_diverged] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [sym_source] = STATE(213),
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
    STATE(29), 1,
      aux_sym__comment_body_repeat1,
    STATE(308), 1,
      sym_header,
    STATE(309), 1,
      sym__change_header,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
    STATE(88), 4,
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
    STATE(87), 1,
      aux_sym__comment_body_repeat1,
    STATE(253), 1,
      sym__change_header,
    STATE(254), 1,
      sym_header,
    STATE(88), 4,
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
    STATE(140), 1,
      sym__rebase_header,
    STATE(141), 1,
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
  [125] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(141), 1,
      sym_rebase_command,
    STATE(149), 1,
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
    STATE(141), 1,
      sym_rebase_command,
    STATE(313), 1,
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
  [187] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(141), 1,
      sym_rebase_command,
    STATE(312), 1,
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
    STATE(141), 1,
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
    STATE(141), 1,
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
    STATE(141), 1,
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
    STATE(141), 1,
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
    STATE(141), 1,
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
    STATE(141), 1,
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
    STATE(78), 1,
      aux_sym_message_repeat1,
    STATE(17), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
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
    STATE(78), 1,
      aux_sym_message_repeat1,
    STATE(18), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [416] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(141), 1,
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
    ACTIONS(65), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
      aux_sym_message_token2,
    ACTIONS(69), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      sym_user,
    ACTIONS(75), 1,
      aux_sym_source_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_source_token2,
    STATE(78), 1,
      aux_sym_message_repeat1,
    STATE(18), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [468] = 9,
    ACTIONS(85), 1,
      aux_sym_source_token1,
    ACTIONS(88), 1,
      aux_sym_message_token1,
    ACTIONS(91), 1,
      aux_sym_message_token2,
    ACTIONS(94), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      sym_user,
    STATE(78), 1,
      aux_sym_message_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym_source_token2,
    STATE(18), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [499] = 10,
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
    ACTIONS(100), 1,
      aux_sym_source_token1,
    STATE(78), 1,
      aux_sym_message_repeat1,
    STATE(15), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [532] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(236), 1,
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
  [550] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    STATE(245), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [566] = 2,
    ACTIONS(108), 3,
      aux_sym_message_token1,
      aux_sym_message_token2,
      anon_sym_POUND,
    ACTIONS(106), 4,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
      sym_user,
  [578] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(110), 1,
      aux_sym_source_token2,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(235), 1,
      sym_path,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [598] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(114), 1,
      aux_sym_source_token1,
    ACTIONS(116), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_message_repeat2,
    ACTIONS(119), 2,
      sym_user,
      sym_item,
  [615] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(236), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [628] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(122), 1,
      aux_sym_source_token1,
    ACTIONS(124), 1,
      sym__word,
    STATE(24), 1,
      aux_sym_message_repeat2,
    ACTIONS(126), 2,
      sym_user,
      sym_item,
  [645] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(130), 1,
      anon_sym_POUND2,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [660] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(134), 1,
      aux_sym_subject_token2,
    STATE(37), 1,
      aux_sym_subject_repeat1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [675] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(138), 1,
      sym__word,
    STATE(35), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [690] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(142), 1,
      anon_sym_POUND2,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [705] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(124), 1,
      sym__word,
    ACTIONS(145), 1,
      aux_sym_source_token1,
    STATE(24), 1,
      aux_sym_message_repeat2,
    ACTIONS(126), 2,
      sym_user,
      sym_item,
  [722] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(245), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [735] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(145), 1,
      aux_sym_source_token1,
    ACTIONS(147), 1,
      sym__word,
    STATE(26), 1,
      aux_sym_message_repeat2,
    ACTIONS(149), 2,
      sym_user,
      sym_item,
  [752] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(151), 1,
      anon_sym_POUND2,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [767] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(155), 1,
      sym__word,
    STATE(35), 1,
      aux_sym__comment_body_repeat1,
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
  [797] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(165), 1,
      aux_sym_subject_token2,
    STATE(36), 1,
      aux_sym_subject_repeat1,
    ACTIONS(163), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [812] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(169), 1,
      anon_sym_POUND2,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [827] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(172), 1,
      aux_sym_source_token1,
    ACTIONS(174), 1,
      sym__word,
    STATE(31), 1,
      aux_sym_message_repeat2,
    ACTIONS(176), 2,
      sym_user,
      sym_item,
  [844] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(58), 1,
      aux_sym__rest,
  [860] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(186), 1,
      aux_sym_path_token1,
    STATE(41), 1,
      aux_sym_path_repeat1,
    ACTIONS(184), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [874] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(318), 1,
      sym__rebase_header,
  [890] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(44), 1,
      aux_sym__rest,
  [906] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [922] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(56), 1,
      aux_sym__rest,
  [938] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(39), 1,
      anon_sym_Last,
    ACTIONS(41), 1,
      anon_sym_Next,
    ACTIONS(43), 1,
      anon_sym_No,
    STATE(150), 1,
      sym__rebase_header,
  [954] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 1,
      aux_sym_source_token1,
    ACTIONS(196), 1,
      aux_sym__rest_token1,
    STATE(47), 1,
      aux_sym__rest,
  [970] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(201), 1,
      anon_sym_POUND2,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [982] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(205), 1,
      anon_sym_POUND2,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [994] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(209), 1,
      anon_sym_POUND2,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1006] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 1,
      anon_sym_POUND2,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1018] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      anon_sym_POUND2,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1030] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(221), 1,
      anon_sym_POUND2,
    ACTIONS(219), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1042] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [1058] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(247), 1,
      sym_path,
  [1074] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [1090] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(229), 1,
      aux_sym_path_token1,
    STATE(41), 1,
      aux_sym_path_repeat1,
    ACTIONS(227), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [1104] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [1120] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(54), 1,
      aux_sym__rest,
  [1136] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(233), 1,
      anon_sym_POUND2,
    STATE(83), 1,
      aux_sym_summary_repeat1,
  [1149] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(237), 1,
      aux_sym__rest_token1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1160] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(239), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(241), 1,
      anon_sym_rebasing,
    STATE(91), 1,
      aux_sym__rebase_summary_repeat2,
  [1173] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(247), 1,
      sym_path,
  [1186] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1195] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(245), 1,
      anon_sym_up,
    ACTIONS(247), 1,
      anon_sym_ahead,
    ACTIONS(249), 1,
      anon_sym_behind,
  [1208] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1217] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(235), 1,
      sym_path,
  [1230] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1239] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(255), 1,
      aux_sym_source_token1,
    ACTIONS(257), 1,
      aux_sym__rebase_summary_token1,
    STATE(72), 1,
      aux_sym__rebase_summary_repeat2,
  [1252] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1261] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token2,
    ACTIONS(261), 1,
      aux_sym_source_token1,
  [1274] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(263), 1,
      aux_sym_source_token1,
    ACTIONS(265), 1,
      aux_sym__rebase_summary_token1,
    STATE(72), 1,
      aux_sym__rebase_summary_repeat2,
  [1287] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(268), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(271), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1300] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(273), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1309] = 4,
    ACTIONS(275), 1,
      aux_sym_message_token1,
    ACTIONS(278), 1,
      aux_sym_message_token2,
    ACTIONS(280), 1,
      sym_user,
    STATE(75), 1,
      aux_sym_message_repeat1,
  [1322] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(282), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1331] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(286), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1344] = 4,
    ACTIONS(288), 1,
      aux_sym_message_token1,
    ACTIONS(290), 1,
      aux_sym_message_token2,
    ACTIONS(292), 1,
      sym_user,
    STATE(75), 1,
      aux_sym_message_repeat1,
  [1357] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(167), 1,
      aux_sym_source_token1,
    ACTIONS(294), 1,
      anon_sym_POUND2,
    STATE(79), 1,
      aux_sym_summary_repeat2,
  [1370] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(227), 1,
      aux_sym_source_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    STATE(92), 1,
      aux_sym_path_repeat1,
  [1383] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(164), 1,
      sym_path,
  [1396] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(299), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(301), 1,
      anon_sym_rebasing,
    STATE(85), 1,
      aux_sym__rebase_summary_repeat2,
  [1409] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(140), 1,
      aux_sym_source_token1,
    ACTIONS(303), 1,
      anon_sym_POUND2,
    STATE(83), 1,
      aux_sym_summary_repeat1,
  [1422] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(306), 1,
      anon_sym_POUND2,
    STATE(79), 1,
      aux_sym_summary_repeat2,
  [1435] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(308), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1448] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(310), 1,
      sym__word,
    STATE(86), 1,
      aux_sym__comment_body_repeat1,
  [1461] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(136), 1,
      aux_sym_source_token1,
    ACTIONS(313), 1,
      sym__word,
    STATE(86), 1,
      aux_sym__comment_body_repeat1,
  [1474] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1483] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(317), 1,
      aux_sym_path_token1,
    STATE(57), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym_path,
  [1496] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(308), 1,
      anon_sym_rebasing,
    ACTIONS(319), 1,
      aux_sym__rebase_summary_token1,
    STATE(102), 1,
      aux_sym__rebase_summary_repeat2,
  [1509] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(321), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1522] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(184), 1,
      aux_sym_source_token1,
    ACTIONS(323), 1,
      aux_sym_path_token1,
    STATE(92), 1,
      aux_sym_path_repeat1,
  [1535] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(326), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1544] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      anon_sym_rebasing,
    ACTIONS(328), 1,
      aux_sym__rebase_summary_token1,
    STATE(96), 1,
      aux_sym__rebase_summary_repeat2,
  [1557] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1566] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(330), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1579] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(207), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1588] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(203), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1597] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(330), 1,
      anon_sym_rebasing,
    ACTIONS(332), 1,
      aux_sym__rebase_summary_token1,
    STATE(77), 1,
      aux_sym__rebase_summary_repeat2,
  [1610] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(334), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1623] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(336), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(338), 1,
      anon_sym_rebasing,
    STATE(100), 1,
      aux_sym__rebase_summary_repeat2,
  [1636] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(284), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(338), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1649] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(340), 1,
      anon_sym_POUND2,
    STATE(112), 1,
      aux_sym__rebase_summary_repeat1,
  [1659] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(342), 1,
      anon_sym_is,
    ACTIONS(344), 1,
      anon_sym_and,
  [1669] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(346), 1,
      aux_sym_source_token1,
    ACTIONS(348), 1,
      anon_sym_DASH_GT,
  [1679] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_POUND2,
    STATE(84), 1,
      aux_sym_summary_repeat2,
  [1689] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(352), 1,
      anon_sym_POUND2,
    STATE(27), 1,
      aux_sym_summary_repeat1,
  [1699] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(340), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1709] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(354), 1,
      anon_sym_POUND2,
    STATE(113), 1,
      aux_sym__rebase_summary_repeat1,
  [1719] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(356), 1,
      anon_sym_to,
    ACTIONS(358), 1,
      anon_sym_not,
  [1729] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(360), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1739] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(362), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1749] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(364), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1759] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(366), 1,
      anon_sym_POUND2,
    STATE(111), 1,
      aux_sym__rebase_summary_repeat1,
  [1769] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(366), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1779] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      anon_sym_POUND2,
    STATE(34), 1,
      aux_sym_summary_repeat2,
  [1789] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(219), 2,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [1797] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(215), 2,
      aux_sym_source_token1,
      anon_sym_POUND2,
  [1805] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(199), 1,
      aux_sym_source_token1,
    ACTIONS(370), 1,
      anon_sym_POUND2,
  [1815] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(372), 1,
      anon_sym_POUND2,
    STATE(115), 1,
      aux_sym__rebase_summary_repeat1,
  [1825] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(203), 1,
      aux_sym_source_token1,
    ACTIONS(374), 1,
      anon_sym_POUND2,
  [1835] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(207), 1,
      aux_sym_source_token1,
    ACTIONS(376), 1,
      anon_sym_POUND2,
  [1845] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(378), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1855] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      anon_sym_POUND2,
    STATE(108), 1,
      aux_sym__rebase_summary_repeat1,
  [1865] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      aux_sym__rebase_summary_token1,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1875] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(211), 1,
      aux_sym_source_token1,
    ACTIONS(385), 1,
      anon_sym_POUND2,
  [1885] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      anon_sym_POUND2,
    STATE(128), 1,
      aux_sym__rebase_summary_repeat1,
  [1895] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      anon_sym_POUND2,
    STATE(123), 1,
      aux_sym__rebase_summary_repeat1,
  [1905] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      anon_sym_POUND2,
    STATE(60), 1,
      aux_sym_summary_repeat1,
  [1915] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      anon_sym_currently,
  [1922] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      sym_branch,
  [1929] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      anon_sym_do,
  [1936] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      anon_sym_DOT,
  [1943] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
  [1950] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_DOT,
  [1957] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      aux_sym__rebase_header_token2,
  [1964] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [1971] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      aux_sym_source_token1,
  [1978] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      anon_sym_remaining,
  [1985] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      aux_sym_source_token1,
  [1992] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      aux_sym_source_token1,
  [1999] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_to,
  [2006] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      anon_sym_done,
  [2013] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      aux_sym__rebase_header_token1,
  [2020] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      aux_sym__rebase_header_token2,
  [2027] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      anon_sym_DOT,
  [2034] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      aux_sym__branch_declaration_token1,
  [2041] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      anon_sym_POUND2,
  [2048] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      aux_sym_source_token1,
  [2055] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      aux_sym_source_token1,
  [2062] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      anon_sym_done,
  [2069] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      anon_sym_remaining,
  [2076] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      anon_sym_commands,
  [2083] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      aux_sym__rebase_header_token1,
  [2090] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      aux_sym__rebase_header_token1,
  [2097] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      aux_sym__branch_declaration_token1,
  [2104] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [2111] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      aux_sym__rebase_header_token1,
  [2118] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      anon_sym_are,
  [2125] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      aux_sym__rebase_header_token2,
  [2132] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      anon_sym_SQUOTE_DOT,
  [2139] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [2146] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [2153] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      aux_sym_source_token1,
  [2160] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      anon_sym_are,
  [2167] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      anon_sym_COMMA,
  [2174] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      aux_sym_source_token1,
  [2181] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [2188] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      aux_sym__rebase_header_token2,
  [2195] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      anon_sym_currently,
  [2202] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      anon_sym_are,
  [2209] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      aux_sym_source_token1,
  [2216] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      anon_sym_branch,
  [2223] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      anon_sym_by,
  [2230] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      sym_branch,
  [2237] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      anon_sym_currently,
  [2244] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
  [2251] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      anon_sym_branch,
  [2258] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      anon_sym_POUND2,
  [2265] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_diverged,
  [2272] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      sym_branch,
  [2279] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
  [2286] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      anon_sym_branch,
  [2293] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_by,
  [2300] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
  [2307] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      sym_branch,
  [2314] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
  [2321] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      anon_sym_branch,
  [2328] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      anon_sym_on,
  [2335] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
  [2342] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      sym_branch,
  [2349] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
  [2356] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
  [2363] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      anon_sym_on,
  [2370] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
  [2377] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      sym_branch,
  [2384] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      sym_commit,
  [2391] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
  [2398] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      anon_sym_on,
  [2405] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
  [2412] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
  [2419] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      sym_commit,
  [2426] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
  [2433] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      anon_sym_on,
  [2440] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      anon_sym_DOT,
  [2447] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
  [2454] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      sym_commit,
  [2461] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
  [2468] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      aux_sym_source_token1,
  [2475] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(553), 1,
      anon_sym_DOT,
  [2482] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
  [2489] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(557), 1,
      sym_commit,
  [2496] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [2503] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(561), 1,
      aux_sym_source_token1,
  [2510] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(563), 1,
      anon_sym_DOT,
  [2517] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
  [2524] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
  [2531] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(569), 1,
      aux_sym_source_token1,
  [2538] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(571), 1,
      aux_sym_source_token1,
  [2545] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(573), 1,
      anon_sym_DOT,
  [2552] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(575), 1,
      anon_sym_have,
  [2559] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
  [2566] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(579), 1,
      aux_sym_source_token1,
  [2573] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(581), 1,
      sym_branch,
  [2580] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(583), 1,
      anon_sym_with,
  [2587] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(585), 1,
      aux_sym_source_token1,
  [2594] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(587), 1,
      sym_commit,
  [2601] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(589), 1,
      anon_sym_SQUOTE,
  [2608] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(591), 1,
      anon_sym_LPAREN,
  [2615] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(593), 1,
      anon_sym_SQUOTE,
  [2622] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(595), 1,
      anon_sym_date,
  [2629] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [2636] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(599), 1,
      aux_sym_source_token1,
  [2643] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(601), 1,
      anon_sym_onto,
  [2650] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(603), 1,
      aux_sym_source_token1,
  [2657] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(605), 1,
      aux_sym_source_token1,
  [2664] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(607), 1,
      anon_sym_COLON,
  [2671] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(609), 1,
      sym_branch,
  [2678] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(611), 1,
      anon_sym_SQUOTE,
  [2685] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(613), 1,
      anon_sym_of,
  [2692] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(615), 1,
      anon_sym_to,
  [2699] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(617), 1,
      anon_sym_commit,
  [2706] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(619), 1,
      anon_sym_COLON,
  [2713] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(621), 1,
      anon_sym_SEMI,
  [2720] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(623), 1,
      aux_sym_source_token1,
  [2727] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(625), 1,
      aux_sym_source_token1,
  [2734] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(627), 1,
      aux_sym_source_token1,
  [2741] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(629), 1,
      sym_commit,
  [2748] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(631), 1,
      aux_sym_source_token1,
  [2755] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(633), 1,
      aux_sym_source_token1,
  [2762] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(635), 1,
      aux_sym_source_token1,
  [2769] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(637), 1,
      aux_sym_source_token1,
  [2776] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(639), 1,
      aux_sym_source_token1,
  [2783] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(641), 1,
      aux_sym_source_token1,
  [2790] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
  [2797] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(645), 1,
      anon_sym_for,
  [2804] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(647), 1,
      anon_sym_DOT,
  [2811] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(649), 1,
      anon_sym_DOT,
  [2818] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(651), 1,
      anon_sym_DOT,
  [2825] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(653), 1,
      anon_sym_DOT,
  [2832] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
  [2839] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
  [2846] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [2853] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
  [2860] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(663), 1,
      sym_commit,
  [2867] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(665), 1,
      sym_commit,
  [2874] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(667), 1,
      sym_commit,
  [2881] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(669), 1,
      sym_commit,
  [2888] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
  [2895] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
  [2902] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
  [2909] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
  [2916] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(679), 1,
      anon_sym_on,
  [2923] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(681), 1,
      anon_sym_on,
  [2930] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(683), 1,
      anon_sym_on,
  [2937] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(685), 1,
      anon_sym_on,
  [2944] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
  [2951] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(689), 1,
      anon_sym_SQUOTE,
  [2958] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
  [2965] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
  [2972] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(695), 1,
      sym_branch,
  [2979] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(697), 1,
      sym_branch,
  [2986] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(699), 1,
      sym_branch,
  [2993] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(701), 1,
      sym_branch,
  [3000] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
  [3007] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(705), 1,
      anon_sym_SQUOTE,
  [3014] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
  [3021] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
  [3028] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(711), 1,
      anon_sym_branch,
  [3035] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(713), 1,
      anon_sym_branch,
  [3042] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(715), 1,
      anon_sym_branch,
  [3049] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(717), 1,
      anon_sym_branch,
  [3056] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(719), 1,
      anon_sym_committed,
  [3063] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(721), 1,
      anon_sym_progress,
  [3070] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(723), 1,
      anon_sym_COLON,
  [3077] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(725), 1,
      aux_sym_source_token1,
  [3084] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(727), 1,
      anon_sym_at,
  [3091] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(729), 1,
      sym__word,
  [3098] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(731), 1,
      anon_sym_currently,
  [3105] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(733), 1,
      anon_sym_currently,
  [3112] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(735), 1,
      anon_sym_currently,
  [3119] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(737), 1,
      anon_sym_are,
  [3126] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(739), 1,
      anon_sym_are,
  [3133] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(741), 1,
      anon_sym_are,
  [3140] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(743), 1,
      anon_sym_staged,
  [3147] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(745), 1,
      anon_sym_be,
  [3154] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(747), 1,
      anon_sym_in,
  [3161] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(749), 1,
      aux_sym_source_token1,
  [3168] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(751), 1,
      aux_sym_source_token1,
  [3175] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(753), 1,
      anon_sym_files,
  [3182] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(755), 1,
      anon_sym_COLON,
  [3189] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(757), 1,
      aux_sym_source_token1,
  [3196] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(759), 1,
      aux_sym_source_token1,
  [3203] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(761), 1,
      anon_sym_detached,
  [3210] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(763), 1,
      anon_sym_branch,
  [3217] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(765), 1,
      anon_sym_branch,
  [3224] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(767), 1,
      anon_sym_rebase,
  [3231] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(769), 1,
      aux_sym_source_token1,
  [3238] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(771), 1,
      aux_sym_source_token1,
  [3245] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(773), 1,
      anon_sym_POUND2,
  [3252] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(775), 1,
      aux_sym_source_token1,
  [3259] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(777), 1,
      sym_commit,
  [3266] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(779), 1,
      anon_sym_onto,
  [3273] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [3280] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(783), 1,
      anon_sym_progress,
  [3287] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(785), 1,
      anon_sym_in,
  [3294] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(787), 1,
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
  [SMALL_STATE(19)] = 499,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 550,
  [SMALL_STATE(22)] = 566,
  [SMALL_STATE(23)] = 578,
  [SMALL_STATE(24)] = 598,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 628,
  [SMALL_STATE(27)] = 645,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 690,
  [SMALL_STATE(31)] = 705,
  [SMALL_STATE(32)] = 722,
  [SMALL_STATE(33)] = 735,
  [SMALL_STATE(34)] = 752,
  [SMALL_STATE(35)] = 767,
  [SMALL_STATE(36)] = 782,
  [SMALL_STATE(37)] = 797,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 827,
  [SMALL_STATE(40)] = 844,
  [SMALL_STATE(41)] = 860,
  [SMALL_STATE(42)] = 874,
  [SMALL_STATE(43)] = 890,
  [SMALL_STATE(44)] = 906,
  [SMALL_STATE(45)] = 922,
  [SMALL_STATE(46)] = 938,
  [SMALL_STATE(47)] = 954,
  [SMALL_STATE(48)] = 970,
  [SMALL_STATE(49)] = 982,
  [SMALL_STATE(50)] = 994,
  [SMALL_STATE(51)] = 1006,
  [SMALL_STATE(52)] = 1018,
  [SMALL_STATE(53)] = 1030,
  [SMALL_STATE(54)] = 1042,
  [SMALL_STATE(55)] = 1058,
  [SMALL_STATE(56)] = 1074,
  [SMALL_STATE(57)] = 1090,
  [SMALL_STATE(58)] = 1104,
  [SMALL_STATE(59)] = 1120,
  [SMALL_STATE(60)] = 1136,
  [SMALL_STATE(61)] = 1149,
  [SMALL_STATE(62)] = 1160,
  [SMALL_STATE(63)] = 1173,
  [SMALL_STATE(64)] = 1186,
  [SMALL_STATE(65)] = 1195,
  [SMALL_STATE(66)] = 1208,
  [SMALL_STATE(67)] = 1217,
  [SMALL_STATE(68)] = 1230,
  [SMALL_STATE(69)] = 1239,
  [SMALL_STATE(70)] = 1252,
  [SMALL_STATE(71)] = 1261,
  [SMALL_STATE(72)] = 1274,
  [SMALL_STATE(73)] = 1287,
  [SMALL_STATE(74)] = 1300,
  [SMALL_STATE(75)] = 1309,
  [SMALL_STATE(76)] = 1322,
  [SMALL_STATE(77)] = 1331,
  [SMALL_STATE(78)] = 1344,
  [SMALL_STATE(79)] = 1357,
  [SMALL_STATE(80)] = 1370,
  [SMALL_STATE(81)] = 1383,
  [SMALL_STATE(82)] = 1396,
  [SMALL_STATE(83)] = 1409,
  [SMALL_STATE(84)] = 1422,
  [SMALL_STATE(85)] = 1435,
  [SMALL_STATE(86)] = 1448,
  [SMALL_STATE(87)] = 1461,
  [SMALL_STATE(88)] = 1474,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1496,
  [SMALL_STATE(91)] = 1509,
  [SMALL_STATE(92)] = 1522,
  [SMALL_STATE(93)] = 1535,
  [SMALL_STATE(94)] = 1544,
  [SMALL_STATE(95)] = 1557,
  [SMALL_STATE(96)] = 1566,
  [SMALL_STATE(97)] = 1579,
  [SMALL_STATE(98)] = 1588,
  [SMALL_STATE(99)] = 1597,
  [SMALL_STATE(100)] = 1610,
  [SMALL_STATE(101)] = 1623,
  [SMALL_STATE(102)] = 1636,
  [SMALL_STATE(103)] = 1649,
  [SMALL_STATE(104)] = 1659,
  [SMALL_STATE(105)] = 1669,
  [SMALL_STATE(106)] = 1679,
  [SMALL_STATE(107)] = 1689,
  [SMALL_STATE(108)] = 1699,
  [SMALL_STATE(109)] = 1709,
  [SMALL_STATE(110)] = 1719,
  [SMALL_STATE(111)] = 1729,
  [SMALL_STATE(112)] = 1739,
  [SMALL_STATE(113)] = 1749,
  [SMALL_STATE(114)] = 1759,
  [SMALL_STATE(115)] = 1769,
  [SMALL_STATE(116)] = 1779,
  [SMALL_STATE(117)] = 1789,
  [SMALL_STATE(118)] = 1797,
  [SMALL_STATE(119)] = 1805,
  [SMALL_STATE(120)] = 1815,
  [SMALL_STATE(121)] = 1825,
  [SMALL_STATE(122)] = 1835,
  [SMALL_STATE(123)] = 1845,
  [SMALL_STATE(124)] = 1855,
  [SMALL_STATE(125)] = 1865,
  [SMALL_STATE(126)] = 1875,
  [SMALL_STATE(127)] = 1885,
  [SMALL_STATE(128)] = 1895,
  [SMALL_STATE(129)] = 1905,
  [SMALL_STATE(130)] = 1915,
  [SMALL_STATE(131)] = 1922,
  [SMALL_STATE(132)] = 1929,
  [SMALL_STATE(133)] = 1936,
  [SMALL_STATE(134)] = 1943,
  [SMALL_STATE(135)] = 1950,
  [SMALL_STATE(136)] = 1957,
  [SMALL_STATE(137)] = 1964,
  [SMALL_STATE(138)] = 1971,
  [SMALL_STATE(139)] = 1978,
  [SMALL_STATE(140)] = 1985,
  [SMALL_STATE(141)] = 1992,
  [SMALL_STATE(142)] = 1999,
  [SMALL_STATE(143)] = 2006,
  [SMALL_STATE(144)] = 2013,
  [SMALL_STATE(145)] = 2020,
  [SMALL_STATE(146)] = 2027,
  [SMALL_STATE(147)] = 2034,
  [SMALL_STATE(148)] = 2041,
  [SMALL_STATE(149)] = 2048,
  [SMALL_STATE(150)] = 2055,
  [SMALL_STATE(151)] = 2062,
  [SMALL_STATE(152)] = 2069,
  [SMALL_STATE(153)] = 2076,
  [SMALL_STATE(154)] = 2083,
  [SMALL_STATE(155)] = 2090,
  [SMALL_STATE(156)] = 2097,
  [SMALL_STATE(157)] = 2104,
  [SMALL_STATE(158)] = 2111,
  [SMALL_STATE(159)] = 2118,
  [SMALL_STATE(160)] = 2125,
  [SMALL_STATE(161)] = 2132,
  [SMALL_STATE(162)] = 2139,
  [SMALL_STATE(163)] = 2146,
  [SMALL_STATE(164)] = 2153,
  [SMALL_STATE(165)] = 2160,
  [SMALL_STATE(166)] = 2167,
  [SMALL_STATE(167)] = 2174,
  [SMALL_STATE(168)] = 2181,
  [SMALL_STATE(169)] = 2188,
  [SMALL_STATE(170)] = 2195,
  [SMALL_STATE(171)] = 2202,
  [SMALL_STATE(172)] = 2209,
  [SMALL_STATE(173)] = 2216,
  [SMALL_STATE(174)] = 2223,
  [SMALL_STATE(175)] = 2230,
  [SMALL_STATE(176)] = 2237,
  [SMALL_STATE(177)] = 2244,
  [SMALL_STATE(178)] = 2251,
  [SMALL_STATE(179)] = 2258,
  [SMALL_STATE(180)] = 2265,
  [SMALL_STATE(181)] = 2272,
  [SMALL_STATE(182)] = 2279,
  [SMALL_STATE(183)] = 2286,
  [SMALL_STATE(184)] = 2293,
  [SMALL_STATE(185)] = 2300,
  [SMALL_STATE(186)] = 2307,
  [SMALL_STATE(187)] = 2314,
  [SMALL_STATE(188)] = 2321,
  [SMALL_STATE(189)] = 2328,
  [SMALL_STATE(190)] = 2335,
  [SMALL_STATE(191)] = 2342,
  [SMALL_STATE(192)] = 2349,
  [SMALL_STATE(193)] = 2356,
  [SMALL_STATE(194)] = 2363,
  [SMALL_STATE(195)] = 2370,
  [SMALL_STATE(196)] = 2377,
  [SMALL_STATE(197)] = 2384,
  [SMALL_STATE(198)] = 2391,
  [SMALL_STATE(199)] = 2398,
  [SMALL_STATE(200)] = 2405,
  [SMALL_STATE(201)] = 2412,
  [SMALL_STATE(202)] = 2419,
  [SMALL_STATE(203)] = 2426,
  [SMALL_STATE(204)] = 2433,
  [SMALL_STATE(205)] = 2440,
  [SMALL_STATE(206)] = 2447,
  [SMALL_STATE(207)] = 2454,
  [SMALL_STATE(208)] = 2461,
  [SMALL_STATE(209)] = 2468,
  [SMALL_STATE(210)] = 2475,
  [SMALL_STATE(211)] = 2482,
  [SMALL_STATE(212)] = 2489,
  [SMALL_STATE(213)] = 2496,
  [SMALL_STATE(214)] = 2503,
  [SMALL_STATE(215)] = 2510,
  [SMALL_STATE(216)] = 2517,
  [SMALL_STATE(217)] = 2524,
  [SMALL_STATE(218)] = 2531,
  [SMALL_STATE(219)] = 2538,
  [SMALL_STATE(220)] = 2545,
  [SMALL_STATE(221)] = 2552,
  [SMALL_STATE(222)] = 2559,
  [SMALL_STATE(223)] = 2566,
  [SMALL_STATE(224)] = 2573,
  [SMALL_STATE(225)] = 2580,
  [SMALL_STATE(226)] = 2587,
  [SMALL_STATE(227)] = 2594,
  [SMALL_STATE(228)] = 2601,
  [SMALL_STATE(229)] = 2608,
  [SMALL_STATE(230)] = 2615,
  [SMALL_STATE(231)] = 2622,
  [SMALL_STATE(232)] = 2629,
  [SMALL_STATE(233)] = 2636,
  [SMALL_STATE(234)] = 2643,
  [SMALL_STATE(235)] = 2650,
  [SMALL_STATE(236)] = 2657,
  [SMALL_STATE(237)] = 2664,
  [SMALL_STATE(238)] = 2671,
  [SMALL_STATE(239)] = 2678,
  [SMALL_STATE(240)] = 2685,
  [SMALL_STATE(241)] = 2692,
  [SMALL_STATE(242)] = 2699,
  [SMALL_STATE(243)] = 2706,
  [SMALL_STATE(244)] = 2713,
  [SMALL_STATE(245)] = 2720,
  [SMALL_STATE(246)] = 2727,
  [SMALL_STATE(247)] = 2734,
  [SMALL_STATE(248)] = 2741,
  [SMALL_STATE(249)] = 2748,
  [SMALL_STATE(250)] = 2755,
  [SMALL_STATE(251)] = 2762,
  [SMALL_STATE(252)] = 2769,
  [SMALL_STATE(253)] = 2776,
  [SMALL_STATE(254)] = 2783,
  [SMALL_STATE(255)] = 2790,
  [SMALL_STATE(256)] = 2797,
  [SMALL_STATE(257)] = 2804,
  [SMALL_STATE(258)] = 2811,
  [SMALL_STATE(259)] = 2818,
  [SMALL_STATE(260)] = 2825,
  [SMALL_STATE(261)] = 2832,
  [SMALL_STATE(262)] = 2839,
  [SMALL_STATE(263)] = 2846,
  [SMALL_STATE(264)] = 2853,
  [SMALL_STATE(265)] = 2860,
  [SMALL_STATE(266)] = 2867,
  [SMALL_STATE(267)] = 2874,
  [SMALL_STATE(268)] = 2881,
  [SMALL_STATE(269)] = 2888,
  [SMALL_STATE(270)] = 2895,
  [SMALL_STATE(271)] = 2902,
  [SMALL_STATE(272)] = 2909,
  [SMALL_STATE(273)] = 2916,
  [SMALL_STATE(274)] = 2923,
  [SMALL_STATE(275)] = 2930,
  [SMALL_STATE(276)] = 2937,
  [SMALL_STATE(277)] = 2944,
  [SMALL_STATE(278)] = 2951,
  [SMALL_STATE(279)] = 2958,
  [SMALL_STATE(280)] = 2965,
  [SMALL_STATE(281)] = 2972,
  [SMALL_STATE(282)] = 2979,
  [SMALL_STATE(283)] = 2986,
  [SMALL_STATE(284)] = 2993,
  [SMALL_STATE(285)] = 3000,
  [SMALL_STATE(286)] = 3007,
  [SMALL_STATE(287)] = 3014,
  [SMALL_STATE(288)] = 3021,
  [SMALL_STATE(289)] = 3028,
  [SMALL_STATE(290)] = 3035,
  [SMALL_STATE(291)] = 3042,
  [SMALL_STATE(292)] = 3049,
  [SMALL_STATE(293)] = 3056,
  [SMALL_STATE(294)] = 3063,
  [SMALL_STATE(295)] = 3070,
  [SMALL_STATE(296)] = 3077,
  [SMALL_STATE(297)] = 3084,
  [SMALL_STATE(298)] = 3091,
  [SMALL_STATE(299)] = 3098,
  [SMALL_STATE(300)] = 3105,
  [SMALL_STATE(301)] = 3112,
  [SMALL_STATE(302)] = 3119,
  [SMALL_STATE(303)] = 3126,
  [SMALL_STATE(304)] = 3133,
  [SMALL_STATE(305)] = 3140,
  [SMALL_STATE(306)] = 3147,
  [SMALL_STATE(307)] = 3154,
  [SMALL_STATE(308)] = 3161,
  [SMALL_STATE(309)] = 3168,
  [SMALL_STATE(310)] = 3175,
  [SMALL_STATE(311)] = 3182,
  [SMALL_STATE(312)] = 3189,
  [SMALL_STATE(313)] = 3196,
  [SMALL_STATE(314)] = 3203,
  [SMALL_STATE(315)] = 3210,
  [SMALL_STATE(316)] = 3217,
  [SMALL_STATE(317)] = 3224,
  [SMALL_STATE(318)] = 3231,
  [SMALL_STATE(319)] = 3238,
  [SMALL_STATE(320)] = 3245,
  [SMALL_STATE(321)] = 3252,
  [SMALL_STATE(322)] = 3259,
  [SMALL_STATE(323)] = 3266,
  [SMALL_STATE(324)] = 3273,
  [SMALL_STATE(325)] = 3280,
  [SMALL_STATE(326)] = 3287,
  [SMALL_STATE(327)] = 3294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(78),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(24),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat2, 2), SHIFT_REPEAT(24),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(35),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(67),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(41),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(61),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(61),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(72),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(73),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(75),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(63),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(32),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(86),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(92),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(16),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [559] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
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
