const WHITE_SPACE = /[\t\f\v ]+/;
const NEWLINE = /\r?\n/;
const ANYTHING = /[^\n\r]+/;
const CHANGE = choice("new file", "modified", "renamed", "deleted");
const PREC = {
  NONSENSE: -1,
  PATH: 1,
  PATH_SEPARATOR_ARROW: 2,
};

module.exports = grammar({
  name: "gitcommit",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat($._line),

    _line: ($) => choice(seq($.comment, NEWLINE), NEWLINE),

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
        $.change,
        // fallback to regular comment words if the words are nonsense
        repeat1($._word)
      ),

    change: ($) =>
      seq(
        CHANGE,
        ":",
        $.path,
        optional(seq(token(prec(PREC.PATH_SEPARATOR_ARROW, "->")), $.path))
      ),

    commit: ($) => /[a-f0-9]{8}/,

    _word: ($) => token(prec(PREC.NONSENSE, /\S+/)),

    path: ($) => repeat1(token(prec(PREC.PATH, /\S+/))),
  },
});
