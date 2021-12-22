/* glossary:
   - subject: the first line of a commit
     - short subjects are <= 50 characters long
     - long subjects are 51..72 characters long
     - oversized subjects are >= 73 characters long
   - message: the body of a commit
     - starts on the third line of the file (1-indexed)
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
  PATH: 1,
  PATH_SEPARATOR_ARROW: 2,
  ITEM: 3,
  SUBJECT_FIRST_CHAR: 4,
  SUBJECT: 5,
};

module.exports = grammar({
  name: "gitcommit",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      choice(
        prec(
          PREC.SUBJECT,
          seq(
            $.subject,
            NEWLINE,
            optional(seq(optional(NEWLINE), repeat($._body_line)))
          )
        ),
        seq(
          optional(choice($.comment, $.message)),
          NEWLINE,
          repeat($._body_line)
        ),
        choice($.comment, $.subject)
      ),

    _body_line: ($) =>
      choice(seq($.message, NEWLINE), seq($.comment, NEWLINE), NEWLINE),

    subject: ($) =>
      seq(
        token(prec(PREC.SUBJECT_FIRST_CHAR, /[^#\r\n]/)),
        optional(repeat(/[^\r\n]+/))
      ),

    message: ($) => seq(/[^#\s]+/, optional(repeat(choice($.item, $._word)))),

    comment: ($) => seq("#", optional($._comment_body)),

    _comment_body: ($) =>
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
          alias(/[^\.\s']+/, $.branch),
          "'."
        ),
        seq("HEAD", "detached", "at", $.commit),
        $.header,
        $.change,
        // fallback to regular comment words if the words are nonsense
        repeat1($._word)
      ),

    header: ($) =>
      choice(
        seq("Conflicts", ":"),
        seq("Changes", "to", "be", "committed", ":")
      ),

    change: ($) =>
      seq(
        field("kind", CHANGE),
        ":",
        $.path,
        optional(seq(token(prec(PREC.PATH_SEPARATOR_ARROW, "->")), $.path))
      ),

    commit: ($) => /[a-f0-9]{8}/,

    _word: ($) => token(prec(PREC.NONSENSE, /\S+/)),

    path: ($) => repeat1(token(prec(PREC.PATH, /\S+/))),

    item: ($) => token(prec(PREC.ITEM, /#\d+/)),
  },
});
