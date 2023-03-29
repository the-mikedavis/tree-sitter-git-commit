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
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
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
  sym__trailer = 91,
  sym_message = 92,
  sym__text = 93,
  sym_comment = 94,
  sym_trailer = 95,
  sym__rebase_summary = 96,
  sym__rebase_header = 97,
  sym_summary = 98,
  sym__change_header = 99,
  sym__branch_declaration = 100,
  sym_header = 101,
  sym_change = 102,
  sym_rebase_command = 103,
  sym_path = 104,
  aux_sym__rest = 105,
  aux_sym_source_repeat1 = 106,
  aux_sym_source_repeat2 = 107,
  aux_sym_subject_repeat1 = 108,
  aux_sym_message_repeat1 = 109,
  aux_sym_comment_repeat1 = 110,
  aux_sym_trailer_repeat1 = 111,
  aux_sym__rebase_summary_repeat1 = 112,
  aux_sym__rebase_summary_repeat2 = 113,
  aux_sym_summary_repeat1 = 114,
  aux_sym_summary_repeat2 = 115,
  aux_sym_path_repeat1 = 116,
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
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 42,
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
  [76] = 71,
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
  [87] = 61,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(508);
      if (lookahead == '\'') ADVANCE(508);
      if (lookahead == '(') ADVANCE(508);
      if (lookahead == ')') ADVANCE(508);
      if (lookahead == ',') ADVANCE(508);
      if (lookahead == '.') ADVANCE(508);
      if (lookahead == ':') ADVANCE(508);
      if (lookahead == ';') ADVANCE(508);
      if (lookahead == '=') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(507);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(283);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(507);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0) ADVANCE(323);
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
      if (lookahead == ' ') ADVANCE(56);
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
      if (lookahead == '#') ADVANCE(487);
      if (lookahead == '@') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(488);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(304);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(203);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == ':' ||
          lookahead == '=') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
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
      if (lookahead == '.') ADVANCE(356);
      END_STATE();
    case 32:
      if (lookahead == '8') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '>') ADVANCE(377);
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
      if (lookahead == 'c') ADVANCE(503);
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
          lookahead == ' ') ADVANCE(300);
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
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(359);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(502);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 69:
      if (lookahead == 'd') ADVANCE(331);
      END_STATE();
    case 70:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(375);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(365);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(374);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(345);
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
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'y') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(344);
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
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(13);
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
      if (lookahead == 'e') ADVANCE(23);
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
      if (lookahead == 'f') ADVANCE(358);
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(340);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(18);
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
      if (lookahead == 'h') ADVANCE(355);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(498);
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
      if (lookahead == 't') ADVANCE(369);
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
      if (lookahead == 'k') ADVANCE(496);
      END_STATE();
    case 154:
      if (lookahead == 'l') ADVANCE(504);
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
      if (lookahead == 'l') ADVANCE(20);
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
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 's') ADVANCE(352);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(327);
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
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(312);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(339);
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
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 204:
      if (lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 205:
      if (lookahead == 'p') ADVANCE(501);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(500);
      END_STATE();
    case 207:
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(323);
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
      if (lookahead == 's') ADVANCE(372);
      END_STATE();
    case 221:
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 222:
      if (lookahead == 's') ADVANCE(342);
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
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(337);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(505);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(349);
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
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(193);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(19);
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
      if (lookahead == 'u') ADVANCE(313);
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
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 256:
      if (lookahead == 'x') ADVANCE(230);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(235);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 260:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(488);
      END_STATE();
    case 261:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 262:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(443);
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
          lookahead != '\n') ADVANCE(282);
      END_STATE();
    case 271:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(508);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(507);
      if (lookahead != 0) ADVANCE(508);
      END_STATE();
    case 272:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '\'') ADVANCE(326);
      if (lookahead == '(') ADVANCE(333);
      if (lookahead == ')') ADVANCE(335);
      if (lookahead == ',') ADVANCE(366);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == ':') ADVANCE(336);
      if (lookahead == ';') ADVANCE(311);
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
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 273:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(305);
      if (lookahead == '@') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0) ADVANCE(303);
      END_STATE();
    case 274:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(305);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 275:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == 'C') ADVANCE(465);
      if (lookahead == 'H') ADVANCE(451);
      if (lookahead == 'O') ADVANCE(470);
      if (lookahead == 'U') ADVANCE(471);
      if (lookahead == 'Y') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 276:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(447);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 277:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(446);
      if (lookahead == '@') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      if (lookahead != 0) ADVANCE(488);
      END_STATE();
    case 278:
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(287);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0) ADVANCE(295);
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
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead != 0) ADVANCE(295);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '-') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '8') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '>') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(300);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(299);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(513);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead == '@') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(509);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_message_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_trailer_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_interactive);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_rebase);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_progress);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_onto);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_commit);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(488);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(488);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '@') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(510);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'g') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'h') ADVANCE(453);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'k') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 's') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'v') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(488);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_branch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
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
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_branch);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(495);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_pick);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_edit);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_squash);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_merge);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_fixup);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_drop);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_reword);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_exec);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_label);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_reset);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(508);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_user);
      if (lookahead == '#') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_user);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '@') ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead != 0) ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym__rest_token1);
      if (eof) ADVANCE(279);
      if (lookahead == '\n') ADVANCE(283);
      if (lookahead == '\r') ADVANCE(512);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(301);
      if (lookahead != 0) ADVANCE(513);
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
  [9] = {.lex_state = 273},
  [10] = {.lex_state = 273},
  [11] = {.lex_state = 273},
  [12] = {.lex_state = 277},
  [13] = {.lex_state = 273},
  [14] = {.lex_state = 272},
  [15] = {.lex_state = 277},
  [16] = {.lex_state = 277},
  [17] = {.lex_state = 275},
  [18] = {.lex_state = 277},
  [19] = {.lex_state = 275},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 277},
  [22] = {.lex_state = 271},
  [23] = {.lex_state = 278},
  [24] = {.lex_state = 272},
  [25] = {.lex_state = 278},
  [26] = {.lex_state = 272},
  [27] = {.lex_state = 278},
  [28] = {.lex_state = 272},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 276},
  [31] = {.lex_state = 272},
  [32] = {.lex_state = 275},
  [33] = {.lex_state = 275},
  [34] = {.lex_state = 275},
  [35] = {.lex_state = 275},
  [36] = {.lex_state = 276},
  [37] = {.lex_state = 272},
  [38] = {.lex_state = 272},
  [39] = {.lex_state = 514},
  [40] = {.lex_state = 272},
  [41] = {.lex_state = 272},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 514},
  [44] = {.lex_state = 514},
  [45] = {.lex_state = 272},
  [46] = {.lex_state = 514},
  [47] = {.lex_state = 276},
  [48] = {.lex_state = 514},
  [49] = {.lex_state = 25},
  [50] = {.lex_state = 514},
  [51] = {.lex_state = 514},
  [52] = {.lex_state = 514},
  [53] = {.lex_state = 276},
  [54] = {.lex_state = 276},
  [55] = {.lex_state = 272},
  [56] = {.lex_state = 272},
  [57] = {.lex_state = 514},
  [58] = {.lex_state = 514},
  [59] = {.lex_state = 272},
  [60] = {.lex_state = 514},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 275},
  [63] = {.lex_state = 210},
  [64] = {.lex_state = 514},
  [65] = {.lex_state = 271},
  [66] = {.lex_state = 275},
  [67] = {.lex_state = 275},
  [68] = {.lex_state = 271},
  [69] = {.lex_state = 271},
  [70] = {.lex_state = 275},
  [71] = {.lex_state = 210},
  [72] = {.lex_state = 271},
  [73] = {.lex_state = 272},
  [74] = {.lex_state = 210},
  [75] = {.lex_state = 210},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 275},
  [78] = {.lex_state = 275},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 275},
  [81] = {.lex_state = 275},
  [82] = {.lex_state = 275},
  [83] = {.lex_state = 275},
  [84] = {.lex_state = 275},
  [85] = {.lex_state = 210},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 271},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 275},
  [90] = {.lex_state = 275},
  [91] = {.lex_state = 26},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 272},
  [97] = {.lex_state = 26},
  [98] = {.lex_state = 272},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 260},
  [102] = {.lex_state = 26},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 261},
  [105] = {.lex_state = 272},
  [106] = {.lex_state = 272},
  [107] = {.lex_state = 272},
  [108] = {.lex_state = 272},
  [109] = {.lex_state = 275},
  [110] = {.lex_state = 272},
  [111] = {.lex_state = 262},
  [112] = {.lex_state = 272},
  [113] = {.lex_state = 272},
  [114] = {.lex_state = 275},
  [115] = {.lex_state = 272},
  [116] = {.lex_state = 272},
  [117] = {.lex_state = 272},
  [118] = {.lex_state = 272},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 262},
  [121] = {.lex_state = 26},
  [122] = {.lex_state = 272},
  [123] = {.lex_state = 275},
  [124] = {.lex_state = 275},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 26},
  [127] = {.lex_state = 272},
  [128] = {.lex_state = 262},
  [129] = {.lex_state = 272},
  [130] = {.lex_state = 272},
  [131] = {.lex_state = 26},
  [132] = {.lex_state = 275},
  [133] = {.lex_state = 272},
  [134] = {.lex_state = 272},
  [135] = {.lex_state = 272},
  [136] = {.lex_state = 272},
  [137] = {.lex_state = 272},
  [138] = {.lex_state = 272},
  [139] = {.lex_state = 272},
  [140] = {.lex_state = 272},
  [141] = {.lex_state = 272},
  [142] = {.lex_state = 272},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 272},
  [145] = {.lex_state = 275},
  [146] = {.lex_state = 272},
  [147] = {.lex_state = 275},
  [148] = {.lex_state = 26},
  [149] = {.lex_state = 272},
  [150] = {.lex_state = 275},
  [151] = {.lex_state = 275},
  [152] = {.lex_state = 275},
  [153] = {.lex_state = 275},
  [154] = {.lex_state = 272},
  [155] = {.lex_state = 262},
  [156] = {.lex_state = 272},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 272},
  [159] = {.lex_state = 272},
  [160] = {.lex_state = 26},
  [161] = {.lex_state = 275},
  [162] = {.lex_state = 272},
  [163] = {.lex_state = 272},
  [164] = {.lex_state = 272},
  [165] = {.lex_state = 26},
  [166] = {.lex_state = 272},
  [167] = {.lex_state = 272},
  [168] = {.lex_state = 275},
  [169] = {.lex_state = 272},
  [170] = {.lex_state = 272},
  [171] = {.lex_state = 272},
  [172] = {.lex_state = 272},
  [173] = {.lex_state = 272},
  [174] = {.lex_state = 272},
  [175] = {.lex_state = 272},
  [176] = {.lex_state = 272},
  [177] = {.lex_state = 272},
  [178] = {.lex_state = 61},
  [179] = {.lex_state = 275},
  [180] = {.lex_state = 272},
  [181] = {.lex_state = 272},
  [182] = {.lex_state = 272},
  [183] = {.lex_state = 272},
  [184] = {.lex_state = 275},
  [185] = {.lex_state = 272},
  [186] = {.lex_state = 272},
  [187] = {.lex_state = 275},
  [188] = {.lex_state = 272},
  [189] = {.lex_state = 272},
  [190] = {.lex_state = 272},
  [191] = {.lex_state = 272},
  [192] = {.lex_state = 260},
  [193] = {.lex_state = 262},
  [194] = {.lex_state = 272},
  [195] = {.lex_state = 272},
  [196] = {.lex_state = 272},
  [197] = {.lex_state = 272},
  [198] = {.lex_state = 262},
  [199] = {.lex_state = 272},
  [200] = {.lex_state = 272},
  [201] = {.lex_state = 26},
  [202] = {.lex_state = 272},
  [203] = {.lex_state = 262},
  [204] = {.lex_state = 272},
  [205] = {.lex_state = 272},
  [206] = {.lex_state = 26},
  [207] = {.lex_state = 272},
  [208] = {.lex_state = 262},
  [209] = {.lex_state = 272},
  [210] = {.lex_state = 272},
  [211] = {.lex_state = 26},
  [212] = {.lex_state = 272},
  [213] = {.lex_state = 272},
  [214] = {.lex_state = 272},
  [215] = {.lex_state = 272},
  [216] = {.lex_state = 26},
  [217] = {.lex_state = 272},
  [218] = {.lex_state = 272},
  [219] = {.lex_state = 272},
  [220] = {.lex_state = 272},
  [221] = {.lex_state = 275},
  [222] = {.lex_state = 272},
  [223] = {.lex_state = 272},
  [224] = {.lex_state = 272},
  [225] = {.lex_state = 26},
  [226] = {.lex_state = 275},
  [227] = {.lex_state = 272},
  [228] = {.lex_state = 272},
  [229] = {.lex_state = 272},
  [230] = {.lex_state = 275},
  [231] = {.lex_state = 275},
  [232] = {.lex_state = 272},
  [233] = {.lex_state = 275},
  [234] = {.lex_state = 272},
  [235] = {.lex_state = 275},
  [236] = {.lex_state = 272},
  [237] = {.lex_state = 272},
  [238] = {.lex_state = 272},
  [239] = {.lex_state = 272},
  [240] = {.lex_state = 272},
  [241] = {.lex_state = 26},
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
    [sym_source] = STATE(124),
    [sym_subject] = STATE(19),
    [sym__body_line] = STATE(20),
    [sym__trailer] = STATE(34),
    [sym_comment] = STATE(19),
    [aux_sym_source_repeat1] = STATE(20),
    [aux_sym_source_repeat2] = STATE(34),
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
    STATE(30), 1,
      aux_sym_comment_repeat1,
    STATE(230), 1,
      sym_header,
    STATE(233), 1,
      sym__change_header,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    STATE(62), 3,
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
    STATE(153), 1,
      sym_rebase_command,
    STATE(161), 1,
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
  [78] = 7,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(35), 1,
      anon_sym_Last,
    ACTIONS(37), 1,
      anon_sym_Next,
    ACTIONS(39), 1,
      anon_sym_No,
    STATE(152), 1,
      sym__rebase_header,
    STATE(153), 1,
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
  [109] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(43), 1,
      anon_sym_You,
    STATE(153), 1,
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
    STATE(153), 1,
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
    STATE(153), 1,
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
  [175] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(153), 1,
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
  [194] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      sym_user,
    STATE(67), 1,
      sym_trailer,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(66), 2,
      sym_message,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [220] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      sym_user,
    STATE(67), 1,
      sym_trailer,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(66), 2,
      sym_message,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [246] = 7,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(55), 1,
      sym_user,
    STATE(67), 1,
      sym_trailer,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(66), 2,
      sym_message,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [272] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(59), 1,
      sym__word,
    ACTIONS(62), 2,
      sym_user,
      sym_item,
    STATE(12), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [292] = 5,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      sym_user,
    ACTIONS(51), 2,
      aux_sym_message_token1,
      aux_sym_message_token2,
    STATE(66), 2,
      sym_message,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [312] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(151), 1,
      sym_change,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
    ACTIONS(67), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [330] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(71), 1,
      sym__word,
    ACTIONS(73), 2,
      sym_user,
      sym_item,
    STATE(16), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [350] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(77), 1,
      sym__word,
    ACTIONS(79), 2,
      sym_user,
      sym_item,
    STATE(12), 2,
      sym__text,
      aux_sym_message_repeat1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [370] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(85), 1,
      sym__newline,
    STATE(29), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(33), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [391] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(89), 1,
      sym__word,
    STATE(21), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(91), 2,
      sym_user,
      sym_item,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [410] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    ACTIONS(97), 1,
      sym__newline,
    STATE(17), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(32), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [431] = 6,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    ACTIONS(97), 1,
      sym__newline,
    STATE(32), 2,
      sym__trailer,
      aux_sym_source_repeat2,
    STATE(33), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [452] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(101), 1,
      sym__word,
    STATE(21), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(104), 2,
      sym_user,
      sym_item,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [471] = 6,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(107), 1,
      aux_sym_source_token1,
    ACTIONS(109), 1,
      aux_sym_path_token1,
    STATE(87), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_path,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym__newline,
  [491] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(113), 1,
      aux_sym_subject_token2,
    STATE(23), 1,
      aux_sym_subject_repeat1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [506] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(118), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_summary_repeat1,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [521] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(122), 1,
      aux_sym_subject_token2,
    STATE(23), 1,
      aux_sym_subject_repeat1,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [536] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    STATE(151), 1,
      sym_change,
    ACTIONS(67), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [549] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(126), 1,
      aux_sym_subject_token2,
    STATE(25), 1,
      aux_sym_subject_repeat1,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [564] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(130), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_summary_repeat2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [579] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      aux_sym_source_token1,
    ACTIONS(137), 1,
      sym__newline,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [596] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(141), 1,
      sym__word,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [611] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(143), 1,
      anon_sym_POUND,
    STATE(28), 1,
      aux_sym_summary_repeat2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [626] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(145), 1,
      sym__newline,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [643] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(149), 1,
      sym__newline,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(33), 2,
      sym__body_line,
      aux_sym_source_repeat1,
  [658] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      aux_sym_source_token1,
    ACTIONS(152), 1,
      sym__newline,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [675] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(156), 1,
      sym__newline,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
    STATE(35), 2,
      sym__trailer,
      aux_sym_source_repeat2,
  [690] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(161), 1,
      sym__word,
    STATE(36), 1,
      aux_sym_comment_repeat1,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [705] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(166), 1,
      anon_sym_POUND,
    STATE(37), 1,
      aux_sym_summary_repeat1,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [720] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(171), 1,
      anon_sym_POUND,
    ACTIONS(169), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [732] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    STATE(52), 1,
      aux_sym__rest,
  [748] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(181), 1,
      anon_sym_POUND,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [760] = 5,
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
  [776] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(185), 1,
      aux_sym_path_token1,
    STATE(42), 1,
      aux_sym_path_repeat1,
    ACTIONS(183), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [790] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    STATE(50), 1,
      aux_sym__rest,
  [806] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym__rest,
  [822] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(192), 1,
      anon_sym_POUND,
    ACTIONS(190), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [834] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    STATE(44), 1,
      aux_sym__rest,
  [850] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 1,
      aux_sym_source_token1,
    STATE(67), 1,
      sym_trailer,
  [866] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      aux_sym__rest,
  [882] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(198), 1,
      sym__word,
    STATE(18), 1,
      aux_sym_trailer_repeat1,
    ACTIONS(200), 2,
      sym_user,
      sym_item,
  [896] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym__rest,
  [912] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    STATE(39), 1,
      aux_sym__rest,
  [928] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 1,
      sym__newline,
    ACTIONS(209), 1,
      aux_sym__rest_token1,
    STATE(52), 1,
      aux_sym__rest,
  [944] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    STATE(67), 1,
      sym_trailer,
  [960] = 5,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      sym__word,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    ACTIONS(135), 1,
      aux_sym_source_token1,
    STATE(67), 1,
      sym_trailer,
  [976] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(214), 1,
      anon_sym_POUND,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [988] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(218), 1,
      anon_sym_POUND,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1000] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym__rest,
  [1016] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      aux_sym__rest,
  [1032] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(226), 1,
      anon_sym_POUND,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1044] = 5,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(175), 1,
      sym__newline,
    ACTIONS(177), 1,
      aux_sym__rest_token1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    STATE(58), 1,
      aux_sym__rest,
  [1060] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(232), 1,
      aux_sym_path_token1,
    STATE(42), 1,
      aux_sym_path_repeat1,
    ACTIONS(230), 2,
      sym__newline,
      anon_sym_DASH_GT,
  [1074] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1083] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(234), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(236), 1,
      anon_sym_rebasing,
    STATE(85), 1,
      aux_sym__rebase_summary_repeat2,
  [1096] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(240), 1,
      aux_sym__rest_token1,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      sym__newline,
  [1107] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(183), 1,
      sym__newline,
    ACTIONS(242), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      aux_sym_path_repeat1,
  [1120] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(245), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1129] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1138] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(249), 1,
      aux_sym_path_token1,
    STATE(61), 1,
      aux_sym_path_repeat1,
    STATE(105), 1,
      sym_path,
  [1151] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(109), 1,
      aux_sym_path_token1,
    STATE(87), 1,
      aux_sym_path_repeat1,
    STATE(147), 1,
      sym_path,
  [1164] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1173] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(253), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(256), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1186] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(109), 1,
      aux_sym_path_token1,
    STATE(87), 1,
      aux_sym_path_repeat1,
    STATE(123), 1,
      sym_path,
  [1199] = 4,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(258), 1,
      anon_sym_up,
    ACTIONS(260), 1,
      anon_sym_ahead,
    ACTIONS(262), 1,
      anon_sym_behind,
  [1212] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(264), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(266), 1,
      anon_sym_rebasing,
    STATE(75), 1,
      aux_sym__rebase_summary_repeat2,
  [1225] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(236), 1,
      anon_sym_rebasing,
    ACTIONS(268), 1,
      aux_sym__rebase_summary_token1,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1238] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(270), 1,
      sym__newline,
    ACTIONS(272), 1,
      aux_sym__rebase_summary_token1,
    STATE(76), 1,
      aux_sym__rebase_summary_repeat2,
  [1251] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1260] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1269] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(277), 1,
      sym__newline,
    ACTIONS(279), 1,
      aux_sym__rebase_summary_token1,
    STATE(76), 1,
      aux_sym__rebase_summary_repeat2,
  [1282] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(281), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1291] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(283), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1300] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1309] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(287), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1318] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(289), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1327] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(268), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1340] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(291), 1,
      anon_sym_rebasing,
    ACTIONS(293), 1,
      aux_sym__rebase_summary_token1,
    STATE(88), 1,
      aux_sym__rebase_summary_repeat2,
  [1353] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(230), 1,
      sym__newline,
    ACTIONS(295), 1,
      aux_sym_path_token1,
    STATE(65), 1,
      aux_sym_path_repeat1,
  [1366] = 4,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(268), 1,
      aux_sym__rebase_summary_token1,
    ACTIONS(297), 1,
      anon_sym_rebasing,
    STATE(71), 1,
      aux_sym__rebase_summary_repeat2,
  [1379] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(212), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1388] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      aux_sym_source_token1,
      sym__newline,
  [1397] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(299), 1,
      anon_sym_POUND,
    STATE(24), 1,
      aux_sym_summary_repeat1,
  [1407] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(301), 1,
      anon_sym_POUND,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat1,
  [1417] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(303), 1,
      anon_sym_POUND,
    STATE(102), 1,
      aux_sym__rebase_summary_repeat1,
  [1427] = 3,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(305), 1,
      aux_sym__rebase_summary_token1,
    STATE(79), 1,
      aux_sym__rebase_summary_repeat2,
  [1437] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(307), 1,
      anon_sym_POUND,
    STATE(92), 1,
      aux_sym__rebase_summary_repeat1,
  [1447] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(309), 1,
      anon_sym_is,
    ACTIONS(311), 1,
      anon_sym_and,
  [1457] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(313), 1,
      anon_sym_POUND,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat1,
  [1467] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(316), 1,
      anon_sym_to,
    ACTIONS(318), 1,
      anon_sym_not,
  [1477] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(320), 1,
      anon_sym_POUND,
    STATE(103), 1,
      aux_sym__rebase_summary_repeat1,
  [1487] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(322), 1,
      anon_sym_POUND,
    STATE(31), 1,
      aux_sym_summary_repeat2,
  [1497] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      sym__word,
    STATE(67), 1,
      sym_trailer,
  [1507] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(324), 1,
      anon_sym_POUND,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat1,
  [1517] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(303), 1,
      anon_sym_POUND,
    STATE(97), 1,
      aux_sym__rebase_summary_repeat1,
  [1527] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(326), 2,
      sym_commit,
      sym_branch,
  [1535] = 3,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(328), 1,
      sym__newline,
    ACTIONS(330), 1,
      anon_sym_DASH_GT,
  [1545] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(332), 1,
      anon_sym_by,
  [1552] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(334), 1,
      anon_sym_for,
  [1559] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(336), 1,
      sym_commit,
  [1566] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(338), 1,
      sym__newline,
  [1573] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(340), 1,
      anon_sym_with,
  [1580] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(342), 1,
      sym_branch,
  [1587] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(344), 1,
      anon_sym_SQUOTE,
  [1594] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(346), 1,
      anon_sym_have,
  [1601] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(348), 1,
      sym__newline,
  [1608] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(350), 1,
      anon_sym_SQUOTE,
  [1615] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(352), 1,
      anon_sym_SQUOTE,
  [1622] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(354), 1,
      anon_sym_by,
  [1629] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(356), 1,
      anon_sym_diverged,
  [1636] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(358), 1,
      anon_sym_POUND,
  [1643] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(360), 1,
      sym_branch,
  [1650] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(362), 1,
      aux_sym__rebase_header_token2,
  [1657] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(364), 1,
      anon_sym_COMMA,
  [1664] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(366), 1,
      sym__newline,
  [1671] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [1678] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(370), 1,
      anon_sym_SQUOTE_DOT,
  [1685] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(372), 1,
      aux_sym__rebase_header_token2,
  [1692] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(374), 1,
      aux_sym__branch_declaration_token1,
  [1699] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(376), 1,
      sym_branch,
  [1706] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(378), 1,
      aux_sym__rebase_header_token1,
  [1713] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(380), 1,
      aux_sym__rebase_header_token1,
  [1720] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(382), 1,
      anon_sym_commands,
  [1727] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(384), 1,
      sym__newline,
  [1734] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
  [1741] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(388), 1,
      aux_sym__branch_declaration_token1,
  [1748] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(390), 1,
      anon_sym_DOT,
  [1755] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(392), 1,
      anon_sym_done,
  [1762] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(394), 1,
      anon_sym_to,
  [1769] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(396), 1,
      anon_sym_remaining,
  [1776] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(398), 1,
      anon_sym_date,
  [1783] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(400), 1,
      anon_sym_DOT,
  [1790] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(402), 1,
      anon_sym_COLON,
  [1797] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [1804] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(406), 1,
      anon_sym_do,
  [1811] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(408), 1,
      anon_sym_DOT,
  [1818] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(410), 1,
      sym__newline,
  [1825] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(412), 1,
      anon_sym_onto,
  [1832] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(414), 1,
      sym__newline,
  [1839] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(416), 1,
      aux_sym__rebase_header_token2,
  [1846] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
  [1853] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(420), 1,
      sym__newline,
  [1860] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(422), 1,
      sym__newline,
  [1867] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(424), 1,
      sym__newline,
  [1874] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(426), 1,
      sym__newline,
  [1881] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(428), 1,
      anon_sym_COLON,
  [1888] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(430), 1,
      sym_branch,
  [1895] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(432), 1,
      aux_sym__rebase_header_token1,
  [1902] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(434), 1,
      aux_sym__rebase_header_token2,
  [1909] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(436), 1,
      anon_sym_SQUOTE,
  [1916] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(438), 1,
      anon_sym_of,
  [1923] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(440), 1,
      anon_sym_POUND,
  [1930] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(442), 1,
      sym__newline,
  [1937] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(444), 1,
      anon_sym_to,
  [1944] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(446), 1,
      anon_sym_done,
  [1951] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(448), 1,
      anon_sym_remaining,
  [1958] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(450), 1,
      anon_sym_commit,
  [1965] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(452), 1,
      anon_sym_COLON,
  [1972] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(454), 1,
      anon_sym_SEMI,
  [1979] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(456), 1,
      sym__newline,
  [1986] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
  [1993] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(460), 1,
      aux_sym__rebase_header_token1,
  [2000] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(462), 1,
      anon_sym_are,
  [2007] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(464), 1,
      anon_sym_SQUOTE,
  [2014] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(466), 1,
      anon_sym_SQUOTE,
  [2021] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(468), 1,
      anon_sym_COLON,
  [2028] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
  [2035] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(472), 1,
      anon_sym_currently,
  [2042] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(474), 1,
      anon_sym_are,
  [2049] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(476), 1,
      anon_sym_committed,
  [2056] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(478), 1,
      sym__newline,
  [2063] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [2070] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(482), 1,
      anon_sym_progress,
  [2077] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(484), 1,
      anon_sym_currently,
  [2084] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(486), 1,
      anon_sym_are,
  [2091] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(488), 1,
      sym__newline,
  [2098] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(490), 1,
      anon_sym_branch,
  [2105] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(492), 1,
      anon_sym_COLON,
  [2112] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(494), 1,
      sym__newline,
  [2119] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(496), 1,
      anon_sym_currently,
  [2126] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(498), 1,
      anon_sym_SQUOTE,
  [2133] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(500), 1,
      anon_sym_branch,
  [2140] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(502), 1,
      anon_sym_at,
  [2147] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(504), 1,
      sym__word,
  [2154] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(506), 1,
      sym_branch,
  [2161] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(508), 1,
      anon_sym_SQUOTE,
  [2168] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(510), 1,
      anon_sym_branch,
  [2175] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(512), 1,
      anon_sym_staged,
  [2182] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(514), 1,
      anon_sym_SQUOTE,
  [2189] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(516), 1,
      sym_branch,
  [2196] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(518), 1,
      anon_sym_SQUOTE,
  [2203] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(520), 1,
      anon_sym_branch,
  [2210] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(522), 1,
      anon_sym_on,
  [2217] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(524), 1,
      anon_sym_SQUOTE,
  [2224] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(526), 1,
      sym_branch,
  [2231] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
  [2238] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
  [2245] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(532), 1,
      anon_sym_on,
  [2252] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(534), 1,
      anon_sym_SQUOTE,
  [2259] = 2,
    ACTIONS(3), 1,
      aux_sym_message_token1,
    ACTIONS(536), 1,
      sym_branch,
  [2266] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(538), 1,
      sym_commit,
  [2273] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(540), 1,
      anon_sym_SQUOTE,
  [2280] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(542), 1,
      anon_sym_on,
  [2287] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
  [2294] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(546), 1,
      anon_sym_SQUOTE,
  [2301] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(548), 1,
      sym_commit,
  [2308] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
  [2315] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(552), 1,
      anon_sym_on,
  [2322] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(554), 1,
      anon_sym_DOT,
  [2329] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(556), 1,
      anon_sym_SQUOTE,
  [2336] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(558), 1,
      sym_commit,
  [2343] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
  [2350] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(562), 1,
      sym__newline,
  [2357] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(564), 1,
      anon_sym_DOT,
  [2364] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(566), 1,
      anon_sym_SQUOTE,
  [2371] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(568), 1,
      sym_commit,
  [2378] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(570), 1,
      anon_sym_be,
  [2385] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(572), 1,
      sym__newline,
  [2392] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(574), 1,
      anon_sym_DOT,
  [2399] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(576), 1,
      anon_sym_SQUOTE,
  [2406] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(578), 1,
      anon_sym_in,
  [2413] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(580), 1,
      sym__newline,
  [2420] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(582), 1,
      sym__newline,
  [2427] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(584), 1,
      anon_sym_DOT,
  [2434] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(586), 1,
      sym__newline,
  [2441] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(588), 1,
      anon_sym_files,
  [2448] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(590), 1,
      sym__newline,
  [2455] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [2462] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(594), 1,
      anon_sym_detached,
  [2469] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(596), 1,
      anon_sym_branch,
  [2476] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(598), 1,
      anon_sym_branch,
  [2483] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(600), 1,
      anon_sym_rebase,
  [2490] = 2,
    ACTIONS(17), 1,
      aux_sym_message_token1,
    ACTIONS(602), 1,
      aux_sym_trailer_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 109,
  [SMALL_STATE(6)] = 131,
  [SMALL_STATE(7)] = 153,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 220,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 391,
  [SMALL_STATE(19)] = 410,
  [SMALL_STATE(20)] = 431,
  [SMALL_STATE(21)] = 452,
  [SMALL_STATE(22)] = 471,
  [SMALL_STATE(23)] = 491,
  [SMALL_STATE(24)] = 506,
  [SMALL_STATE(25)] = 521,
  [SMALL_STATE(26)] = 536,
  [SMALL_STATE(27)] = 549,
  [SMALL_STATE(28)] = 564,
  [SMALL_STATE(29)] = 579,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 611,
  [SMALL_STATE(32)] = 626,
  [SMALL_STATE(33)] = 643,
  [SMALL_STATE(34)] = 658,
  [SMALL_STATE(35)] = 675,
  [SMALL_STATE(36)] = 690,
  [SMALL_STATE(37)] = 705,
  [SMALL_STATE(38)] = 720,
  [SMALL_STATE(39)] = 732,
  [SMALL_STATE(40)] = 748,
  [SMALL_STATE(41)] = 760,
  [SMALL_STATE(42)] = 776,
  [SMALL_STATE(43)] = 790,
  [SMALL_STATE(44)] = 806,
  [SMALL_STATE(45)] = 822,
  [SMALL_STATE(46)] = 834,
  [SMALL_STATE(47)] = 850,
  [SMALL_STATE(48)] = 866,
  [SMALL_STATE(49)] = 882,
  [SMALL_STATE(50)] = 896,
  [SMALL_STATE(51)] = 912,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 944,
  [SMALL_STATE(54)] = 960,
  [SMALL_STATE(55)] = 976,
  [SMALL_STATE(56)] = 988,
  [SMALL_STATE(57)] = 1000,
  [SMALL_STATE(58)] = 1016,
  [SMALL_STATE(59)] = 1032,
  [SMALL_STATE(60)] = 1044,
  [SMALL_STATE(61)] = 1060,
  [SMALL_STATE(62)] = 1074,
  [SMALL_STATE(63)] = 1083,
  [SMALL_STATE(64)] = 1096,
  [SMALL_STATE(65)] = 1107,
  [SMALL_STATE(66)] = 1120,
  [SMALL_STATE(67)] = 1129,
  [SMALL_STATE(68)] = 1138,
  [SMALL_STATE(69)] = 1151,
  [SMALL_STATE(70)] = 1164,
  [SMALL_STATE(71)] = 1173,
  [SMALL_STATE(72)] = 1186,
  [SMALL_STATE(73)] = 1199,
  [SMALL_STATE(74)] = 1212,
  [SMALL_STATE(75)] = 1225,
  [SMALL_STATE(76)] = 1238,
  [SMALL_STATE(77)] = 1251,
  [SMALL_STATE(78)] = 1260,
  [SMALL_STATE(79)] = 1269,
  [SMALL_STATE(80)] = 1282,
  [SMALL_STATE(81)] = 1291,
  [SMALL_STATE(82)] = 1300,
  [SMALL_STATE(83)] = 1309,
  [SMALL_STATE(84)] = 1318,
  [SMALL_STATE(85)] = 1327,
  [SMALL_STATE(86)] = 1340,
  [SMALL_STATE(87)] = 1353,
  [SMALL_STATE(88)] = 1366,
  [SMALL_STATE(89)] = 1379,
  [SMALL_STATE(90)] = 1388,
  [SMALL_STATE(91)] = 1397,
  [SMALL_STATE(92)] = 1407,
  [SMALL_STATE(93)] = 1417,
  [SMALL_STATE(94)] = 1427,
  [SMALL_STATE(95)] = 1437,
  [SMALL_STATE(96)] = 1447,
  [SMALL_STATE(97)] = 1457,
  [SMALL_STATE(98)] = 1467,
  [SMALL_STATE(99)] = 1477,
  [SMALL_STATE(100)] = 1487,
  [SMALL_STATE(101)] = 1497,
  [SMALL_STATE(102)] = 1507,
  [SMALL_STATE(103)] = 1517,
  [SMALL_STATE(104)] = 1527,
  [SMALL_STATE(105)] = 1535,
  [SMALL_STATE(106)] = 1545,
  [SMALL_STATE(107)] = 1552,
  [SMALL_STATE(108)] = 1559,
  [SMALL_STATE(109)] = 1566,
  [SMALL_STATE(110)] = 1573,
  [SMALL_STATE(111)] = 1580,
  [SMALL_STATE(112)] = 1587,
  [SMALL_STATE(113)] = 1594,
  [SMALL_STATE(114)] = 1601,
  [SMALL_STATE(115)] = 1608,
  [SMALL_STATE(116)] = 1615,
  [SMALL_STATE(117)] = 1622,
  [SMALL_STATE(118)] = 1629,
  [SMALL_STATE(119)] = 1636,
  [SMALL_STATE(120)] = 1643,
  [SMALL_STATE(121)] = 1650,
  [SMALL_STATE(122)] = 1657,
  [SMALL_STATE(123)] = 1664,
  [SMALL_STATE(124)] = 1671,
  [SMALL_STATE(125)] = 1678,
  [SMALL_STATE(126)] = 1685,
  [SMALL_STATE(127)] = 1692,
  [SMALL_STATE(128)] = 1699,
  [SMALL_STATE(129)] = 1706,
  [SMALL_STATE(130)] = 1713,
  [SMALL_STATE(131)] = 1720,
  [SMALL_STATE(132)] = 1727,
  [SMALL_STATE(133)] = 1734,
  [SMALL_STATE(134)] = 1741,
  [SMALL_STATE(135)] = 1748,
  [SMALL_STATE(136)] = 1755,
  [SMALL_STATE(137)] = 1762,
  [SMALL_STATE(138)] = 1769,
  [SMALL_STATE(139)] = 1776,
  [SMALL_STATE(140)] = 1783,
  [SMALL_STATE(141)] = 1790,
  [SMALL_STATE(142)] = 1797,
  [SMALL_STATE(143)] = 1804,
  [SMALL_STATE(144)] = 1811,
  [SMALL_STATE(145)] = 1818,
  [SMALL_STATE(146)] = 1825,
  [SMALL_STATE(147)] = 1832,
  [SMALL_STATE(148)] = 1839,
  [SMALL_STATE(149)] = 1846,
  [SMALL_STATE(150)] = 1853,
  [SMALL_STATE(151)] = 1860,
  [SMALL_STATE(152)] = 1867,
  [SMALL_STATE(153)] = 1874,
  [SMALL_STATE(154)] = 1881,
  [SMALL_STATE(155)] = 1888,
  [SMALL_STATE(156)] = 1895,
  [SMALL_STATE(157)] = 1902,
  [SMALL_STATE(158)] = 1909,
  [SMALL_STATE(159)] = 1916,
  [SMALL_STATE(160)] = 1923,
  [SMALL_STATE(161)] = 1930,
  [SMALL_STATE(162)] = 1937,
  [SMALL_STATE(163)] = 1944,
  [SMALL_STATE(164)] = 1951,
  [SMALL_STATE(165)] = 1958,
  [SMALL_STATE(166)] = 1965,
  [SMALL_STATE(167)] = 1972,
  [SMALL_STATE(168)] = 1979,
  [SMALL_STATE(169)] = 1986,
  [SMALL_STATE(170)] = 1993,
  [SMALL_STATE(171)] = 2000,
  [SMALL_STATE(172)] = 2007,
  [SMALL_STATE(173)] = 2014,
  [SMALL_STATE(174)] = 2021,
  [SMALL_STATE(175)] = 2028,
  [SMALL_STATE(176)] = 2035,
  [SMALL_STATE(177)] = 2042,
  [SMALL_STATE(178)] = 2049,
  [SMALL_STATE(179)] = 2056,
  [SMALL_STATE(180)] = 2063,
  [SMALL_STATE(181)] = 2070,
  [SMALL_STATE(182)] = 2077,
  [SMALL_STATE(183)] = 2084,
  [SMALL_STATE(184)] = 2091,
  [SMALL_STATE(185)] = 2098,
  [SMALL_STATE(186)] = 2105,
  [SMALL_STATE(187)] = 2112,
  [SMALL_STATE(188)] = 2119,
  [SMALL_STATE(189)] = 2126,
  [SMALL_STATE(190)] = 2133,
  [SMALL_STATE(191)] = 2140,
  [SMALL_STATE(192)] = 2147,
  [SMALL_STATE(193)] = 2154,
  [SMALL_STATE(194)] = 2161,
  [SMALL_STATE(195)] = 2168,
  [SMALL_STATE(196)] = 2175,
  [SMALL_STATE(197)] = 2182,
  [SMALL_STATE(198)] = 2189,
  [SMALL_STATE(199)] = 2196,
  [SMALL_STATE(200)] = 2203,
  [SMALL_STATE(201)] = 2210,
  [SMALL_STATE(202)] = 2217,
  [SMALL_STATE(203)] = 2224,
  [SMALL_STATE(204)] = 2231,
  [SMALL_STATE(205)] = 2238,
  [SMALL_STATE(206)] = 2245,
  [SMALL_STATE(207)] = 2252,
  [SMALL_STATE(208)] = 2259,
  [SMALL_STATE(209)] = 2266,
  [SMALL_STATE(210)] = 2273,
  [SMALL_STATE(211)] = 2280,
  [SMALL_STATE(212)] = 2287,
  [SMALL_STATE(213)] = 2294,
  [SMALL_STATE(214)] = 2301,
  [SMALL_STATE(215)] = 2308,
  [SMALL_STATE(216)] = 2315,
  [SMALL_STATE(217)] = 2322,
  [SMALL_STATE(218)] = 2329,
  [SMALL_STATE(219)] = 2336,
  [SMALL_STATE(220)] = 2343,
  [SMALL_STATE(221)] = 2350,
  [SMALL_STATE(222)] = 2357,
  [SMALL_STATE(223)] = 2364,
  [SMALL_STATE(224)] = 2371,
  [SMALL_STATE(225)] = 2378,
  [SMALL_STATE(226)] = 2385,
  [SMALL_STATE(227)] = 2392,
  [SMALL_STATE(228)] = 2399,
  [SMALL_STATE(229)] = 2406,
  [SMALL_STATE(230)] = 2413,
  [SMALL_STATE(231)] = 2420,
  [SMALL_STATE(232)] = 2427,
  [SMALL_STATE(233)] = 2434,
  [SMALL_STATE(234)] = 2441,
  [SMALL_STATE(235)] = 2448,
  [SMALL_STATE(236)] = 2455,
  [SMALL_STATE(237)] = 2462,
  [SMALL_STATE(238)] = 2469,
  [SMALL_STATE(239)] = 2476,
  [SMALL_STATE(240)] = 2483,
  [SMALL_STATE(241)] = 2490,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(12),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trailer, 3, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(21),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_trailer_repeat1, 2), SHIFT_REPEAT(21),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 2), SHIFT_REPEAT(69),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(101),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(36),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 29),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat1, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summary_repeat2, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat2, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3, .production_id = 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(64),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rest, 2), SHIFT_REPEAT(64),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 30),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 31),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 6, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 32),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rest, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rest, 1),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(65),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trailer, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 3, .production_id = 4),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(71),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat2, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__rebase_summary_repeat2, 2), SHIFT_REPEAT(76),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rebase_command, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 10),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 11),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_summary, 33),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__branch_declaration, 12),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 2), SHIFT_REPEAT(8),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3, .production_id = 8),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__change_header, 5),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__rebase_summary_repeat1, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 9),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rebase_header, 10),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
