#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym__line_token1 = 1,
  anon_sym_POUND = 2,
  anon_sym_On = 3,
  anon_sym_branch = 4,
  anon_sym_Your = 5,
  anon_sym_is = 6,
  anon_sym_up = 7,
  anon_sym_to = 8,
  anon_sym_date = 9,
  anon_sym_with = 10,
  anon_sym_SQUOTE = 11,
  aux_sym__comment_body_token1 = 12,
  anon_sym_SQUOTE_DOT = 13,
  anon_sym_HEAD = 14,
  anon_sym_detached = 15,
  anon_sym_at = 16,
  anon_sym_newfile = 17,
  anon_sym_modified = 18,
  anon_sym_renamed = 19,
  anon_sym_deleted = 20,
  anon_sym_COLON = 21,
  anon_sym_DASH_GT = 22,
  sym_commit = 23,
  sym__word = 24,
  aux_sym_path_token1 = 25,
  sym_source = 26,
  sym__line = 27,
  sym_comment = 28,
  sym__comment_body = 29,
  sym_change = 30,
  sym_path = 31,
  aux_sym_source_repeat1 = 32,
  aux_sym__comment_body_repeat1 = 33,
  aux_sym_path_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
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
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_comment] = "comment",
  [sym__comment_body] = "_comment_body",
  [sym_change] = "change",
  [sym_path] = "path",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym__comment_body_repeat1] = "_comment_body_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
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
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_comment] = sym_comment,
  [sym__comment_body] = sym__comment_body,
  [sym_change] = sym_change,
  [sym_path] = sym_path,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym__comment_body_repeat1] = aux_sym__comment_body_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
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
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
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
      if (eof) ADVANCE(71);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(83);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(94);
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
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(130);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'Y') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(97);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(98);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(132);
      if (lookahead != 0) ADVANCE(133);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(82);
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
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(95);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(87);
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
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(90);
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
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(75);
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
      if (lookahead == 'n') ADVANCE(74);
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
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(89);
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
          lookahead == '\f') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(85);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_On);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_branch);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Your);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_up);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_date);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '.') ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__comment_body_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '\'' &&
          lookahead != '.') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SQUOTE_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_HEAD);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_detached);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_at);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_newfile);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_modified);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_renamed);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'H') ADVANCE(102);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == 'Y') ADVANCE(122);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(97);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(98);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(129);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'd') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'm') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_path_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(133);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 63},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
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
    [sym_source] = STATE(19),
    [sym__line] = STATE(4),
    [sym_comment] = STATE(27),
    [aux_sym_source_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym__line_token1] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      aux_sym__line_token1,
    ACTIONS(11), 1,
      anon_sym_On,
    ACTIONS(13), 1,
      anon_sym_Your,
    ACTIONS(15), 1,
      anon_sym_HEAD,
    ACTIONS(19), 1,
      sym__word,
    STATE(12), 1,
      aux_sym__comment_body_repeat1,
    STATE(35), 2,
      sym__comment_body,
      sym_change,
    ACTIONS(17), 4,
      anon_sym_newfile,
      anon_sym_modified,
      anon_sym_renamed,
      anon_sym_deleted,
  [29] = 5,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym__line_token1,
    ACTIONS(26), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_comment,
    STATE(3), 2,
      sym__line,
      aux_sym_source_repeat1,
  [46] = 5,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym__line_token1,
    STATE(27), 1,
      sym_comment,
    STATE(3), 2,
      sym__line,
      aux_sym_source_repeat1,
  [63] = 3,
    ACTIONS(35), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat1,
    ACTIONS(33), 2,
      aux_sym__line_token1,
      anon_sym_DASH_GT,
  [74] = 3,
    ACTIONS(40), 1,
      aux_sym_path_token1,
    STATE(5), 1,
      aux_sym_path_repeat1,
    ACTIONS(38), 2,
      aux_sym__line_token1,
      anon_sym_DASH_GT,
  [85] = 3,
    ACTIONS(42), 1,
      aux_sym__line_token1,
    ACTIONS(44), 1,
      sym__word,
    STATE(7), 1,
      aux_sym__comment_body_repeat1,
  [95] = 3,
    ACTIONS(47), 1,
      aux_sym_path_token1,
    STATE(6), 1,
      aux_sym_path_repeat1,
    STATE(14), 1,
      sym_path,
  [105] = 3,
    ACTIONS(33), 1,
      aux_sym__line_token1,
    ACTIONS(49), 1,
      aux_sym_path_token1,
    STATE(9), 1,
      aux_sym_path_repeat1,
  [115] = 3,
    ACTIONS(38), 1,
      aux_sym__line_token1,
    ACTIONS(52), 1,
      aux_sym_path_token1,
    STATE(9), 1,
      aux_sym_path_repeat1,
  [125] = 3,
    ACTIONS(54), 1,
      aux_sym_path_token1,
    STATE(10), 1,
      aux_sym_path_repeat1,
    STATE(29), 1,
      sym_path,
  [135] = 3,
    ACTIONS(56), 1,
      aux_sym__line_token1,
    ACTIONS(58), 1,
      sym__word,
    STATE(7), 1,
      aux_sym__comment_body_repeat1,
  [145] = 1,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_POUND,
  [151] = 2,
    ACTIONS(62), 1,
      aux_sym__line_token1,
    ACTIONS(64), 1,
      anon_sym_DASH_GT,
  [158] = 1,
    ACTIONS(66), 1,
      anon_sym_is,
  [162] = 1,
    ACTIONS(68), 1,
      anon_sym_detached,
  [166] = 1,
    ACTIONS(70), 1,
      anon_sym_branch,
  [170] = 1,
    ACTIONS(72), 1,
      anon_sym_at,
  [174] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [178] = 1,
    ACTIONS(76), 1,
      aux_sym__line_token1,
  [182] = 1,
    ACTIONS(78), 1,
      anon_sym_up,
  [186] = 1,
    ACTIONS(80), 1,
      sym_commit,
  [190] = 1,
    ACTIONS(82), 1,
      anon_sym_branch,
  [194] = 1,
    ACTIONS(84), 1,
      anon_sym_to,
  [198] = 1,
    ACTIONS(86), 1,
      aux_sym__line_token1,
  [202] = 1,
    ACTIONS(88), 1,
      sym__word,
  [206] = 1,
    ACTIONS(90), 1,
      aux_sym__line_token1,
  [210] = 1,
    ACTIONS(92), 1,
      anon_sym_date,
  [214] = 1,
    ACTIONS(94), 1,
      aux_sym__line_token1,
  [218] = 1,
    ACTIONS(96), 1,
      anon_sym_with,
  [222] = 1,
    ACTIONS(98), 1,
      anon_sym_SQUOTE,
  [226] = 1,
    ACTIONS(100), 1,
      aux_sym__comment_body_token1,
  [230] = 1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE_DOT,
  [234] = 1,
    ACTIONS(104), 1,
      aux_sym__line_token1,
  [238] = 1,
    ACTIONS(106), 1,
      aux_sym__line_token1,
  [242] = 1,
    ACTIONS(108), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 95,
  [SMALL_STATE(9)] = 105,
  [SMALL_STATE(10)] = 115,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 135,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 151,
  [SMALL_STATE(15)] = 158,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 166,
  [SMALL_STATE(18)] = 170,
  [SMALL_STATE(19)] = 174,
  [SMALL_STATE(20)] = 178,
  [SMALL_STATE(21)] = 182,
  [SMALL_STATE(22)] = 186,
  [SMALL_STATE(23)] = 190,
  [SMALL_STATE(24)] = 194,
  [SMALL_STATE(25)] = 198,
  [SMALL_STATE(26)] = 202,
  [SMALL_STATE(27)] = 206,
  [SMALL_STATE(28)] = 210,
  [SMALL_STATE(29)] = 214,
  [SMALL_STATE(30)] = 218,
  [SMALL_STATE(31)] = 222,
  [SMALL_STATE(32)] = 226,
  [SMALL_STATE(33)] = 230,
  [SMALL_STATE(34)] = 234,
  [SMALL_STATE(35)] = 238,
  [SMALL_STATE(36)] = 242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__comment_body_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_body, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_change, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_body, 10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
