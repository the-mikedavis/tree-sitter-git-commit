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
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 33
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_source_token1 = 1,
  aux_sym__body_line_token1 = 2,
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
  anon_sym_and = 55,
  anon_sym_have = 56,
  anon_sym_diverged = 57,
  anon_sym_COMMA = 58,
  anon_sym_HEAD = 59,
  anon_sym_detached = 60,
  anon_sym_at = 61,
  anon_sym_Conflicts = 62,
  anon_sym_Untracked = 63,
  anon_sym_files = 64,
  anon_sym_newfile = 65,
  anon_sym_modified = 66,
  anon_sym_renamed = 67,
  anon_sym_deleted = 68,
  anon_sym_DASH_GT = 69,
  sym_commit = 70,
  sym__word = 71,
  sym_branch = 72,
  anon_sym_pick = 73,
  anon_sym_edit = 74,
  anon_sym_squash = 75,
  anon_sym_merge = 76,
  anon_sym_fixup = 77,
  anon_sym_drop = 78,
  anon_sym_reword = 79,
  anon_sym_exec = 80,
  anon_sym_label = 81,
  anon_sym_reset = 82,
  aux_sym_path_token1 = 83,
  sym_user = 84,
  sym_item = 85,
  aux_sym__rest_token1 = 86,
  sym__newline = 87,
  sym_source = 88,
  sym__body_line = 89,
  sym_subject = 90,
  sym_message = 91,
  sym__text = 92,
  sym_comment = 93,
  sym__comment_body = 94,
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
  aux_sym_subject_repeat1 = 106,
  aux_sym_message_repeat1 = 107,
  aux_sym__comment_body_repeat1 = 108,
  aux_sym__rebase_summary_repeat1 = 109,
  aux_sym__rebase_summary_repeat2 = 110,
  aux_sym_summary_repeat1 = 111,
  aux_sym_summary_repeat2 = 112,
  aux_sym_path_repeat1 = 113,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "scissors",
  [aux_sym__body_line_token1] = "_body_line_token1",
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
  [sym__newline] = "_newline",
  [sym_source] = "source",
  [sym__body_line] = "_body_line",
  [sym_subject] = "subject",
  [sym_message] = "message",
  [sym__text] = "_text",
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
  [aux_sym__body_line_token1] = aux_sym__body_line_token1,
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
  [sym__newline] = sym__newline,
  [sym_source] = sym_source,
  [sym__body_line] = sym__body_line,
  [sym_subject] = sym_subject,
  [sym_message] = sym_message,
  [sym__text] = sym__text,
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
    .visible = true,
    .named = true,
  },
  [aux_sym__body_line_token1] = {
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
  [sym__newline] = {
    .visible = false,
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
  [sym__text] = {
    .visible = false,
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
  [5] = {.index = 0, .length = 1},
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
    [2] = sym_branch,
  },
  [4] = {
    [3] = sym_message,
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
  [51] = 40,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 50,
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
  [71] = 39,
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
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(505);
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
      if (lookahead == '\n') ADVANCE(512);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(303);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(174);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(503);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(504);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(504);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(321);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(164);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 19:
      if (lookahead == ' ') ADVANCE(208);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(188);
      END_STATE();
    case 24:
      if (lookahead == ' ') ADVANCE(152);
      END_STATE();
    case 25:
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 26:
      if (lookahead == ' ') ADVANCE(120);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(11);
      END_STATE();
    case 28:
      if (lookahead == '#') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(354);
      END_STATE();
    case 32:
      if (lookahead == '8') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(375);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(197);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(169);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(223);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(147);
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
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 54:
      if (lookahead == 'b') ADVANCE(96);
      END_STATE();
    case 55:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(500);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(299);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead == 'x') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(355);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(499);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(345);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(373);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(366);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(343);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(270);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'o') ADVANCE(339);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(330);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(362);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(496);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(371);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(255);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(259);
      END_STATE();
    case 118:
      if (lookahead == 'f') ADVANCE(356);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(338);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(217);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(353);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(323);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 131:
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'h') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'o') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(57);
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
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 153:
      if (lookahead == 'k') ADVANCE(493);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(501);
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
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(246);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(89);
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
      if (lookahead == 'm') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(150);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 's') ADVANCE(350);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(104);
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
      if (lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(337);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == 'u') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(12);
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
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(351);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(498);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(497);
      END_STATE();
    case 207:
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(346);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(321);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 220:
      if (lookahead == 's') ADVANCE(370);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(308);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(340);
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
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(335);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(100);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(95);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(116);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 253:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 256:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(313);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(485);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
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
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 270:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 271:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(505);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(504);
      if (lookahead != 0) ADVANCE(505);
      END_STATE();
    case 272:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(324);
      if (lookahead == '(') ADVANCE(331);
      if (lookahead == ')') ADVANCE(333);
      if (lookahead == ',') ADVANCE(364);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead == ';') ADVANCE(309);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == 'N') ADVANCE(80);
      if (lookahead == 'Y') ADVANCE(191);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'h') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == 'u') ADVANCE(204);
      if (lookahead == 'w') ADVANCE(145);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 273:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '@') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0) ADVANCE(302);
      END_STATE();
    case 274:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(284);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 275:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == 'C') ADVANCE(463);
      if (lookahead == 'H') ADVANCE(449);
      if (lookahead == 'O') ADVANCE(468);
      if (lookahead == 'U') ADVANCE(469);
      if (lookahead == 'Y') ADVANCE(473);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 276:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 277:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(444);
      if (lookahead == '@') ADVANCE(446);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(295);
      if (lookahead != 0) ADVANCE(485);
      END_STATE();
    case 278:
      if (eof) ADVANCE(279);
      if (lookahead == '#') ADVANCE(286);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
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
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_source_token1);
      if (lookahead == '\n') ADVANCE(280);
      if (lookahead == '\r') ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__body_line_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(6);
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
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(302);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(321);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(299);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
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
          lookahead != '\n') ADVANCE(510);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(506);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(29);
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
      ACCEPT_TOKEN(anon_sym_You);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_are);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_currently);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'g') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'i') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead == 's') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__rebase_summary_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_rebasing);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Last);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__rebase_header_token1);
      if (lookahead == 's') ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_done);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__rebase_header_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Next);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_remaining);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_No);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_commands);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Changes);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_be);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_committed);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_staged);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_commit);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_ahead);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_behind);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__branch_declaration_token1);
      if (lookahead == 's') ADVANCE(359);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_have);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_diverged);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_Conflicts);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_Untracked);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(397);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(399);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(403);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(407);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(409);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(411);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(413);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(415);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(417);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(419);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(421);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(429);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(431);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(433);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(485);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(507);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(451);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(485);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
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
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(504);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(505);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(506);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(512);
      if (lookahead == '\r') ADVANCE(509);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead != 0) ADVANCE(510);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 274},
  [2] = {.lex_state = 275},
  [3] = {.lex_state = 272},
  [4] = {.lex_state = 272},
  [5] = {.lex_state = 272},
  [6] = {.lex_state = 272},
  [7] = {.lex_state = 272},
  [8] = {.lex_state = 272},
  [9] = {.lex_state = 277},
  [10] = {.lex_state = 277},
  [11] = {.lex_state = 273},
  [12] = {.lex_state = 272},
  [13] = {.lex_state = 277},
  [14] = {.lex_state = 271},
  [15] = {.lex_state = 278},
  [16] = {.lex_state = 275},
  [17] = {.lex_state = 276},
  [18] = {.lex_state = 278},
  [19] = {.lex_state = 272},
  [20] = {.lex_state = 272},
  [21] = {.lex_state = 275},
  [22] = {.lex_state = 272},
  [23] = {.lex_state = 272},
  [24] = {.lex_state = 272},
  [25] = {.lex_state = 278},
  [26] = {.lex_state = 276},
  [27] = {.lex_state = 275},
  [28] = {.lex_state = 275},
  [29] = {.lex_state = 272},
  [30] = {.lex_state = 511},
  [31] = {.lex_state = 272},
  [32] = {.lex_state = 272},
  [33] = {.lex_state = 511},
  [34] = {.lex_state = 272},
  [35] = {.lex_state = 511},
  [36] = {.lex_state = 511},
  [37] = {.lex_state = 272},
  [38] = {.lex_state = 272},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 272},
  [42] = {.lex_state = 511},
  [43] = {.lex_state = 511},
  [44] = {.lex_state = 511},
  [45] = {.lex_state = 275},
  [46] = {.lex_state = 210},
  [47] = {.lex_state = 271},
  [48] = {.lex_state = 275},
  [49] = {.lex_state = 272},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 511},
  [53] = {.lex_state = 275},
  [54] = {.lex_state = 271},
  [55] = {.lex_state = 271},
  [56] = {.lex_state = 210},
  [57] = {.lex_state = 210},
  [58] = {.lex_state = 275},
  [59] = {.lex_state = 210},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 275},
  [62] = {.lex_state = 275},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 275},
  [65] = {.lex_state = 275},
  [66] = {.lex_state = 210},
  [67] = {.lex_state = 275},
  [68] = {.lex_state = 210},
  [69] = {.lex_state = 275},
  [70] = {.lex_state = 275},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 275},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 272},
  [79] = {.lex_state = 272},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 261},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 272},
  [88] = {.lex_state = 272},
  [89] = {.lex_state = 262},
  [90] = {.lex_state = 272},
  [91] = {.lex_state = 272},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 272},
  [94] = {.lex_state = 262},
  [95] = {.lex_state = 272},
  [96] = {.lex_state = 272},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 272},
  [100] = {.lex_state = 272},
  [101] = {.lex_state = 272},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 262},
  [104] = {.lex_state = 272},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 272},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 272},
  [111] = {.lex_state = 272},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 272},
  [115] = {.lex_state = 272},
  [116] = {.lex_state = 272},
  [117] = {.lex_state = 272},
  [118] = {.lex_state = 272},
  [119] = {.lex_state = 275},
  [120] = {.lex_state = 272},
  [121] = {.lex_state = 272},
  [122] = {.lex_state = 272},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 272},
  [125] = {.lex_state = 272},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 272},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 272},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 272},
  [136] = {.lex_state = 272},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 262},
  [139] = {.lex_state = 272},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 272},
  [143] = {.lex_state = 272},
  [144] = {.lex_state = 272},
  [145] = {.lex_state = 272},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 272},
  [148] = {.lex_state = 272},
  [149] = {.lex_state = 272},
  [150] = {.lex_state = 272},
  [151] = {.lex_state = 272},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 272},
  [154] = {.lex_state = 272},
  [155] = {.lex_state = 272},
  [156] = {.lex_state = 272},
  [157] = {.lex_state = 272},
  [158] = {.lex_state = 272},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 272},
  [161] = {.lex_state = 61},
  [162] = {.lex_state = 272},
  [163] = {.lex_state = 272},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 272},
  [166] = {.lex_state = 272},
  [167] = {.lex_state = 272},
  [168] = {.lex_state = 272},
  [169] = {.lex_state = 272},
  [170] = {.lex_state = 272},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 272},
  [173] = {.lex_state = 262},
  [174] = {.lex_state = 272},
  [175] = {.lex_state = 272},
  [176] = {.lex_state = 260},
  [177] = {.lex_state = 272},
  [178] = {.lex_state = 262},
  [179] = {.lex_state = 272},
  [180] = {.lex_state = 272},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 272},
  [183] = {.lex_state = 262},
  [184] = {.lex_state = 272},
  [185] = {.lex_state = 272},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 272},
  [188] = {.lex_state = 262},
  [189] = {.lex_state = 272},
  [190] = {.lex_state = 272},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 272},
  [193] = {.lex_state = 272},
  [194] = {.lex_state = 272},
  [195] = {.lex_state = 272},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 272},
  [198] = {.lex_state = 272},
  [199] = {.lex_state = 272},
  [200] = {.lex_state = 272},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 272},
  [203] = {.lex_state = 272},
  [204] = {.lex_state = 272},
  [205] = {.lex_state = 272},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 272},
  [208] = {.lex_state = 272},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 272},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 272},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 272},
  [217] = {.lex_state = 272},
  [218] = {.lex_state = 272},
  [219] = {.lex_state = 272},
  [220] = {.lex_state = 272},
  [221] = {.lex_state = 272},
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
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(119),
    [sym__body_line] = STATE(16),
    [sym_subject] = STATE(21),
    [sym_comment] = STATE(21),
    [aux_sym_source_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_source_token1] = ACTIONS(7),
    [aux_sym__body_line_token1] = ACTIONS(9),
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
    STATE(26), 1,
      aux_sym__comment_body_repeat1,
    STATE(213), 1,
      sym_header,
    STATE(214), 1,
      sym__change_header,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
    STATE(45), 4,
      sym__comment_body,
      sym__rebase_summary,
      sym_summary,
      sym__branch_declaration,
  [48] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(132), 1,
      sym__rebase_header,
    STATE(133), 1,
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
  [79] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(133), 1,
      sym_rebase_command,
    STATE(141), 1,
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
  [110] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(43), 1,
      anon_sym_You,
    STATE(133), 1,
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
  [132] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(45), 1,
      anon_sym_You,
    STATE(133), 1,
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
  [154] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(47), 1,
      anon_sym_You,
    STATE(133), 1,
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
  [176] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(133), 1,
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
  [195] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(51), 1,
      sym__word,
    ACTIONS(53), 2,
      sym_user,
      sym_item,
    STATE(13), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [215] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(57), 1,
      sym__word,
    ACTIONS(60), 2,
      sym_user,
      sym_item,
    STATE(10), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(55), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [235] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      sym_user,
    ACTIONS(65), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(53), 2,
      sym_message,
      sym_comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [255] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(134), 1,
      sym_change,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
    ACTIONS(71), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [273] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(75), 1,
      sym__word,
    ACTIONS(77), 2,
      sym_user,
      sym_item,
    STATE(10), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(73), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [293] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(79), 1,
      aux_sym_source_token1,
    ACTIONS(81), 1,
      aux_sym_path_token1,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(131), 1,
      sym_path,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym__body_line_token1,
  [313] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(85), 1,
      aux_sym_subject_token2,
    STATE(15), 1,
      aux_sym_subject_repeat1,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [328] = 5,
    ACTIONS(9), 1,
      aux_sym__body_line_token1,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    STATE(28), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [345] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(94), 1,
      sym__word,
    STATE(17), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [360] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(99), 1,
      aux_sym_subject_token2,
    STATE(15), 1,
      aux_sym_subject_repeat1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [375] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(134), 1,
      sym_change,
    ACTIONS(71), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [388] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(103), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [403] = 5,
    ACTIONS(9), 1,
      aux_sym__body_line_token1,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym_source_token1,
    STATE(27), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [420] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(107), 1,
      anon_sym_POUND,
    STATE(22), 1,
      aux_sym_summary_repeat2,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [435] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(110), 1,
      anon_sym_POUND,
    STATE(22), 1,
      aux_sym_summary_repeat2,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [450] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(114), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [465] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(119), 1,
      aux_sym_subject_token2,
    STATE(18), 1,
      aux_sym_subject_repeat1,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [480] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(123), 1,
      sym__word,
    STATE(17), 1,
      aux_sym__comment_body_repeat1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [495] = 5,
    ACTIONS(9), 1,
      aux_sym__body_line_token1,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_source_token1,
    STATE(28), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [512] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(131), 1,
      aux_sym__body_line_token1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(28), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [527] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(136), 1,
      anon_sym_POUND,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [539] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym__rest_token1,
    ACTIONS(143), 1,
      sym__newline,
    STATE(30), 1,
      aux_sym__rest,
  [555] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [567] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(152), 1,
      anon_sym_POUND,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [579] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    STATE(44), 1,
      aux_sym__rest,
  [595] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(160), 1,
      anon_sym_POUND,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [607] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    STATE(42), 1,
      aux_sym__rest,
  [623] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      aux_sym__rest,
  [639] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      anon_sym_POUND,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [651] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(170), 1,
      anon_sym_POUND,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [663] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(174), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    ACTIONS(172), 2,
      anon_sym_DASH_GT,
      sym__newline,
  [677] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(178), 1,
      aux_sym_path_token1,
    STATE(40), 1,
      aux_sym_path_repeat1,
    ACTIONS(176), 2,
      anon_sym_DASH_GT,
      sym__newline,
  [691] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(113), 1,
      sym__rebase_header,
  [707] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      aux_sym__rest,
  [723] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      aux_sym__rest,
  [739] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(154), 1,
      aux_sym__rest_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      aux_sym__rest,
  [755] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [764] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(189), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(191), 1,
      anon_sym_rebasing,
    STATE(68), 1,
      aux_sym__rebase_summary_repeat2,
  [777] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      aux_sym_path_token1,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(107), 1,
      sym_path,
  [790] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(193), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [799] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(195), 1,
      anon_sym_up,
    ACTIONS(197), 1,
      anon_sym_ahead,
    ACTIONS(199), 1,
      anon_sym_behind,
  [812] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(201), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(204), 1,
      anon_sym_rebasing,
    STATE(50), 1,
      aux_sym__rebase_summary_repeat2,
  [825] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(176), 1,
      sym__newline,
    ACTIONS(206), 1,
      aux_sym_path_token1,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [838] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(211), 1,
      aux_sym__rest_token1,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      sym__newline,
  [849] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [858] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(215), 1,
      aux_sym_path_token1,
    STATE(39), 1,
      aux_sym_path_repeat1,
    STATE(85), 1,
      sym_path,
  [871] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      aux_sym_path_token1,
    STATE(71), 1,
      aux_sym_path_repeat1,
    STATE(131), 1,
      sym_path,
  [884] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(219), 1,
      anon_sym_rebasing,
    STATE(50), 1,
      aux_sym__rebase_summary_repeat2,
  [897] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(219), 1,
      anon_sym_rebasing,
    ACTIONS(221), 1,
      aux_sym__rebase_summary_token1,
    STATE(59), 1,
      aux_sym__rebase_summary_repeat2,
  [910] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [919] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(191), 1,
      anon_sym_rebasing,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    STATE(50), 1,
      aux_sym__rebase_summary_repeat2,
  [932] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(225), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(228), 1,
      sym__newline,
    STATE(60), 1,
      aux_sym__rebase_summary_repeat2,
  [945] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(230), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [954] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(232), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [963] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(234), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(236), 1,
      sym__newline,
    STATE(60), 1,
      aux_sym__rebase_summary_repeat2,
  [976] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [985] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(238), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [994] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(240), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(242), 1,
      anon_sym_rebasing,
    STATE(56), 1,
      aux_sym__rebase_summary_repeat2,
  [1007] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(244), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [1016] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(217), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(246), 1,
      anon_sym_rebasing,
    STATE(50), 1,
      aux_sym__rebase_summary_repeat2,
  [1029] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [1038] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [1047] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(172), 1,
      sym__newline,
    ACTIONS(250), 1,
      aux_sym_path_token1,
    STATE(51), 1,
      aux_sym_path_repeat1,
  [1060] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(168), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      aux_sym__body_line_token1,
  [1069] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(252), 1,
      aux_sym__rebase_summary_token1,
    STATE(63), 1,
      aux_sym__rebase_summary_repeat2,
  [1079] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(254), 1,
      anon_sym_POUND,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat1,
  [1089] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(256), 1,
      anon_sym_POUND,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat1,
  [1099] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(259), 1,
      anon_sym_POUND,
    STATE(80), 1,
      aux_sym__rebase_summary_repeat1,
  [1109] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(261), 1,
      anon_sym_POUND,
    STATE(74), 1,
      aux_sym__rebase_summary_repeat1,
  [1119] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(263), 1,
      anon_sym_is,
    ACTIONS(265), 1,
      anon_sym_and,
  [1129] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(267), 1,
      anon_sym_to,
    ACTIONS(269), 1,
      anon_sym_not,
  [1139] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat1,
  [1149] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(273), 1,
      anon_sym_POUND,
    STATE(20), 1,
      aux_sym_summary_repeat1,
  [1159] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(275), 1,
      anon_sym_POUND,
    STATE(23), 1,
      aux_sym_summary_repeat2,
  [1169] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(271), 1,
      anon_sym_POUND,
    STATE(86), 1,
      aux_sym__rebase_summary_repeat1,
  [1179] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 2,
      sym_commit,
      sym_branch,
  [1187] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(279), 1,
      anon_sym_DASH_GT,
    ACTIONS(281), 1,
      sym__newline,
  [1197] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(283), 1,
      anon_sym_POUND,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat1,
  [1207] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(285), 1,
      aux_sym__rebase_header_token1,
  [1214] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(287), 1,
      anon_sym_COLON,
  [1221] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(289), 1,
      sym_branch,
  [1228] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(291), 1,
      anon_sym_SQUOTE,
  [1235] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(293), 1,
      sym_commit,
  [1242] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(295), 1,
      sym__newline,
  [1249] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(297), 1,
      anon_sym_with,
  [1256] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(299), 1,
      sym_branch,
  [1263] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
  [1270] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(303), 1,
      anon_sym_have,
  [1277] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      sym__newline,
  [1284] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(307), 1,
      anon_sym_SQUOTE,
  [1291] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
  [1298] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(311), 1,
      anon_sym_by,
  [1305] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(313), 1,
      anon_sym_diverged,
  [1312] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(315), 1,
      anon_sym_POUND,
  [1319] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(317), 1,
      sym_branch,
  [1326] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(319), 1,
      anon_sym_by,
  [1333] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(321), 1,
      aux_sym__rebase_header_token2,
  [1340] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(323), 1,
      anon_sym_COMMA,
  [1347] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(325), 1,
      sym__newline,
  [1354] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(327), 1,
      anon_sym_SQUOTE_DOT,
  [1361] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(329), 1,
      aux_sym__rebase_header_token2,
  [1368] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(331), 1,
      aux_sym__branch_declaration_token1,
  [1375] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(333), 1,
      aux_sym__rebase_header_token1,
  [1382] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(335), 1,
      anon_sym_commands,
  [1389] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(337), 1,
      sym__newline,
  [1396] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(339), 1,
      aux_sym__branch_declaration_token1,
  [1403] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(341), 1,
      anon_sym_DOT,
  [1410] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(343), 1,
      anon_sym_done,
  [1417] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(345), 1,
      anon_sym_to,
  [1424] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(347), 1,
      anon_sym_remaining,
  [1431] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
  [1438] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(351), 1,
      anon_sym_DOT,
  [1445] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(353), 1,
      anon_sym_date,
  [1452] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
  [1459] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(357), 1,
      anon_sym_do,
  [1466] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(359), 1,
      anon_sym_DOT,
  [1473] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [1480] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(363), 1,
      sym__newline,
  [1487] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(365), 1,
      anon_sym_onto,
  [1494] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(367), 1,
      aux_sym__rebase_header_token2,
  [1501] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
  [1508] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(371), 1,
      sym__newline,
  [1515] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(373), 1,
      sym__newline,
  [1522] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(375), 1,
      sym__newline,
  [1529] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(377), 1,
      sym__newline,
  [1536] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(379), 1,
      sym__newline,
  [1543] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [1550] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(383), 1,
      aux_sym__rebase_header_token1,
  [1557] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(385), 1,
      aux_sym__rebase_header_token2,
  [1564] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(387), 1,
      sym_branch,
  [1571] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
  [1578] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(391), 1,
      anon_sym_POUND,
  [1585] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(393), 1,
      sym__newline,
  [1592] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(395), 1,
      anon_sym_of,
  [1599] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(397), 1,
      anon_sym_done,
  [1606] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(399), 1,
      anon_sym_remaining,
  [1613] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(401), 1,
      anon_sym_to,
  [1620] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(403), 1,
      anon_sym_commit,
  [1627] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [1634] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(407), 1,
      anon_sym_SEMI,
  [1641] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [1648] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(411), 1,
      aux_sym__rebase_header_token1,
  [1655] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(413), 1,
      anon_sym_are,
  [1662] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(415), 1,
      sym__newline,
  [1669] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [1676] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(419), 1,
      anon_sym_SQUOTE,
  [1683] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(421), 1,
      anon_sym_RPAREN,
  [1690] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(423), 1,
      anon_sym_currently,
  [1697] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(425), 1,
      anon_sym_are,
  [1704] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(427), 1,
      anon_sym_for,
  [1711] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(429), 1,
      sym__newline,
  [1718] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(431), 1,
      anon_sym_COLON,
  [1725] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(433), 1,
      anon_sym_committed,
  [1732] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(435), 1,
      anon_sym_currently,
  [1739] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(437), 1,
      anon_sym_are,
  [1746] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(439), 1,
      sym__newline,
  [1753] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(441), 1,
      anon_sym_branch,
  [1760] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(443), 1,
      anon_sym_progress,
  [1767] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(445), 1,
      anon_sym_COLON,
  [1774] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(447), 1,
      anon_sym_currently,
  [1781] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(449), 1,
      anon_sym_SQUOTE,
  [1788] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(451), 1,
      anon_sym_branch,
  [1795] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(453), 1,
      sym__newline,
  [1802] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(455), 1,
      anon_sym_at,
  [1809] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(457), 1,
      sym_branch,
  [1816] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(459), 1,
      anon_sym_SQUOTE,
  [1823] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(461), 1,
      anon_sym_branch,
  [1830] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(463), 1,
      sym__word,
  [1837] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(465), 1,
      anon_sym_SQUOTE,
  [1844] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(467), 1,
      sym_branch,
  [1851] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(469), 1,
      anon_sym_SQUOTE,
  [1858] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(471), 1,
      anon_sym_branch,
  [1865] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(473), 1,
      anon_sym_on,
  [1872] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
  [1879] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(477), 1,
      sym_branch,
  [1886] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(479), 1,
      anon_sym_SQUOTE,
  [1893] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(481), 1,
      anon_sym_SQUOTE,
  [1900] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(483), 1,
      anon_sym_on,
  [1907] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(485), 1,
      anon_sym_SQUOTE,
  [1914] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(487), 1,
      sym_branch,
  [1921] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(489), 1,
      sym_commit,
  [1928] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
  [1935] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(493), 1,
      anon_sym_on,
  [1942] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(495), 1,
      anon_sym_SQUOTE,
  [1949] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(497), 1,
      anon_sym_SQUOTE,
  [1956] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(499), 1,
      sym_commit,
  [1963] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(501), 1,
      anon_sym_SQUOTE,
  [1970] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(503), 1,
      anon_sym_on,
  [1977] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(505), 1,
      anon_sym_DOT,
  [1984] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(507), 1,
      anon_sym_SQUOTE,
  [1991] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(509), 1,
      sym_commit,
  [1998] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(511), 1,
      anon_sym_SQUOTE,
  [2005] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(513), 1,
      sym__newline,
  [2012] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(515), 1,
      anon_sym_DOT,
  [2019] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(517), 1,
      anon_sym_SQUOTE,
  [2026] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(519), 1,
      sym_commit,
  [2033] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(521), 1,
      anon_sym_staged,
  [2040] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(523), 1,
      sym__newline,
  [2047] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(525), 1,
      anon_sym_DOT,
  [2054] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
  [2061] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(529), 1,
      anon_sym_be,
  [2068] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(531), 1,
      anon_sym_in,
  [2075] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(533), 1,
      sym__newline,
  [2082] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(535), 1,
      anon_sym_DOT,
  [2089] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(537), 1,
      sym__newline,
  [2096] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(539), 1,
      sym__newline,
  [2103] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(541), 1,
      sym__newline,
  [2110] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(543), 1,
      anon_sym_files,
  [2117] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [2124] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(547), 1,
      anon_sym_detached,
  [2131] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(549), 1,
      anon_sym_branch,
  [2138] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(551), 1,
      anon_sym_branch,
  [2145] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(553), 1,
      anon_sym_rebase,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 79,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 195,
  [SMALL_STATE(10)] = 215,
  [SMALL_STATE(11)] = 235,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 273,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 328,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 360,
  [SMALL_STATE(19)] = 375,
  [SMALL_STATE(20)] = 388,
  [SMALL_STATE(21)] = 403,
  [SMALL_STATE(22)] = 420,
  [SMALL_STATE(23)] = 435,
  [SMALL_STATE(24)] = 450,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 495,
  [SMALL_STATE(28)] = 512,
  [SMALL_STATE(29)] = 527,
  [SMALL_STATE(30)] = 539,
  [SMALL_STATE(31)] = 555,
  [SMALL_STATE(32)] = 567,
  [SMALL_STATE(33)] = 579,
  [SMALL_STATE(34)] = 595,
  [SMALL_STATE(35)] = 607,
  [SMALL_STATE(36)] = 623,
  [SMALL_STATE(37)] = 639,
  [SMALL_STATE(38)] = 651,
  [SMALL_STATE(39)] = 663,
  [SMALL_STATE(40)] = 677,
  [SMALL_STATE(41)] = 691,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 723,
  [SMALL_STATE(44)] = 739,
  [SMALL_STATE(45)] = 755,
  [SMALL_STATE(46)] = 764,
  [SMALL_STATE(47)] = 777,
  [SMALL_STATE(48)] = 790,
  [SMALL_STATE(49)] = 799,
  [SMALL_STATE(50)] = 812,
  [SMALL_STATE(51)] = 825,
  [SMALL_STATE(52)] = 838,
  [SMALL_STATE(53)] = 849,
  [SMALL_STATE(54)] = 858,
  [SMALL_STATE(55)] = 871,
  [SMALL_STATE(56)] = 884,
  [SMALL_STATE(57)] = 897,
  [SMALL_STATE(58)] = 910,
  [SMALL_STATE(59)] = 919,
  [SMALL_STATE(60)] = 932,
  [SMALL_STATE(61)] = 945,
  [SMALL_STATE(62)] = 954,
  [SMALL_STATE(63)] = 963,
  [SMALL_STATE(64)] = 976,
  [SMALL_STATE(65)] = 985,
  [SMALL_STATE(66)] = 994,
  [SMALL_STATE(67)] = 1007,
  [SMALL_STATE(68)] = 1016,
  [SMALL_STATE(69)] = 1029,
  [SMALL_STATE(70)] = 1038,
  [SMALL_STATE(71)] = 1047,
  [SMALL_STATE(72)] = 1060,
  [SMALL_STATE(73)] = 1069,
  [SMALL_STATE(74)] = 1079,
  [SMALL_STATE(75)] = 1089,
  [SMALL_STATE(76)] = 1099,
  [SMALL_STATE(77)] = 1109,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1129,
  [SMALL_STATE(80)] = 1139,
  [SMALL_STATE(81)] = 1149,
  [SMALL_STATE(82)] = 1159,
  [SMALL_STATE(83)] = 1169,
  [SMALL_STATE(84)] = 1179,
  [SMALL_STATE(85)] = 1187,
  [SMALL_STATE(86)] = 1197,
  [SMALL_STATE(87)] = 1207,
  [SMALL_STATE(88)] = 1214,
  [SMALL_STATE(89)] = 1221,
  [SMALL_STATE(90)] = 1228,
  [SMALL_STATE(91)] = 1235,
  [SMALL_STATE(92)] = 1242,
  [SMALL_STATE(93)] = 1249,
  [SMALL_STATE(94)] = 1256,
  [SMALL_STATE(95)] = 1263,
  [SMALL_STATE(96)] = 1270,
  [SMALL_STATE(97)] = 1277,
  [SMALL_STATE(98)] = 1284,
  [SMALL_STATE(99)] = 1291,
  [SMALL_STATE(100)] = 1298,
  [SMALL_STATE(101)] = 1305,
  [SMALL_STATE(102)] = 1312,
  [SMALL_STATE(103)] = 1319,
  [SMALL_STATE(104)] = 1326,
  [SMALL_STATE(105)] = 1333,
  [SMALL_STATE(106)] = 1340,
  [SMALL_STATE(107)] = 1347,
  [SMALL_STATE(108)] = 1354,
  [SMALL_STATE(109)] = 1361,
  [SMALL_STATE(110)] = 1368,
  [SMALL_STATE(111)] = 1375,
  [SMALL_STATE(112)] = 1382,
  [SMALL_STATE(113)] = 1389,
  [SMALL_STATE(114)] = 1396,
  [SMALL_STATE(115)] = 1403,
  [SMALL_STATE(116)] = 1410,
  [SMALL_STATE(117)] = 1417,
  [SMALL_STATE(118)] = 1424,
  [SMALL_STATE(119)] = 1431,
  [SMALL_STATE(120)] = 1438,
  [SMALL_STATE(121)] = 1445,
  [SMALL_STATE(122)] = 1452,
  [SMALL_STATE(123)] = 1459,
  [SMALL_STATE(124)] = 1466,
  [SMALL_STATE(125)] = 1473,
  [SMALL_STATE(126)] = 1480,
  [SMALL_STATE(127)] = 1487,
  [SMALL_STATE(128)] = 1494,
  [SMALL_STATE(129)] = 1501,
  [SMALL_STATE(130)] = 1508,
  [SMALL_STATE(131)] = 1515,
  [SMALL_STATE(132)] = 1522,
  [SMALL_STATE(133)] = 1529,
  [SMALL_STATE(134)] = 1536,
  [SMALL_STATE(135)] = 1543,
  [SMALL_STATE(136)] = 1550,
  [SMALL_STATE(137)] = 1557,
  [SMALL_STATE(138)] = 1564,
  [SMALL_STATE(139)] = 1571,
  [SMALL_STATE(140)] = 1578,
  [SMALL_STATE(141)] = 1585,
  [SMALL_STATE(142)] = 1592,
  [SMALL_STATE(143)] = 1599,
  [SMALL_STATE(144)] = 1606,
  [SMALL_STATE(145)] = 1613,
  [SMALL_STATE(146)] = 1620,
  [SMALL_STATE(147)] = 1627,
  [SMALL_STATE(148)] = 1634,
  [SMALL_STATE(149)] = 1641,
  [SMALL_STATE(150)] = 1648,
  [SMALL_STATE(151)] = 1655,
  [SMALL_STATE(152)] = 1662,
  [SMALL_STATE(153)] = 1669,
  [SMALL_STATE(154)] = 1676,
  [SMALL_STATE(155)] = 1683,
  [SMALL_STATE(156)] = 1690,
  [SMALL_STATE(157)] = 1697,
  [SMALL_STATE(158)] = 1704,
  [SMALL_STATE(159)] = 1711,
  [SMALL_STATE(160)] = 1718,
  [SMALL_STATE(161)] = 1725,
  [SMALL_STATE(162)] = 1732,
  [SMALL_STATE(163)] = 1739,
  [SMALL_STATE(164)] = 1746,
  [SMALL_STATE(165)] = 1753,
  [SMALL_STATE(166)] = 1760,
  [SMALL_STATE(167)] = 1767,
  [SMALL_STATE(168)] = 1774,
  [SMALL_STATE(169)] = 1781,
  [SMALL_STATE(170)] = 1788,
  [SMALL_STATE(171)] = 1795,
  [SMALL_STATE(172)] = 1802,
  [SMALL_STATE(173)] = 1809,
  [SMALL_STATE(174)] = 1816,
  [SMALL_STATE(175)] = 1823,
  [SMALL_STATE(176)] = 1830,
  [SMALL_STATE(177)] = 1837,
  [SMALL_STATE(178)] = 1844,
  [SMALL_STATE(179)] = 1851,
  [SMALL_STATE(180)] = 1858,
  [SMALL_STATE(181)] = 1865,
  [SMALL_STATE(182)] = 1872,
  [SMALL_STATE(183)] = 1879,
  [SMALL_STATE(184)] = 1886,
  [SMALL_STATE(185)] = 1893,
  [SMALL_STATE(186)] = 1900,
  [SMALL_STATE(187)] = 1907,
  [SMALL_STATE(188)] = 1914,
  [SMALL_STATE(189)] = 1921,
  [SMALL_STATE(190)] = 1928,
  [SMALL_STATE(191)] = 1935,
  [SMALL_STATE(192)] = 1942,
  [SMALL_STATE(193)] = 1949,
  [SMALL_STATE(194)] = 1956,
  [SMALL_STATE(195)] = 1963,
  [SMALL_STATE(196)] = 1970,
  [SMALL_STATE(197)] = 1977,
  [SMALL_STATE(198)] = 1984,
  [SMALL_STATE(199)] = 1991,
  [SMALL_STATE(200)] = 1998,
  [SMALL_STATE(201)] = 2005,
  [SMALL_STATE(202)] = 2012,
  [SMALL_STATE(203)] = 2019,
  [SMALL_STATE(204)] = 2026,
  [SMALL_STATE(205)] = 2033,
  [SMALL_STATE(206)] = 2040,
  [SMALL_STATE(207)] = 2047,
  [SMALL_STATE(208)] = 2054,
  [SMALL_STATE(209)] = 2061,
  [SMALL_STATE(210)] = 2068,
  [SMALL_STATE(211)] = 2075,
  [SMALL_STATE(212)] = 2082,
  [SMALL_STATE(213)] = 2089,
  [SMALL_STATE(214)] = 2096,
  [SMALL_STATE(215)] = 2103,
  [SMALL_STATE(216)] = 2110,
  [SMALL_STATE(217)] = 2117,
  [SMALL_STATE(218)] = 2124,
  [SMALL_STATE(219)] = 2131,
  [SMALL_STATE(220)] = 2138,
  [SMALL_STATE(221)] = 2145,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(15),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(55),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(52),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(52),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(50),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(51),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(60),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(8),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [349] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
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
