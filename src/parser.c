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
  aux_sym_message_token3 = 7,
  anon_sym_POUND = 8,
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
  [aux_sym_message_token3] = "message_token3",
  [anon_sym_POUND] = "#",
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
  [aux_sym_message_token3] = aux_sym_message_token3,
  [anon_sym_POUND] = anon_sym_POUND,
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
  [aux_sym_message_token3] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 14,
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
  [31] = 31,
  [32] = 32,
  [33] = 25,
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
  [48] = 42,
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
  [59] = 59,
  [60] = 60,
  [61] = 22,
  [62] = 31,
  [63] = 38,
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
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 67,
  [80] = 60,
  [81] = 81,
  [82] = 82,
  [83] = 77,
  [84] = 30,
  [85] = 85,
  [86] = 27,
  [87] = 35,
  [88] = 29,
  [89] = 89,
  [90] = 90,
  [91] = 81,
  [92] = 58,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 82,
  [98] = 98,
  [99] = 85,
  [100] = 100,
  [101] = 93,
  [102] = 73,
  [103] = 57,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 115,
  [117] = 108,
  [118] = 55,
  [119] = 50,
  [120] = 51,
  [121] = 52,
  [122] = 122,
  [123] = 53,
  [124] = 124,
  [125] = 122,
  [126] = 126,
  [127] = 109,
  [128] = 106,
  [129] = 107,
  [130] = 114,
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
  [245] = 237,
  [246] = 246,
  [247] = 236,
  [248] = 248,
  [249] = 209,
  [250] = 214,
  [251] = 219,
  [252] = 223,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 205,
  [258] = 210,
  [259] = 215,
  [260] = 220,
  [261] = 201,
  [262] = 206,
  [263] = 211,
  [264] = 216,
  [265] = 197,
  [266] = 202,
  [267] = 207,
  [268] = 212,
  [269] = 193,
  [270] = 198,
  [271] = 203,
  [272] = 208,
  [273] = 189,
  [274] = 194,
  [275] = 199,
  [276] = 204,
  [277] = 185,
  [278] = 190,
  [279] = 195,
  [280] = 200,
  [281] = 181,
  [282] = 186,
  [283] = 191,
  [284] = 196,
  [285] = 177,
  [286] = 182,
  [287] = 187,
  [288] = 192,
  [289] = 173,
  [290] = 178,
  [291] = 183,
  [292] = 188,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 131,
  [300] = 170,
  [301] = 176,
  [302] = 159,
  [303] = 165,
  [304] = 171,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 254,
  [309] = 253,
  [310] = 310,
  [311] = 311,
  [312] = 140,
  [313] = 149,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 153,
  [319] = 319,
  [320] = 180,
  [321] = 221,
  [322] = 228,
  [323] = 235,
  [324] = 246,
  [325] = 294,
  [326] = 307,
  [327] = 317,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '\r') ADVANCE(306);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '(') ADVANCE(286);
      if (lookahead == ')') ADVANCE(286);
      if (lookahead == ',') ADVANCE(286);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == 'C') ADVANCE(286);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'L') ADVANCE(286);
      if (lookahead == 'N') ADVANCE(286);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead == 'U') ADVANCE(286);
      if (lookahead == 'Y') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(286);
      if (lookahead == 'b') ADVANCE(286);
      if (lookahead == 'c') ADVANCE(286);
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(286);
      if (lookahead == 'h') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(286);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(286);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(286);
      if (lookahead == 'p') ADVANCE(286);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 't') ADVANCE(286);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == 'w') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(281);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(489);
      if (lookahead == '@') ADVANCE(450);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(329);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == 'd') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(184);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(509);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'C') ADVANCE(467);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'O') ADVANCE(472);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'Y') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0) ADVANCE(326);
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
      if (lookahead == '.') ADVANCE(359);
      END_STATE();
    case 34:
      if (lookahead == '8') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '>') ADVANCE(380);
      END_STATE();
    case 37:
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(307);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(305);
      END_STATE();
    case 38:
      if (lookahead == 'D') ADVANCE(200);
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
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(199);
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
      if (lookahead == 'w') ADVANCE(203);
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
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(204);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(505);
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
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(362);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(504);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(334);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(379);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(377);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(272);
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
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(344);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(357);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(347);
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
      if (lookahead == 'y') ADVANCE(363);
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
      if (lookahead == 'f') ADVANCE(361);
      if (lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(154);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(343);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(89);
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
      if (lookahead == 'h') ADVANCE(358);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(328);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(500);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == 't') ADVANCE(372);
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
      if (lookahead == 'r') ADVANCE(202);
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
      if (lookahead == 'k') ADVANCE(498);
      END_STATE();
    case 157:
      if (lookahead == 'l') ADVANCE(506);
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
      if (lookahead == 'l') ADVANCE(91);
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
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 's') ADVANCE(355);
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
      if (lookahead == 'n') ADVANCE(201);
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
      if (lookahead == 'n') ADVANCE(87);
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
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(315);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 206:
      if (lookahead == 'o') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(356);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(503);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(502);
      END_STATE();
    case 210:
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(326);
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
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 224:
      if (lookahead == 's') ADVANCE(313);
      END_STATE();
    case 225:
      if (lookahead == 's') ADVANCE(345);
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
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(340);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(352);
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
      if (lookahead == 't') ADVANCE(197);
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
      if (lookahead == 'u') ADVANCE(316);
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
      if (lookahead == 'v') ADVANCE(88);
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
      if (lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(238);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 263:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 264:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 265:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(446);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(269);
      END_STATE();
    case 271:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 272:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(285);
      END_STATE();
    case 273:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '\r') ADVANCE(306);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '@') ADVANCE(304);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0) ADVANCE(305);
      END_STATE();
    case 274:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(509);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 275:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(309);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead == ',') ADVANCE(369);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(331);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == ';') ADVANCE(314);
      if (lookahead == 'L') ADVANCE(41);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'Y') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'c') ADVANCE(198);
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
          lookahead == ' ') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 276:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(309);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0) ADVANCE(286);
      END_STATE();
    case 277:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == 'C') ADVANCE(467);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'O') ADVANCE(472);
      if (lookahead == 'U') ADVANCE(473);
      if (lookahead == 'Y') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 278:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(449);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(490);
      END_STATE();
    case 279:
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_source_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_source_token2);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_subject_token1);
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
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(305);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(326);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(307);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '#') ADVANCE(512);
      if (lookahead == '@') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(511);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_message_token3);
      if (lookahead == '\n') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_message_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_onto);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(326);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(490);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(512);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
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
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(280);
      if (lookahead == '\n') ADVANCE(281);
      if (lookahead == '\r') ADVANCE(514);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0) ADVANCE(515);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 276},
  [2] = {.lex_state = 277},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 275},
  [5] = {.lex_state = 275},
  [6] = {.lex_state = 275},
  [7] = {.lex_state = 275},
  [8] = {.lex_state = 273},
  [9] = {.lex_state = 273},
  [10] = {.lex_state = 275},
  [11] = {.lex_state = 275},
  [12] = {.lex_state = 275},
  [13] = {.lex_state = 273},
  [14] = {.lex_state = 275},
  [15] = {.lex_state = 275},
  [16] = {.lex_state = 273},
  [17] = {.lex_state = 273},
  [18] = {.lex_state = 275},
  [19] = {.lex_state = 275},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 273},
  [22] = {.lex_state = 274},
  [23] = {.lex_state = 275},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 275},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 275},
  [28] = {.lex_state = 279},
  [29] = {.lex_state = 278},
  [30] = {.lex_state = 275},
  [31] = {.lex_state = 275},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 275},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 278},
  [36] = {.lex_state = 279},
  [37] = {.lex_state = 279},
  [38] = {.lex_state = 275},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 516},
  [41] = {.lex_state = 516},
  [42] = {.lex_state = 275},
  [43] = {.lex_state = 516},
  [44] = {.lex_state = 516},
  [45] = {.lex_state = 516},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 516},
  [48] = {.lex_state = 275},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 275},
  [51] = {.lex_state = 275},
  [52] = {.lex_state = 275},
  [53] = {.lex_state = 275},
  [54] = {.lex_state = 516},
  [55] = {.lex_state = 275},
  [56] = {.lex_state = 516},
  [57] = {.lex_state = 275},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 516},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 274},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 277},
  [65] = {.lex_state = 275},
  [66] = {.lex_state = 277},
  [67] = {.lex_state = 274},
  [68] = {.lex_state = 277},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 277},
  [71] = {.lex_state = 277},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 213},
  [74] = {.lex_state = 213},
  [75] = {.lex_state = 277},
  [76] = {.lex_state = 277},
  [77] = {.lex_state = 213},
  [78] = {.lex_state = 516},
  [79] = {.lex_state = 274},
  [80] = {.lex_state = 274},
  [81] = {.lex_state = 213},
  [82] = {.lex_state = 213},
  [83] = {.lex_state = 213},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 213},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 274},
  [90] = {.lex_state = 277},
  [91] = {.lex_state = 213},
  [92] = {.lex_state = 274},
  [93] = {.lex_state = 213},
  [94] = {.lex_state = 277},
  [95] = {.lex_state = 274},
  [96] = {.lex_state = 277},
  [97] = {.lex_state = 213},
  [98] = {.lex_state = 277},
  [99] = {.lex_state = 213},
  [100] = {.lex_state = 277},
  [101] = {.lex_state = 213},
  [102] = {.lex_state = 213},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 275},
  [105] = {.lex_state = 263},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 275},
  [111] = {.lex_state = 275},
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
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 275},
  [132] = {.lex_state = 264},
  [133] = {.lex_state = 275},
  [134] = {.lex_state = 275},
  [135] = {.lex_state = 275},
  [136] = {.lex_state = 275},
  [137] = {.lex_state = 275},
  [138] = {.lex_state = 277},
  [139] = {.lex_state = 275},
  [140] = {.lex_state = 277},
  [141] = {.lex_state = 277},
  [142] = {.lex_state = 275},
  [143] = {.lex_state = 275},
  [144] = {.lex_state = 275},
  [145] = {.lex_state = 275},
  [146] = {.lex_state = 275},
  [147] = {.lex_state = 275},
  [148] = {.lex_state = 3},
  [149] = {.lex_state = 277},
  [150] = {.lex_state = 275},
  [151] = {.lex_state = 275},
  [152] = {.lex_state = 275},
  [153] = {.lex_state = 277},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 275},
  [156] = {.lex_state = 275},
  [157] = {.lex_state = 275},
  [158] = {.lex_state = 275},
  [159] = {.lex_state = 275},
  [160] = {.lex_state = 275},
  [161] = {.lex_state = 275},
  [162] = {.lex_state = 275},
  [163] = {.lex_state = 275},
  [164] = {.lex_state = 275},
  [165] = {.lex_state = 275},
  [166] = {.lex_state = 277},
  [167] = {.lex_state = 277},
  [168] = {.lex_state = 275},
  [169] = {.lex_state = 275},
  [170] = {.lex_state = 275},
  [171] = {.lex_state = 275},
  [172] = {.lex_state = 277},
  [173] = {.lex_state = 275},
  [174] = {.lex_state = 275},
  [175] = {.lex_state = 275},
  [176] = {.lex_state = 275},
  [177] = {.lex_state = 3},
  [178] = {.lex_state = 275},
  [179] = {.lex_state = 264},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 264},
  [182] = {.lex_state = 3},
  [183] = {.lex_state = 275},
  [184] = {.lex_state = 275},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 264},
  [187] = {.lex_state = 3},
  [188] = {.lex_state = 275},
  [189] = {.lex_state = 275},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 264},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 275},
  [195] = {.lex_state = 3},
  [196] = {.lex_state = 264},
  [197] = {.lex_state = 3},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 275},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 3},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 275},
  [205] = {.lex_state = 275},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 3},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 277},
  [210] = {.lex_state = 275},
  [211] = {.lex_state = 3},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 277},
  [214] = {.lex_state = 277},
  [215] = {.lex_state = 275},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 277},
  [220] = {.lex_state = 275},
  [221] = {.lex_state = 277},
  [222] = {.lex_state = 275},
  [223] = {.lex_state = 277},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 264},
  [226] = {.lex_state = 275},
  [227] = {.lex_state = 277},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 3},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 275},
  [233] = {.lex_state = 275},
  [234] = {.lex_state = 277},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 277},
  [237] = {.lex_state = 277},
  [238] = {.lex_state = 275},
  [239] = {.lex_state = 264},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 275},
  [242] = {.lex_state = 275},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 275},
  [245] = {.lex_state = 277},
  [246] = {.lex_state = 275},
  [247] = {.lex_state = 277},
  [248] = {.lex_state = 277},
  [249] = {.lex_state = 277},
  [250] = {.lex_state = 277},
  [251] = {.lex_state = 277},
  [252] = {.lex_state = 277},
  [253] = {.lex_state = 277},
  [254] = {.lex_state = 277},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 275},
  [257] = {.lex_state = 275},
  [258] = {.lex_state = 275},
  [259] = {.lex_state = 275},
  [260] = {.lex_state = 275},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 3},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 3},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 3},
  [273] = {.lex_state = 275},
  [274] = {.lex_state = 275},
  [275] = {.lex_state = 275},
  [276] = {.lex_state = 275},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 264},
  [282] = {.lex_state = 264},
  [283] = {.lex_state = 264},
  [284] = {.lex_state = 264},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 3},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 275},
  [290] = {.lex_state = 275},
  [291] = {.lex_state = 275},
  [292] = {.lex_state = 275},
  [293] = {.lex_state = 58},
  [294] = {.lex_state = 275},
  [295] = {.lex_state = 275},
  [296] = {.lex_state = 277},
  [297] = {.lex_state = 275},
  [298] = {.lex_state = 6},
  [299] = {.lex_state = 275},
  [300] = {.lex_state = 275},
  [301] = {.lex_state = 275},
  [302] = {.lex_state = 275},
  [303] = {.lex_state = 275},
  [304] = {.lex_state = 275},
  [305] = {.lex_state = 275},
  [306] = {.lex_state = 58},
  [307] = {.lex_state = 275},
  [308] = {.lex_state = 277},
  [309] = {.lex_state = 277},
  [310] = {.lex_state = 275},
  [311] = {.lex_state = 275},
  [312] = {.lex_state = 277},
  [313] = {.lex_state = 277},
  [314] = {.lex_state = 275},
  [315] = {.lex_state = 275},
  [316] = {.lex_state = 275},
  [317] = {.lex_state = 275},
  [318] = {.lex_state = 277},
  [319] = {.lex_state = 277},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 277},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 3},
  [324] = {.lex_state = 275},
  [325] = {.lex_state = 275},
  [326] = {.lex_state = 275},
  [327] = {.lex_state = 275},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [aux_sym_source_token2] = ACTIONS(1),
    [aux_sym_subject_token1] = ACTIONS(1),
    [aux_sym_message_token1] = ACTIONS(3),
    [aux_sym_message_token3] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_interactive] = ACTIONS(1),
    [anon_sym_rebase] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_progress] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_onto] = ACTIONS(1),
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
    STATE(90), 4,
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
    STATE(88), 1,
      aux_sym__comment_body_repeat1,
    STATE(253), 1,
      sym__change_header,
    STATE(254), 1,
      sym_header,
    STATE(90), 4,
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
  [218] = 10,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      aux_sym_source_token1,
    ACTIONS(51), 1,
      aux_sym_source_token2,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      sym_user,
    STATE(49), 1,
      aux_sym_message_repeat1,
    ACTIONS(55), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
    STATE(13), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [252] = 10,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(65), 1,
      aux_sym_source_token2,
    STATE(49), 1,
      aux_sym_message_repeat1,
    ACTIONS(55), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
    STATE(16), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [286] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(67), 1,
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
  [308] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(69), 1,
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
  [330] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(71), 1,
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
  [352] = 10,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(63), 1,
      aux_sym_source_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_source_token2,
    STATE(49), 1,
      aux_sym_message_repeat1,
    ACTIONS(55), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
    STATE(16), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [386] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(77), 1,
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
  [408] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(79), 1,
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
  [430] = 9,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(86), 1,
      aux_sym_message_token1,
    ACTIONS(92), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym_user,
    STATE(49), 1,
      aux_sym_message_repeat1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      aux_sym_source_token2,
    ACTIONS(89), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
    STATE(16), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [462] = 10,
    ACTIONS(53), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      sym_user,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      aux_sym_source_token2,
    ACTIONS(98), 1,
      aux_sym_source_token1,
    STATE(49), 1,
      aux_sym_message_repeat1,
    ACTIONS(55), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(319), 2,
      sym_message,
      sym_comment,
  [496] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(100), 1,
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
  [518] = 3,
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
  [537] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(237), 1,
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
  [555] = 2,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      aux_sym_source_token2,
      sym_user,
    ACTIONS(108), 5,
      aux_sym_source_token1,
      aux_sym_message_token1,
      aux_sym_message_token2,
      aux_sym_message_token3,
      anon_sym_POUND,
  [568] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(110), 1,
      aux_sym_source_token2,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(236), 1,
      sym_path,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [588] = 4,
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
  [604] = 5,
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
  [621] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(237), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [634] = 5,
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
  [651] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [666] = 4,
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
  [681] = 4,
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
  [696] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(30), 1,
      aux_sym_summary_repeat1,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [711] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(145), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [726] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(124), 1,
      sym__word,
    ACTIONS(147), 1,
      aux_sym_source_token1,
    STATE(24), 1,
      aux_sym_message_repeat2,
    ACTIONS(126), 2,
      sym_user,
      sym_item,
  [743] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(245), 1,
      sym_change,
    ACTIONS(104), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [756] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(147), 1,
      aux_sym_source_token1,
    ACTIONS(149), 1,
      sym__word,
    STATE(26), 1,
      aux_sym_message_repeat2,
    ACTIONS(151), 2,
      sym_user,
      sym_item,
  [773] = 4,
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
  [788] = 4,
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
  [803] = 4,
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
  [818] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(169), 1,
      anon_sym_POUND,
    STATE(38), 1,
      aux_sym_summary_repeat2,
    ACTIONS(167), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [833] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(172), 1,
      aux_sym_source_token1,
    ACTIONS(174), 1,
      sym__word,
    STATE(32), 1,
      aux_sym_message_repeat2,
    ACTIONS(176), 2,
      sym_user,
      sym_item,
  [850] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(41), 1,
      aux_sym__rest,
  [866] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [882] = 5,
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
  [898] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(44), 1,
      aux_sym__rest,
  [914] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      aux_sym__rest,
  [930] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(56), 1,
      aux_sym__rest,
  [946] = 4,
    ACTIONS(188), 1,
      aux_sym_message_token1,
    ACTIONS(193), 1,
      sym_user,
    STATE(46), 1,
      aux_sym_message_repeat1,
    ACTIONS(191), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
  [960] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      aux_sym_source_token1,
    ACTIONS(200), 1,
      aux_sym__rest_token1,
    STATE(47), 1,
      aux_sym__rest,
  [976] = 5,
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
  [992] = 4,
    ACTIONS(203), 1,
      aux_sym_message_token1,
    ACTIONS(207), 1,
      sym_user,
    STATE(46), 1,
      aux_sym_message_repeat1,
    ACTIONS(205), 2,
      aux_sym_message_token2,
      aux_sym_message_token3,
  [1006] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(211), 1,
      anon_sym_POUND,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1018] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(215), 1,
      anon_sym_POUND,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1030] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(219), 1,
      anon_sym_POUND,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1042] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(223), 1,
      anon_sym_POUND,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1054] = 5,
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
  [1070] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(229), 1,
      anon_sym_POUND,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1082] = 5,
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
  [1098] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(235), 1,
      anon_sym_POUND,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1110] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(239), 1,
      aux_sym_path_token1,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(237), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [1124] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      aux_sym_source_token1,
    ACTIONS(182), 1,
      aux_sym__rest_token1,
    STATE(54), 1,
      aux_sym__rest,
  [1140] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(244), 1,
      aux_sym_path_token1,
    STATE(58), 1,
      aux_sym_path_repeat1,
    ACTIONS(242), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [1154] = 5,
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
  [1170] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(246), 1,
      anon_sym_POUND,
    STATE(63), 1,
      aux_sym_summary_repeat2,
  [1183] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(167), 1,
      aux_sym_source_token1,
    ACTIONS(248), 1,
      anon_sym_POUND,
    STATE(63), 1,
      aux_sym_summary_repeat2,
  [1196] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1205] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(253), 1,
      anon_sym_up,
    ACTIONS(255), 1,
      anon_sym_ahead,
    ACTIONS(257), 1,
      anon_sym_behind,
  [1218] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1227] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(236), 1,
      sym_path,
  [1240] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1249] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(263), 1,
      aux_sym_source_token1,
    ACTIONS(265), 1,
      aux_sym__rebase_summary_token1,
    STATE(72), 1,
      aux_sym__rebase_summary_repeat2,
  [1262] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1271] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_source_token2,
    ACTIONS(269), 1,
      aux_sym_source_token1,
  [1284] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(271), 1,
      aux_sym_source_token1,
    ACTIONS(273), 1,
      aux_sym__rebase_summary_token1,
    STATE(72), 1,
      aux_sym__rebase_summary_repeat2,
  [1297] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(278), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1310] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(280), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(283), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1323] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1332] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1341] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(289), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    STATE(73), 1,
      aux_sym__rebase_summary_repeat2,
  [1354] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(295), 1,
      aux_sym__rest_token1,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [1365] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(247), 1,
      sym_path,
  [1378] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(242), 1,
      aux_sym_source_token1,
    ACTIONS(297), 1,
      aux_sym_path_token1,
    STATE(92), 1,
      aux_sym_path_repeat1,
  [1391] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(299), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(301), 1,
      anon_sym_rebasing,
    STATE(82), 1,
      aux_sym__rebase_summary_repeat2,
  [1404] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(303), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1417] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    STATE(102), 1,
      aux_sym__rebase_summary_repeat2,
  [1430] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(140), 1,
      aux_sym_source_token1,
    ACTIONS(309), 1,
      anon_sym_POUND,
    STATE(84), 1,
      aux_sym_summary_repeat1,
  [1443] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(303), 1,
      anon_sym_rebasing,
    ACTIONS(312), 1,
      aux_sym__rebase_summary_token1,
    STATE(93), 1,
      aux_sym__rebase_summary_repeat2,
  [1456] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(314), 1,
      anon_sym_POUND,
    STATE(84), 1,
      aux_sym_summary_repeat1,
  [1469] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(153), 1,
      aux_sym_source_token1,
    ACTIONS(316), 1,
      sym__word,
    STATE(87), 1,
      aux_sym__comment_body_repeat1,
  [1482] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(136), 1,
      aux_sym_source_token1,
    ACTIONS(319), 1,
      sym__word,
    STATE(87), 1,
      aux_sym__comment_body_repeat1,
  [1495] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      aux_sym_path_token1,
    STATE(60), 1,
      aux_sym_path_repeat1,
    STATE(104), 1,
      sym_path,
  [1508] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(323), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1517] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(325), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(327), 1,
      anon_sym_rebasing,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat2,
  [1530] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(237), 1,
      aux_sym_source_token1,
    ACTIONS(329), 1,
      aux_sym_path_token1,
    STATE(92), 1,
      aux_sym_path_repeat1,
  [1543] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(307), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1556] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(332), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1565] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(112), 1,
      aux_sym_path_token1,
    STATE(80), 1,
      aux_sym_path_repeat1,
    STATE(166), 1,
      sym_path,
  [1578] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1587] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(334), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1600] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(217), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1609] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(334), 1,
      anon_sym_rebasing,
    ACTIONS(336), 1,
      aux_sym__rebase_summary_token1,
    STATE(101), 1,
      aux_sym__rebase_summary_repeat2,
  [1622] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym_source_token2,
  [1631] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1644] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(276), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(338), 1,
      anon_sym_rebasing,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat2,
  [1657] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(233), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [1665] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(340), 1,
      aux_sym_source_token1,
    ACTIONS(342), 1,
      anon_sym_DASH_GT,
  [1675] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(344), 2,
      sym_commit,
      sym_branch,
  [1683] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(346), 1,
      anon_sym_POUND,
    STATE(27), 1,
      aux_sym_summary_repeat1,
  [1693] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(348), 1,
      anon_sym_POUND,
    STATE(31), 1,
      aux_sym_summary_repeat2,
  [1703] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1713] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(352), 1,
      anon_sym_POUND,
    STATE(114), 1,
      aux_sym__rebase_summary_repeat1,
  [1723] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(354), 1,
      anon_sym_to,
    ACTIONS(356), 1,
      anon_sym_not,
  [1733] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(358), 1,
      anon_sym_is,
    ACTIONS(360), 1,
      anon_sym_and,
  [1743] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(362), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1753] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(364), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1763] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(366), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1773] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      anon_sym_POUND,
    STATE(113), 1,
      aux_sym__rebase_summary_repeat1,
  [1783] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_POUND,
    STATE(112), 1,
      aux_sym__rebase_summary_repeat1,
  [1793] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1803] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(227), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [1811] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(209), 1,
      aux_sym_source_token1,
    ACTIONS(370), 1,
      anon_sym_POUND,
  [1821] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 1,
      aux_sym_source_token1,
    ACTIONS(372), 1,
      anon_sym_POUND,
  [1831] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      aux_sym_source_token1,
    ACTIONS(374), 1,
      anon_sym_POUND,
  [1841] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(376), 1,
      anon_sym_POUND,
    STATE(117), 1,
      aux_sym__rebase_summary_repeat1,
  [1851] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(221), 1,
      aux_sym_source_token1,
    ACTIONS(378), 1,
      anon_sym_POUND,
  [1861] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(380), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1871] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      anon_sym_POUND,
    STATE(108), 1,
      aux_sym__rebase_summary_repeat1,
  [1881] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(385), 1,
      aux_sym__rebase_summary_token1,
    STATE(69), 1,
      aux_sym__rebase_summary_repeat2,
  [1891] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      anon_sym_POUND,
    STATE(130), 1,
      aux_sym__rebase_summary_repeat1,
  [1901] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      anon_sym_POUND,
    STATE(86), 1,
      aux_sym_summary_repeat1,
  [1911] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      anon_sym_POUND,
    STATE(62), 1,
      aux_sym_summary_repeat2,
  [1921] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      anon_sym_POUND,
    STATE(124), 1,
      aux_sym__rebase_summary_repeat1,
  [1931] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      anon_sym_currently,
  [1938] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      sym_branch,
  [1945] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      anon_sym_DOT,
  [1952] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_by,
  [1959] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_LPAREN,
  [1966] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      aux_sym__rebase_header_token2,
  [1973] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [1980] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      aux_sym_source_token1,
  [1987] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      anon_sym_DOT,
  [1994] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      aux_sym_source_token1,
  [2001] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      aux_sym_source_token1,
  [2008] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_remaining,
  [2015] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      anon_sym_to,
  [2022] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      aux_sym__rebase_header_token1,
  [2029] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      aux_sym__rebase_header_token2,
  [2036] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      anon_sym_done,
  [2043] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      anon_sym_DOT,
  [2050] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      anon_sym_POUND,
  [2057] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      aux_sym_source_token1,
  [2064] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      aux_sym__branch_declaration_token1,
  [2071] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      anon_sym_done,
  [2078] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      anon_sym_remaining,
  [2085] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      aux_sym_source_token1,
  [2092] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      anon_sym_commands,
  [2099] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      aux_sym__rebase_header_token1,
  [2106] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      aux_sym__rebase_header_token1,
  [2113] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
  [2120] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      aux_sym__rebase_header_token1,
  [2127] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      anon_sym_are,
  [2134] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      aux_sym__branch_declaration_token1,
  [2141] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      aux_sym__rebase_header_token2,
  [2148] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      anon_sym_COLON,
  [2155] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [2162] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      anon_sym_SQUOTE_DOT,
  [2169] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      anon_sym_are,
  [2176] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      aux_sym_source_token1,
  [2183] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      aux_sym_source_token1,
  [2190] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [2197] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      anon_sym_COMMA,
  [2204] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      anon_sym_currently,
  [2211] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      anon_sym_are,
  [2218] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      aux_sym_source_token1,
  [2225] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      anon_sym_branch,
  [2232] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      aux_sym__rebase_header_token2,
  [2239] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      anon_sym_by,
  [2246] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      anon_sym_currently,
  [2253] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      anon_sym_SQUOTE,
  [2260] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      anon_sym_branch,
  [2267] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      sym_branch,
  [2274] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_POUND,
  [2281] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      sym_branch,
  [2288] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
  [2295] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      anon_sym_branch,
  [2302] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_diverged,
  [2309] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_SQUOTE,
  [2316] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      sym_branch,
  [2323] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
  [2330] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      anon_sym_branch,
  [2337] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      anon_sym_on,
  [2344] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      anon_sym_SQUOTE,
  [2351] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      sym_branch,
  [2358] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
  [2365] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      anon_sym_SQUOTE,
  [2372] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      anon_sym_on,
  [2379] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
  [2386] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      sym_branch,
  [2393] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      sym_commit,
  [2400] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_SQUOTE,
  [2407] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      anon_sym_on,
  [2414] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      anon_sym_SQUOTE,
  [2421] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      anon_sym_SQUOTE,
  [2428] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      sym_commit,
  [2435] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      anon_sym_SQUOTE,
  [2442] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      anon_sym_on,
  [2449] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      anon_sym_DOT,
  [2456] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
  [2463] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      sym_commit,
  [2470] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      anon_sym_SQUOTE,
  [2477] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      aux_sym_source_token1,
  [2484] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(553), 1,
      anon_sym_DOT,
  [2491] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(555), 1,
      anon_sym_SQUOTE,
  [2498] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(557), 1,
      sym_commit,
  [2505] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [2512] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(561), 1,
      aux_sym_source_token1,
  [2519] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(563), 1,
      anon_sym_DOT,
  [2526] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
  [2533] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(567), 1,
      anon_sym_SQUOTE,
  [2540] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(569), 1,
      anon_sym_SQUOTE,
  [2547] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(571), 1,
      aux_sym_source_token1,
  [2554] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(573), 1,
      anon_sym_DOT,
  [2561] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(575), 1,
      aux_sym_source_token1,
  [2568] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(577), 1,
      anon_sym_have,
  [2575] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(579), 1,
      aux_sym_source_token1,
  [2582] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(581), 1,
      anon_sym_SQUOTE,
  [2589] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(583), 1,
      sym_branch,
  [2596] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(585), 1,
      anon_sym_with,
  [2603] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(587), 1,
      aux_sym_source_token1,
  [2610] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(589), 1,
      sym_commit,
  [2617] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(591), 1,
      anon_sym_SQUOTE,
  [2624] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(593), 1,
      anon_sym_do,
  [2631] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(595), 1,
      anon_sym_SQUOTE,
  [2638] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(597), 1,
      anon_sym_date,
  [2645] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(599), 1,
      anon_sym_COLON,
  [2652] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(601), 1,
      aux_sym_source_token1,
  [2659] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(603), 1,
      anon_sym_onto,
  [2666] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(605), 1,
      aux_sym_source_token1,
  [2673] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(607), 1,
      aux_sym_source_token1,
  [2680] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(609), 1,
      anon_sym_COLON,
  [2687] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(611), 1,
      sym_branch,
  [2694] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(613), 1,
      anon_sym_SQUOTE,
  [2701] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(615), 1,
      anon_sym_of,
  [2708] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(617), 1,
      anon_sym_to,
  [2715] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(619), 1,
      anon_sym_commit,
  [2722] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [2729] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(623), 1,
      aux_sym_source_token1,
  [2736] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(625), 1,
      anon_sym_SEMI,
  [2743] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(627), 1,
      aux_sym_source_token1,
  [2750] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(629), 1,
      aux_sym_source_token1,
  [2757] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(631), 1,
      aux_sym_source_token1,
  [2764] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(633), 1,
      aux_sym_source_token1,
  [2771] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(635), 1,
      aux_sym_source_token1,
  [2778] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(637), 1,
      aux_sym_source_token1,
  [2785] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(639), 1,
      aux_sym_source_token1,
  [2792] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(641), 1,
      aux_sym_source_token1,
  [2799] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(643), 1,
      anon_sym_SQUOTE,
  [2806] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(645), 1,
      anon_sym_for,
  [2813] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(647), 1,
      anon_sym_DOT,
  [2820] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(649), 1,
      anon_sym_DOT,
  [2827] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(651), 1,
      anon_sym_DOT,
  [2834] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(653), 1,
      anon_sym_DOT,
  [2841] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(655), 1,
      anon_sym_SQUOTE,
  [2848] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(657), 1,
      anon_sym_SQUOTE,
  [2855] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(659), 1,
      anon_sym_SQUOTE,
  [2862] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(661), 1,
      anon_sym_SQUOTE,
  [2869] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(663), 1,
      sym_commit,
  [2876] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(665), 1,
      sym_commit,
  [2883] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(667), 1,
      sym_commit,
  [2890] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(669), 1,
      sym_commit,
  [2897] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(671), 1,
      anon_sym_SQUOTE,
  [2904] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(673), 1,
      anon_sym_SQUOTE,
  [2911] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(675), 1,
      anon_sym_SQUOTE,
  [2918] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(677), 1,
      anon_sym_SQUOTE,
  [2925] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(679), 1,
      anon_sym_on,
  [2932] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(681), 1,
      anon_sym_on,
  [2939] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(683), 1,
      anon_sym_on,
  [2946] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(685), 1,
      anon_sym_on,
  [2953] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(687), 1,
      anon_sym_SQUOTE,
  [2960] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(689), 1,
      anon_sym_SQUOTE,
  [2967] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(691), 1,
      anon_sym_SQUOTE,
  [2974] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(693), 1,
      anon_sym_SQUOTE,
  [2981] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(695), 1,
      sym_branch,
  [2988] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(697), 1,
      sym_branch,
  [2995] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(699), 1,
      sym_branch,
  [3002] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(701), 1,
      sym_branch,
  [3009] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(703), 1,
      anon_sym_SQUOTE,
  [3016] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(705), 1,
      anon_sym_SQUOTE,
  [3023] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(707), 1,
      anon_sym_SQUOTE,
  [3030] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(709), 1,
      anon_sym_SQUOTE,
  [3037] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(711), 1,
      anon_sym_branch,
  [3044] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(713), 1,
      anon_sym_branch,
  [3051] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(715), 1,
      anon_sym_branch,
  [3058] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(717), 1,
      anon_sym_branch,
  [3065] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(719), 1,
      anon_sym_committed,
  [3072] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(721), 1,
      anon_sym_progress,
  [3079] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(723), 1,
      anon_sym_COLON,
  [3086] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(725), 1,
      aux_sym_source_token1,
  [3093] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(727), 1,
      anon_sym_at,
  [3100] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(729), 1,
      sym__word,
  [3107] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(731), 1,
      anon_sym_currently,
  [3114] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(733), 1,
      anon_sym_currently,
  [3121] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(735), 1,
      anon_sym_currently,
  [3128] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(737), 1,
      anon_sym_are,
  [3135] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(739), 1,
      anon_sym_are,
  [3142] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(741), 1,
      anon_sym_are,
  [3149] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(743), 1,
      anon_sym_staged,
  [3156] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(745), 1,
      anon_sym_be,
  [3163] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(747), 1,
      anon_sym_in,
  [3170] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(749), 1,
      aux_sym_source_token1,
  [3177] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(751), 1,
      aux_sym_source_token1,
  [3184] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(753), 1,
      anon_sym_files,
  [3191] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(755), 1,
      anon_sym_COLON,
  [3198] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(757), 1,
      aux_sym_source_token1,
  [3205] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(759), 1,
      aux_sym_source_token1,
  [3212] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(761), 1,
      anon_sym_detached,
  [3219] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(763), 1,
      anon_sym_branch,
  [3226] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(765), 1,
      anon_sym_branch,
  [3233] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(767), 1,
      anon_sym_rebase,
  [3240] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(769), 1,
      aux_sym_source_token1,
  [3247] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(771), 1,
      aux_sym_source_token1,
  [3254] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(773), 1,
      anon_sym_POUND,
  [3261] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(775), 1,
      aux_sym_source_token1,
  [3268] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(777), 1,
      sym_commit,
  [3275] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(779), 1,
      anon_sym_onto,
  [3282] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [3289] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(783), 1,
      anon_sym_progress,
  [3296] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(785), 1,
      anon_sym_in,
  [3303] = 2,
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
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 286,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 352,
  [SMALL_STATE(14)] = 386,
  [SMALL_STATE(15)] = 408,
  [SMALL_STATE(16)] = 430,
  [SMALL_STATE(17)] = 462,
  [SMALL_STATE(18)] = 496,
  [SMALL_STATE(19)] = 518,
  [SMALL_STATE(20)] = 537,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 588,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 621,
  [SMALL_STATE(26)] = 634,
  [SMALL_STATE(27)] = 651,
  [SMALL_STATE(28)] = 666,
  [SMALL_STATE(29)] = 681,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 711,
  [SMALL_STATE(32)] = 726,
  [SMALL_STATE(33)] = 743,
  [SMALL_STATE(34)] = 756,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 788,
  [SMALL_STATE(37)] = 803,
  [SMALL_STATE(38)] = 818,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 866,
  [SMALL_STATE(42)] = 882,
  [SMALL_STATE(43)] = 898,
  [SMALL_STATE(44)] = 914,
  [SMALL_STATE(45)] = 930,
  [SMALL_STATE(46)] = 946,
  [SMALL_STATE(47)] = 960,
  [SMALL_STATE(48)] = 976,
  [SMALL_STATE(49)] = 992,
  [SMALL_STATE(50)] = 1006,
  [SMALL_STATE(51)] = 1018,
  [SMALL_STATE(52)] = 1030,
  [SMALL_STATE(53)] = 1042,
  [SMALL_STATE(54)] = 1054,
  [SMALL_STATE(55)] = 1070,
  [SMALL_STATE(56)] = 1082,
  [SMALL_STATE(57)] = 1098,
  [SMALL_STATE(58)] = 1110,
  [SMALL_STATE(59)] = 1124,
  [SMALL_STATE(60)] = 1140,
  [SMALL_STATE(61)] = 1154,
  [SMALL_STATE(62)] = 1170,
  [SMALL_STATE(63)] = 1183,
  [SMALL_STATE(64)] = 1196,
  [SMALL_STATE(65)] = 1205,
  [SMALL_STATE(66)] = 1218,
  [SMALL_STATE(67)] = 1227,
  [SMALL_STATE(68)] = 1240,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1262,
  [SMALL_STATE(71)] = 1271,
  [SMALL_STATE(72)] = 1284,
  [SMALL_STATE(73)] = 1297,
  [SMALL_STATE(74)] = 1310,
  [SMALL_STATE(75)] = 1323,
  [SMALL_STATE(76)] = 1332,
  [SMALL_STATE(77)] = 1341,
  [SMALL_STATE(78)] = 1354,
  [SMALL_STATE(79)] = 1365,
  [SMALL_STATE(80)] = 1378,
  [SMALL_STATE(81)] = 1391,
  [SMALL_STATE(82)] = 1404,
  [SMALL_STATE(83)] = 1417,
  [SMALL_STATE(84)] = 1430,
  [SMALL_STATE(85)] = 1443,
  [SMALL_STATE(86)] = 1456,
  [SMALL_STATE(87)] = 1469,
  [SMALL_STATE(88)] = 1482,
  [SMALL_STATE(89)] = 1495,
  [SMALL_STATE(90)] = 1508,
  [SMALL_STATE(91)] = 1517,
  [SMALL_STATE(92)] = 1530,
  [SMALL_STATE(93)] = 1543,
  [SMALL_STATE(94)] = 1556,
  [SMALL_STATE(95)] = 1565,
  [SMALL_STATE(96)] = 1578,
  [SMALL_STATE(97)] = 1587,
  [SMALL_STATE(98)] = 1600,
  [SMALL_STATE(99)] = 1609,
  [SMALL_STATE(100)] = 1622,
  [SMALL_STATE(101)] = 1631,
  [SMALL_STATE(102)] = 1644,
  [SMALL_STATE(103)] = 1657,
  [SMALL_STATE(104)] = 1665,
  [SMALL_STATE(105)] = 1675,
  [SMALL_STATE(106)] = 1683,
  [SMALL_STATE(107)] = 1693,
  [SMALL_STATE(108)] = 1703,
  [SMALL_STATE(109)] = 1713,
  [SMALL_STATE(110)] = 1723,
  [SMALL_STATE(111)] = 1733,
  [SMALL_STATE(112)] = 1743,
  [SMALL_STATE(113)] = 1753,
  [SMALL_STATE(114)] = 1763,
  [SMALL_STATE(115)] = 1773,
  [SMALL_STATE(116)] = 1783,
  [SMALL_STATE(117)] = 1793,
  [SMALL_STATE(118)] = 1803,
  [SMALL_STATE(119)] = 1811,
  [SMALL_STATE(120)] = 1821,
  [SMALL_STATE(121)] = 1831,
  [SMALL_STATE(122)] = 1841,
  [SMALL_STATE(123)] = 1851,
  [SMALL_STATE(124)] = 1861,
  [SMALL_STATE(125)] = 1871,
  [SMALL_STATE(126)] = 1881,
  [SMALL_STATE(127)] = 1891,
  [SMALL_STATE(128)] = 1901,
  [SMALL_STATE(129)] = 1911,
  [SMALL_STATE(130)] = 1921,
  [SMALL_STATE(131)] = 1931,
  [SMALL_STATE(132)] = 1938,
  [SMALL_STATE(133)] = 1945,
  [SMALL_STATE(134)] = 1952,
  [SMALL_STATE(135)] = 1959,
  [SMALL_STATE(136)] = 1966,
  [SMALL_STATE(137)] = 1973,
  [SMALL_STATE(138)] = 1980,
  [SMALL_STATE(139)] = 1987,
  [SMALL_STATE(140)] = 1994,
  [SMALL_STATE(141)] = 2001,
  [SMALL_STATE(142)] = 2008,
  [SMALL_STATE(143)] = 2015,
  [SMALL_STATE(144)] = 2022,
  [SMALL_STATE(145)] = 2029,
  [SMALL_STATE(146)] = 2036,
  [SMALL_STATE(147)] = 2043,
  [SMALL_STATE(148)] = 2050,
  [SMALL_STATE(149)] = 2057,
  [SMALL_STATE(150)] = 2064,
  [SMALL_STATE(151)] = 2071,
  [SMALL_STATE(152)] = 2078,
  [SMALL_STATE(153)] = 2085,
  [SMALL_STATE(154)] = 2092,
  [SMALL_STATE(155)] = 2099,
  [SMALL_STATE(156)] = 2106,
  [SMALL_STATE(157)] = 2113,
  [SMALL_STATE(158)] = 2120,
  [SMALL_STATE(159)] = 2127,
  [SMALL_STATE(160)] = 2134,
  [SMALL_STATE(161)] = 2141,
  [SMALL_STATE(162)] = 2148,
  [SMALL_STATE(163)] = 2155,
  [SMALL_STATE(164)] = 2162,
  [SMALL_STATE(165)] = 2169,
  [SMALL_STATE(166)] = 2176,
  [SMALL_STATE(167)] = 2183,
  [SMALL_STATE(168)] = 2190,
  [SMALL_STATE(169)] = 2197,
  [SMALL_STATE(170)] = 2204,
  [SMALL_STATE(171)] = 2211,
  [SMALL_STATE(172)] = 2218,
  [SMALL_STATE(173)] = 2225,
  [SMALL_STATE(174)] = 2232,
  [SMALL_STATE(175)] = 2239,
  [SMALL_STATE(176)] = 2246,
  [SMALL_STATE(177)] = 2253,
  [SMALL_STATE(178)] = 2260,
  [SMALL_STATE(179)] = 2267,
  [SMALL_STATE(180)] = 2274,
  [SMALL_STATE(181)] = 2281,
  [SMALL_STATE(182)] = 2288,
  [SMALL_STATE(183)] = 2295,
  [SMALL_STATE(184)] = 2302,
  [SMALL_STATE(185)] = 2309,
  [SMALL_STATE(186)] = 2316,
  [SMALL_STATE(187)] = 2323,
  [SMALL_STATE(188)] = 2330,
  [SMALL_STATE(189)] = 2337,
  [SMALL_STATE(190)] = 2344,
  [SMALL_STATE(191)] = 2351,
  [SMALL_STATE(192)] = 2358,
  [SMALL_STATE(193)] = 2365,
  [SMALL_STATE(194)] = 2372,
  [SMALL_STATE(195)] = 2379,
  [SMALL_STATE(196)] = 2386,
  [SMALL_STATE(197)] = 2393,
  [SMALL_STATE(198)] = 2400,
  [SMALL_STATE(199)] = 2407,
  [SMALL_STATE(200)] = 2414,
  [SMALL_STATE(201)] = 2421,
  [SMALL_STATE(202)] = 2428,
  [SMALL_STATE(203)] = 2435,
  [SMALL_STATE(204)] = 2442,
  [SMALL_STATE(205)] = 2449,
  [SMALL_STATE(206)] = 2456,
  [SMALL_STATE(207)] = 2463,
  [SMALL_STATE(208)] = 2470,
  [SMALL_STATE(209)] = 2477,
  [SMALL_STATE(210)] = 2484,
  [SMALL_STATE(211)] = 2491,
  [SMALL_STATE(212)] = 2498,
  [SMALL_STATE(213)] = 2505,
  [SMALL_STATE(214)] = 2512,
  [SMALL_STATE(215)] = 2519,
  [SMALL_STATE(216)] = 2526,
  [SMALL_STATE(217)] = 2533,
  [SMALL_STATE(218)] = 2540,
  [SMALL_STATE(219)] = 2547,
  [SMALL_STATE(220)] = 2554,
  [SMALL_STATE(221)] = 2561,
  [SMALL_STATE(222)] = 2568,
  [SMALL_STATE(223)] = 2575,
  [SMALL_STATE(224)] = 2582,
  [SMALL_STATE(225)] = 2589,
  [SMALL_STATE(226)] = 2596,
  [SMALL_STATE(227)] = 2603,
  [SMALL_STATE(228)] = 2610,
  [SMALL_STATE(229)] = 2617,
  [SMALL_STATE(230)] = 2624,
  [SMALL_STATE(231)] = 2631,
  [SMALL_STATE(232)] = 2638,
  [SMALL_STATE(233)] = 2645,
  [SMALL_STATE(234)] = 2652,
  [SMALL_STATE(235)] = 2659,
  [SMALL_STATE(236)] = 2666,
  [SMALL_STATE(237)] = 2673,
  [SMALL_STATE(238)] = 2680,
  [SMALL_STATE(239)] = 2687,
  [SMALL_STATE(240)] = 2694,
  [SMALL_STATE(241)] = 2701,
  [SMALL_STATE(242)] = 2708,
  [SMALL_STATE(243)] = 2715,
  [SMALL_STATE(244)] = 2722,
  [SMALL_STATE(245)] = 2729,
  [SMALL_STATE(246)] = 2736,
  [SMALL_STATE(247)] = 2743,
  [SMALL_STATE(248)] = 2750,
  [SMALL_STATE(249)] = 2757,
  [SMALL_STATE(250)] = 2764,
  [SMALL_STATE(251)] = 2771,
  [SMALL_STATE(252)] = 2778,
  [SMALL_STATE(253)] = 2785,
  [SMALL_STATE(254)] = 2792,
  [SMALL_STATE(255)] = 2799,
  [SMALL_STATE(256)] = 2806,
  [SMALL_STATE(257)] = 2813,
  [SMALL_STATE(258)] = 2820,
  [SMALL_STATE(259)] = 2827,
  [SMALL_STATE(260)] = 2834,
  [SMALL_STATE(261)] = 2841,
  [SMALL_STATE(262)] = 2848,
  [SMALL_STATE(263)] = 2855,
  [SMALL_STATE(264)] = 2862,
  [SMALL_STATE(265)] = 2869,
  [SMALL_STATE(266)] = 2876,
  [SMALL_STATE(267)] = 2883,
  [SMALL_STATE(268)] = 2890,
  [SMALL_STATE(269)] = 2897,
  [SMALL_STATE(270)] = 2904,
  [SMALL_STATE(271)] = 2911,
  [SMALL_STATE(272)] = 2918,
  [SMALL_STATE(273)] = 2925,
  [SMALL_STATE(274)] = 2932,
  [SMALL_STATE(275)] = 2939,
  [SMALL_STATE(276)] = 2946,
  [SMALL_STATE(277)] = 2953,
  [SMALL_STATE(278)] = 2960,
  [SMALL_STATE(279)] = 2967,
  [SMALL_STATE(280)] = 2974,
  [SMALL_STATE(281)] = 2981,
  [SMALL_STATE(282)] = 2988,
  [SMALL_STATE(283)] = 2995,
  [SMALL_STATE(284)] = 3002,
  [SMALL_STATE(285)] = 3009,
  [SMALL_STATE(286)] = 3016,
  [SMALL_STATE(287)] = 3023,
  [SMALL_STATE(288)] = 3030,
  [SMALL_STATE(289)] = 3037,
  [SMALL_STATE(290)] = 3044,
  [SMALL_STATE(291)] = 3051,
  [SMALL_STATE(292)] = 3058,
  [SMALL_STATE(293)] = 3065,
  [SMALL_STATE(294)] = 3072,
  [SMALL_STATE(295)] = 3079,
  [SMALL_STATE(296)] = 3086,
  [SMALL_STATE(297)] = 3093,
  [SMALL_STATE(298)] = 3100,
  [SMALL_STATE(299)] = 3107,
  [SMALL_STATE(300)] = 3114,
  [SMALL_STATE(301)] = 3121,
  [SMALL_STATE(302)] = 3128,
  [SMALL_STATE(303)] = 3135,
  [SMALL_STATE(304)] = 3142,
  [SMALL_STATE(305)] = 3149,
  [SMALL_STATE(306)] = 3156,
  [SMALL_STATE(307)] = 3163,
  [SMALL_STATE(308)] = 3170,
  [SMALL_STATE(309)] = 3177,
  [SMALL_STATE(310)] = 3184,
  [SMALL_STATE(311)] = 3191,
  [SMALL_STATE(312)] = 3198,
  [SMALL_STATE(313)] = 3205,
  [SMALL_STATE(314)] = 3212,
  [SMALL_STATE(315)] = 3219,
  [SMALL_STATE(316)] = 3226,
  [SMALL_STATE(317)] = 3233,
  [SMALL_STATE(318)] = 3240,
  [SMALL_STATE(319)] = 3247,
  [SMALL_STATE(320)] = 3254,
  [SMALL_STATE(321)] = 3261,
  [SMALL_STATE(322)] = 3268,
  [SMALL_STATE(323)] = 3275,
  [SMALL_STATE(324)] = 3282,
  [SMALL_STATE(325)] = 3289,
  [SMALL_STATE(326)] = 3296,
  [SMALL_STATE(327)] = 3303,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(49),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(39),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
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
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(35),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(67),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(46),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(78),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(78),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(58),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(79),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(72),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(74),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(33),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(87),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(92),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(19),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [559] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
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
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
