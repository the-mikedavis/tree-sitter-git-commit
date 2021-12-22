#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 55
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\'') ADVANCE(95);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(106);
      if (lookahead == 'H') ADVANCE(13);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'Y') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'w') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('c' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(80);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(109);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'Y') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(107);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(99);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(30);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'w') ADVANCE(6);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(143);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(97);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
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
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(71)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 72:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(72)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(144);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 73:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'Y') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 74:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(74)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 75:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(75)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 76:
      if (eof) ADVANCE(77);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_subject_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_subject_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_message_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '#') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(96);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(109);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'Y') ADVANCE(135);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(110);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(111);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(143);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_item);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 73},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 76},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 76},
  [16] = {.lex_state = 74},
  [17] = {.lex_state = 71},
  [18] = {.lex_state = 75},
  [19] = {.lex_state = 76},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 75},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 74},
  [24] = {.lex_state = 75},
  [25] = {.lex_state = 75},
  [26] = {.lex_state = 74},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 74},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 62},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
    [sym_source] = STATE(42),
    [sym_subject] = STATE(31),
    [sym_message] = STATE(53),
    [sym_comment] = STATE(32),
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
    STATE(16), 1,
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
    STATE(51), 2,
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
    STATE(4), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [103] = 6,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_source_token1,
    STATE(10), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [124] = 6,
    ACTIONS(29), 1,
      aux_sym_source_token1,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [145] = 6,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      aux_sym_source_token1,
    ACTIONS(48), 1,
      aux_sym_message_token1,
    ACTIONS(51), 1,
      anon_sym_POUND,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [166] = 6,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(54), 1,
      aux_sym_source_token1,
    STATE(7), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [187] = 6,
    ACTIONS(29), 1,
      aux_sym_source_token1,
    ACTIONS(31), 1,
      aux_sym_message_token1,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym__body_line,
      aux_sym_source_repeat1,
    STATE(51), 2,
      sym_message,
      sym_comment,
  [208] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      aux_sym_path_token1,
    STATE(11), 1,
      aux_sym_path_repeat1,
    ACTIONS(60), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [222] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      aux_sym_path_token1,
    STATE(11), 1,
      aux_sym_path_repeat1,
    ACTIONS(67), 2,
      aux_sym_source_token1,
      anon_sym_DASH_GT,
  [236] = 4,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      aux_sym_source_token1,
    ACTIONS(75), 1,
      aux_sym_subject_token2,
    STATE(19), 1,
      aux_sym_subject_repeat1,
  [249] = 3,
    ACTIONS(77), 1,
      aux_sym_source_token1,
    STATE(20), 1,
      aux_sym_message_repeat1,
    ACTIONS(79), 2,
      sym__word,
      sym_item,
  [260] = 4,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_token1,
    ACTIONS(85), 1,
      aux_sym_subject_token2,
    STATE(13), 1,
      aux_sym_subject_repeat1,
  [273] = 4,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      aux_sym_source_token1,
    ACTIONS(91), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [286] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym_message_token1,
    ACTIONS(95), 2,
      aux_sym_source_token1,
      anon_sym_POUND,
  [295] = 4,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_source_token1,
    ACTIONS(97), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
  [308] = 4,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      aux_sym_source_token1,
    ACTIONS(103), 1,
      aux_sym_subject_token2,
    STATE(19), 1,
      aux_sym_subject_repeat1,
  [321] = 3,
    ACTIONS(106), 1,
      aux_sym_source_token1,
    STATE(20), 1,
      aux_sym_message_repeat1,
    ACTIONS(108), 2,
      sym__word,
      sym_item,
  [332] = 4,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    ACTIONS(111), 1,
      aux_sym_path_token1,
    STATE(21), 1,
      aux_sym_path_repeat1,
  [345] = 3,
    ACTIONS(114), 1,
      aux_sym_source_token1,
    STATE(14), 1,
      aux_sym_message_repeat1,
    ACTIONS(116), 2,
      sym__word,
      sym_item,
  [356] = 4,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      aux_sym_source_token1,
    ACTIONS(122), 1,
      sym__word,
    STATE(23), 1,
      aux_sym__comment_body_repeat1,
  [369] = 3,
    ACTIONS(125), 1,
      aux_sym_path_token1,
    STATE(12), 1,
      aux_sym_path_repeat1,
    STATE(27), 1,
      sym_path,
  [379] = 3,
    ACTIONS(127), 1,
      aux_sym_path_token1,
    STATE(18), 1,
      aux_sym_path_repeat1,
    STATE(35), 1,
      sym_path,
  [389] = 3,
    ACTIONS(89), 1,
      aux_sym_source_token1,
    ACTIONS(129), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [399] = 2,
    ACTIONS(133), 1,
      anon_sym_DASH_GT,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [407] = 3,
    ACTIONS(120), 1,
      aux_sym_source_token1,
    ACTIONS(135), 1,
      sym__word,
    STATE(28), 1,
      aux_sym__comment_body_repeat1,
  [417] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [422] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym_source_token1,
  [429] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(142), 1,
      aux_sym_source_token1,
  [436] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_source_token1,
  [443] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [448] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [453] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [458] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [463] = 1,
    ACTIONS(154), 1,
      anon_sym_branch,
  [467] = 1,
    ACTIONS(156), 1,
      sym__word,
  [471] = 1,
    ACTIONS(158), 1,
      anon_sym_to,
  [475] = 1,
    ACTIONS(160), 1,
      anon_sym_COLON,
  [479] = 1,
    ACTIONS(162), 1,
      anon_sym_detached,
  [483] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [487] = 1,
    ACTIONS(166), 1,
      anon_sym_date,
  [491] = 1,
    ACTIONS(168), 1,
      anon_sym_at,
  [495] = 1,
    ACTIONS(170), 1,
      anon_sym_with,
  [499] = 1,
    ACTIONS(172), 1,
      anon_sym_SQUOTE,
  [503] = 1,
    ACTIONS(174), 1,
      aux_sym__comment_body_token1,
  [507] = 1,
    ACTIONS(176), 1,
      anon_sym_SQUOTE_DOT,
  [511] = 1,
    ACTIONS(178), 1,
      sym_commit,
  [515] = 1,
    ACTIONS(180), 1,
      anon_sym_branch,
  [519] = 1,
    ACTIONS(182), 1,
      aux_sym_source_token1,
  [523] = 1,
    ACTIONS(184), 1,
      anon_sym_up,
  [527] = 1,
    ACTIONS(144), 1,
      aux_sym_source_token1,
  [531] = 1,
    ACTIONS(186), 1,
      anon_sym_is,
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
  [SMALL_STATE(14)] = 249,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 369,
  [SMALL_STATE(25)] = 379,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 399,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 417,
  [SMALL_STATE(30)] = 422,
  [SMALL_STATE(31)] = 429,
  [SMALL_STATE(32)] = 436,
  [SMALL_STATE(33)] = 443,
  [SMALL_STATE(34)] = 448,
  [SMALL_STATE(35)] = 453,
  [SMALL_STATE(36)] = 458,
  [SMALL_STATE(37)] = 463,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 471,
  [SMALL_STATE(40)] = 475,
  [SMALL_STATE(41)] = 479,
  [SMALL_STATE(42)] = 483,
  [SMALL_STATE(43)] = 487,
  [SMALL_STATE(44)] = 491,
  [SMALL_STATE(45)] = 495,
  [SMALL_STATE(46)] = 499,
  [SMALL_STATE(47)] = 503,
  [SMALL_STATE(48)] = 507,
  [SMALL_STATE(49)] = 511,
  [SMALL_STATE(50)] = 515,
  [SMALL_STATE(51)] = 519,
  [SMALL_STATE(52)] = 523,
  [SMALL_STATE(53)] = 527,
  [SMALL_STATE(54)] = 531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(22),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subject, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subject, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__body_line, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__body_line, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subject_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subject_repeat1, 2), SHIFT_REPEAT(19),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_repeat1, 2), SHIFT_REPEAT(20),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(21),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(23),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(28),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 4),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 3, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 10),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
