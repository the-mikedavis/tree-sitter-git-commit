/* glossary:
   - subject: the first line of a commit
   - message: the body of a commit
     - usually starts on the third line of the file (1-indexed)
     - may be interspersed with comments
   - item: an issue or PR
   - change: how a file will change with this commit
     - either 'new file', 'modified', 'renamed' or 'deleted'
 */

const WHITE_SPACE = /[\t\f\v ]+/;
const NEWLINE = /\r?\n/;
const ANYTHING = /[^\n\r]+/;
const CHANGE = choice("new file", "modified", "renamed", "deleted");
const PREC = {
  NONSENSE: -1,
  PATH: 5,
  PATH_SEPARATOR_ARROW: 6,
  REBASE_COMMAND: 7,
  ITEM: 10,
  USER: 11,
  SUBJECT_FIRST_CHAR: 15,
  SUBJECT: 16,
};

const SCISSORS =
  /# -+ >8 -+\r?\n# Do not modify or remove the line above.\r?\n# Everything below it will be ignored.\r?\n?/;

module.exports = grammar({
  name: "git_commit",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      seq(
        optional(choice($.comment, $.subject)),
        optional(seq(NEWLINE, repeat($._body_line))),
        optional(
          seq(alias(SCISSORS, $.scissors), optional(alias($._rest, $.message)))
        )
      ),

    _body_line: ($) =>
      choice(seq($.message, NEWLINE), seq($.comment, NEWLINE), NEWLINE),

    subject: ($) =>
      seq(
        token(prec(PREC.SUBJECT_FIRST_CHAR, /[^#\r\n]/)),
        optional(repeat(/[^\r\n]+/))
      ),

    message: ($) =>
      seq(
        repeat(WHITE_SPACE),
        choice($.user, /[^\s]+/),
        optional(repeat(choice($.user, $.item, $._word)))
      ),

    comment: ($) => seq(token.immediate("#"), optional($._comment_body)),

    _comment_body: ($) =>
      choice(
        alias($._rebase_summary, $.summary),
        $.summary,
        $._branch_declaration,
        // fallback to regular comment words if the words are nonsense
        repeat1($._word)
      ),

    _rebase_summary: ($) =>
      seq(
        seq(
          "interactive",
          "rebase",
          "in",
          "progress",
          ";",
          "onto",
          $.commit,
          NEWLINE
        ),
        seq("#", alias($._rebase_header, $.header), NEWLINE),
        repeat(seq("#", $.rebase_command, NEWLINE)),
        seq("#", alias($._rebase_header, $.header), NEWLINE),
        repeat(seq("#", $.rebase_command, NEWLINE)),
        seq(
          "#",
          "You",
          "are",
          "currently",
          repeat(/\S+/),
          "rebasing",
          "branch",
          "'",
          $.branch,
          "'",
          "on",
          "'",
          $.commit,
          "'",
          "."
        ),
        NEWLINE,
        optional("#")
      ),

    _rebase_header: ($) =>
      choice(
        seq(
          "Last",
          /commands?/,
          "done",
          "(",
          /\d+/,
          /commands?/,
          "done",
          ")",
          ":"
        ),
        seq(
          "Next",
          /commands?/,
          "to",
          "do",
          "(",
          /\d+/,
          "remaining",
          /commands?/,
          ")",
          ":"
        ),
        seq("No", "commands", "remaining", ".")
      ),

    summary: ($) =>
      choice(
        seq(
          alias($._change_header, $.header),
          NEWLINE,
          repeat1(seq("#", $.change, NEWLINE)),
          optional("#")
        ),
        seq(
          $.header,
          NEWLINE,
          repeat1(seq("#", $.path, NEWLINE)),
          optional("#")
        )
      ),

    _change_header: ($) =>
      choice(
        seq("Changes", "to", "be", "committed", ":"),
        seq("Changes", "not", "staged", "for", "commit", ":")
      ),

    _branch_declaration: ($) =>
      choice(
        seq("On", "branch", alias($._word, $.branch)),
        seq(
          "Your",
          "branch",
          "is",
          "up",
          "to",
          "date",
          "with",
          "'",
          $.branch,
          "'."
        ),
        seq(
          "Your",
          "branch",
          "is",
          choice(seq("ahead", "of"), "behind"),
          "'",
          $.branch,
          "'",
          "by",
          /\d+/,
          /commits?/,
          "."
        ),
        seq("HEAD", "detached", "at", $.commit)
      ),

    header: ($) => seq(choice("Conflicts", seq("Untracked", "files")), ":"),

    change: ($) =>
      seq(
        field("kind", CHANGE),
        ":",
        $.path,
        optional(seq(token(prec(PREC.PATH_SEPARATOR_ARROW, "->")), $.path))
      ),

    commit: ($) => /[a-f0-9]{7,40}/,

    _word: ($) => token(prec(PREC.NONSENSE, /\S+/)),
    branch: ($) => /[^\.\s']+/,

    rebase_command: ($) =>
      seq(
        choice(
          "pick",
          "edit",
          "squash",
          "merge",
          "fixup",
          "drop",
          "reword",
          "exec",
          "label",
          "reset"
        ),
        repeat1(/\S+/)
      ),

    path: ($) => repeat1(token(prec(PREC.PATH, /\S+/))),

    user: ($) => token(prec(PREC.USER, /@[^\s@]+/)),
    item: ($) => token(prec(PREC.ITEM, /#\d+/)),

    _rest: ($) => repeat1(choice(/.*/, NEWLINE)),
  },
});
