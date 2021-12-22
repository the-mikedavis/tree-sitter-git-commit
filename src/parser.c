#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_source_token1 = 1,
  aux_sym_subject_token1 = 2,
  aux_sym_subject_token2 = 3,
  aux_sym_message_token1 = 4,
  anon_sym_POUND = 5,
  anon_sym_On = 6,
  anon_sym_branch = 7,
  anon_sym_Your = 8,
  anon_sym_is = 9,
  anon_sym_up = 10,
  anon_sym_to = 11,
  anon_sym_date = 12,
  anon_sym_with = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__comment_body_token1 = 15,
  anon_sym_SQUOTE_DOT = 16,
  anon_sym_HEAD = 17,
  anon_sym_detached = 18,
  anon_sym_at = 19,
  anon_sym_newfile = 20,
  anon_sym_modified = 21,
  anon_sym_renamed = 22,
  anon_sym_deleted = 23,
  anon_sym_COLON = 24,
  anon_sym_DASH_GT = 25,
  sym_commit = 26,
  sym__word = 27,
  aux_sym_path_token1 = 28,
  sym_item = 29,
  sym_source = 30,
  sym__body_line = 31,
  sym_subject = 32,
  sym_message = 33,
  sym_comment = 34,
  sym__comment_body = 35,
  sym_change = 36,
  sym_path = 37,
  aux_sym_source_repeat1 = 38,
  aux_sym_subject_repeat1 = 39,
  aux_sym_message_repeat1 = 40,
  aux_sym__comment_body_repeat1 = 41,
  aux_sym_path_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [aux_sym_subject_token1] = "subject_token1",
  [aux_sym_subject_token2] = "subject_token2",
  [aux_sym_message_token1] = "message_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_On] = "On",
  [anon_sym_branch] = "branch",
  [anon_sym_Your] = "Your",
  [anon_sym_is] = "is",
  [anon_sym_up] = "up",
  [anon_sym_to] = "to",
  [anon_sym_date] = "date",
  [anon_sym_with] = "with",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__comment_body_token1] = "branch",
  [anon_sym_SQUOTE_DOT] = "'.",
  [anon_sym_HEAD] = "HEAD",
  [anon_sym_detached] = "detached",
  [anon_sym_at] = "at",
  [anon_sym_newfile] = "new file",
  [anon_sym_modified] = "modified",
  [anon_sym_renamed] = "renamed",
  [anon_sym_deleted] = "deleted",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [sym_commit] = "commit",
  [sym__word] = "_word",
  [aux_sym_path_token1] = "path_token1",
  [sym_item] = "item",
  [sym_source] = "source",
  [sym__body_line] = "_body_line",
  [sym_subject] = "subject",
  [sym_message] = "message",
  [sym_comment] = "comment",
  [sym__comment_body] = "_comment_body",
  [sym_change] = "change",
  [sym_path] = "path",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_subject_repeat1] = "subject_repeat1",
  [aux_sym_message_repeat1] = "message_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [aux_sym_subject_token1] = aux_sym_subject_token1,
  [aux_sym_subject_token2] = aux_sym_subject_token2,
  [aux_sym_message_token1] = aux_sym_message_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_On] = anon_sym_On,
  [anon_sym_branch] = anon_sym_branch,
  [anon_sym_Your] = anon_sym_Your,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_up] = anon_sym_up,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__comment_body_token1] = aux_sym__comment_body_token1,
  [anon_sym_SQUOTE_DOT] = anon_sym_SQUOTE_DOT,
  [anon_sym_HEAD] = anon_sym_HEAD,
  [anon_sym_detached] = anon_sym_detached,
  [anon_sym_at] = anon_sym_at,
  [anon_sym_newfile] = anon_sym_newfile,
  [anon_sym_modified] = anon_sym_modified,
  [anon_sym_renamed] = anon_sym_renamed,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_commit] = sym_commit,
  [sym__word] = sym__word,
  [aux_sym_path_token1] = aux_sym_path_token1,
  [sym_item] = sym_item,
  [sym_source] = sym_source,
  [sym__body_line] = sym__body_line,
  [sym_subject] = sym_subject,
  [sym_message] = sym_message,
  [sym_comment] = sym_comment,
  [sym__comment_body] = sym__comment_body,
  [sym_change] = sym_change,
  [sym_path] = sym_path,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_subject_repeat1] = aux_sym_subject_repeat1,
  [aux_sym_message_repeat1] = aux_sym_message_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_On] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_branch] = {
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
  [anon_sym_to] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_body_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE_DOT] = {
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
  [anon_sym_COLON] = {
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
  [aux_sym_path_token1] = {
    .visible = false,
    .named = false,
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
  [sym_change] = {
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
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = aux_sym__comment_body_token1,
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
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\'') ADVANCE(96);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(107);
      if (lookahead == 'H') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'Y') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(51);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'w') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(81);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(112);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(108);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(31);
      if (lookahead == 't') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 62:
      if (lookahead == 'w') ADVANCE(7);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(64)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(98);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 73:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 74:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(145);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 75:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 76:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(112);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 77:
      if (eof) ADVANCE(78);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(147);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(134);
      if (lookahead == 'Y') ADVANCE(136);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(112);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(144);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 75},
  [3] = {.lex_state = 75},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 74},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 74},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 76},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 76},
  [22] = {.lex_state = 77},
  [23] = {.lex_state = 77},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 76},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 77},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 77},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 63},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_On] = ACTIONS(1),
    [anon_sym_branch] = ACTIONS(1),
    [anon_sym_Your] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_up] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_DOT] = ACTIONS(1),
    [anon_sym_HEAD] = ACTIONS(1),
    [anon_sym_detached] = ACTIONS(1),
    [anon_sym_at] = ACTIONS(1),
    [anon_sym_newfile] = ACTIONS(1),
    [anon_sym_modified] = ACTIONS(1),
    [anon_sym_renamed] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(55),
    [sym_subject] = STATE(56),
    [sym_message] = STATE(34),
    [sym_comment] = STATE(34),
    [aux_sym_source_token1] = ACTIONS(3),
    [aux_sym_subject_token1] = ACTIONS(5),
    [aux_sym_message_token1] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_HEAD,
    ACTIONS(23), 1,
      sym__word,
    STATE(17), 1,
      aux_sym__comment_body_repeat1,
    STATE(36), 2,
      sym__comment_body,
      sym_change,
    ACTIONS(21), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [32] = 8,
    ACTIONS(13), 1,
      aux_sym_source_token1,
    ACTIONS(15), 1,
      anon_sym_On,
    ACTIONS(17), 1,
      anon_sym_Your,
    ACTIONS(19), 1,
      anon_sym_HEAD,
    ACTIONS(25), 1,
      sym__word,
    STATE(26), 1,
      aux_sym__comment_body_repeat1,
    STATE(36), 2,
      sym__comment_body,
      sym_change,
    ACTIONS(21), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [61] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_source_token1,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [82] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [103] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [124] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [145] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      aux_sym_source_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [166] = 6,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      aux_sym_source_token1,
    ACTIONS(50), 1,
      aux_sym_message_token1,
    ACTIONS(53), 1,
      anon_sym_POUND,
    STATE(9), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [187] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_source_token1,
    STATE(5), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(54), 2,
      sym_message,
      sym_comment,
  [208] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(62), 2,
      sym__word,
      sym_item,
  [222] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(66), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [236] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_message_repeat1,
    ACTIONS(74), 2,
      sym__word,
      sym_item,
  [250] = 4,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_message_repeat1,
    ACTIONS(81), 2,
      sym__word,
      sym_item,
  [264] = 4,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_path_token1,
    STATE(15), 1,
      aux_sym_path_repeat1,
    ACTIONS(85), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [278] = 3,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    STATE(18), 1,
      aux_sym_message_repeat1,
    ACTIONS(90), 2,
      sym__word,
      sym_item,
  [289] = 4,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_source_token1,
    ACTIONS(96), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__comment_body_repeat1,
  [302] = 3,
    ACTIONS(79), 1,
      aux_sym_source_token1,
    STATE(20), 1,
      aux_sym_message_repeat1,
    ACTIONS(98), 2,
      sym__word,
      sym_item,
  [313] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(102), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [322] = 3,
    ACTIONS(72), 1,
      aux_sym_source_token1,
    STATE(20), 1,
      aux_sym_message_repeat1,
    ACTIONS(104), 2,
      sym__word,
      sym_item,
  [333] = 4,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      aux_sym_source_token1,
    ACTIONS(111), 1,
      sym__word,
    STATE(21), 1,
      aux_sym__comment_body_repeat1,
  [346] = 4,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      aux_sym_source_token1,
    ACTIONS(114), 1,
      aux_sym_path_token1,
    STATE(23), 1,
      aux_sym_path_repeat1,
  [359] = 4,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      aux_sym_source_token1,
    ACTIONS(116), 1,
      aux_sym_path_token1,
    STATE(23), 1,
      aux_sym_path_repeat1,
  [372] = 3,
    ACTIONS(119), 1,
      aux_sym_source_token1,
    ACTIONS(121), 1,
      aux_sym_subject_token2,
    STATE(28), 1,
      aux_sym_subject_repeat1,
  [382] = 2,
    ACTIONS(125), 1,
      anon_sym_DASH_GT,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [390] = 3,
    ACTIONS(94), 1,
      aux_sym_source_token1,
    ACTIONS(127), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [400] = 3,
    ACTIONS(129), 1,
      aux_sym_source_token1,
    ACTIONS(131), 1,
      aux_sym_subject_token2,
    STATE(27), 1,
      aux_sym_subject_repeat1,
  [410] = 3,
    ACTIONS(134), 1,
      aux_sym_source_token1,
    ACTIONS(136), 1,
      aux_sym_subject_token2,
    STATE(27), 1,
      aux_sym_subject_repeat1,
  [420] = 3,
    ACTIONS(138), 1,
      aux_sym_path_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(32), 1,
      sym_path,
  [430] = 3,
    ACTIONS(109), 1,
      aux_sym_source_token1,
    ACTIONS(140), 1,
      sym__word,
    STATE(30), 1,
      aux_sym__comment_body_repeat1,
  [440] = 3,
    ACTIONS(143), 1,
      aux_sym_path_token1,
    STATE(12), 1,
      aux_sym_path_repeat1,
    STATE(25), 1,
      sym_path,
  [450] = 1,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [455] = 1,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [460] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      aux_sym_source_token1,
  [467] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [472] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [477] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [482] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 1,
      aux_sym_source_token1,
  [489] = 1,
    ACTIONS(159), 1,
      anon_sym_SQUOTE,
  [493] = 1,
    ACTIONS(161), 1,
      anon_sym_to,
  [497] = 1,
    ACTIONS(163), 1,
      anon_sym_is,
  [501] = 1,
    ACTIONS(165), 1,
      sym__word,
  [505] = 1,
    ACTIONS(167), 1,
      anon_sym_date,
  [509] = 1,
    ACTIONS(169), 1,
      anon_sym_with,
  [513] = 1,
    ACTIONS(171), 1,
      anon_sym_up,
  [517] = 1,
    ACTIONS(173), 1,
      aux_sym__comment_body_token1,
  [521] = 1,
    ACTIONS(175), 1,
      anon_sym_SQUOTE_DOT,
  [525] = 1,
    ACTIONS(177), 1,
      sym_commit,
  [529] = 1,
    ACTIONS(179), 1,
      anon_sym_at,
  [533] = 1,
    ACTIONS(181), 1,
      anon_sym_COLON,
  [537] = 1,
    ACTIONS(183), 1,
      anon_sym_detached,
  [541] = 1,
    ACTIONS(185), 1,
      anon_sym_branch,
  [545] = 1,
    ACTIONS(187), 1,
      anon_sym_branch,
  [549] = 1,
    ACTIONS(189), 1,
      aux_sym_source_token1,
  [553] = 1,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
  [557] = 1,
    ACTIONS(193), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 103,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 166,
  [SMALL_STATE(10)] = 187,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 278,
  [SMALL_STATE(17)] = 289,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 359,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 400,
  [SMALL_STATE(28)] = 410,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 430,
  [SMALL_STATE(31)] = 440,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 460,
  [SMALL_STATE(35)] = 467,
  [SMALL_STATE(36)] = 472,
  [SMALL_STATE(37)] = 477,
  [SMALL_STATE(38)] = 482,
  [SMALL_STATE(39)] = 489,
  [SMALL_STATE(40)] = 493,
  [SMALL_STATE(41)] = 497,
  [SMALL_STATE(42)] = 501,
  [SMALL_STATE(43)] = 505,
  [SMALL_STATE(44)] = 509,
  [SMALL_STATE(45)] = 513,
  [SMALL_STATE(46)] = 517,
  [SMALL_STATE(47)] = 521,
  [SMALL_STATE(48)] = 525,
  [SMALL_STATE(49)] = 529,
  [SMALL_STATE(50)] = 533,
  [SMALL_STATE(51)] = 537,
  [SMALL_STATE(52)] = 541,
  [SMALL_STATE(53)] = 545,
  [SMALL_STATE(54)] = 549,
  [SMALL_STATE(55)] = 553,
  [SMALL_STATE(56)] = 557,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_repeat1, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(23),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(27),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 3, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitcommit(void) {
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
