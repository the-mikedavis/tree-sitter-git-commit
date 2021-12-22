const WHITE_SPACE = /[ \t\f\v]+/;
const NEWLINE = /\r?\n/;
const ANYTHING = /[^\n]+/;

module.exports = grammar({
  name: "gitcommit",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat($._line),

    _line: ($) => choice(NEWLINE, $.comment),

    comment: ($) => choice(seq("#", optional(ANYTHING))),
  },
});
