/**
 * @file SMC assembly, as read by smc-assembler's lexer: one statement per line, operands
 * separated by spaces or commas
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'smc',

  // Line breaks end statements, so they aren't extras
  extras: $ => [/[ \t\r]/, $.comment],

  word: $ => $.identifier,

  rules: {
    source_file: $ => seq(
      repeat(seq(optional($._statement), $._newline)),
      optional($._statement),
    ),

    _newline: _ => /\n/,

    _statement: $ => choice(
      $.define,
      seq($.label_definition, optional($.instruction)),
      $.instruction,
    ),

    define: $ => seq('define', field('name', $.identifier), field('value', $._operand)),

    label_definition: $ => $.label,

    instruction: $ => seq(
      field('mnemonic', $.identifier),
      repeat(choice(field('operand', $._operand), ',')),
    ),

    _operand: $ => choice(
      $.number,
      $.char,
      $.memory,
      $.label,
      $.identifier,
      $.symbol,
    ),

    memory: $ => seq('[', $._operand, ']'),

    label: _ => /\.[A-Za-z0-9_]+/,

    identifier: _ => /[A-Za-z][A-Za-z0-9_]*/,

    number: _ => token(choice(
      /0[bB][01_]+/,
      /0[xX][0-9a-fA-F_]+/,
      /-?[0-9][0-9_]*(\.[0-9][0-9_]*)?/,
    )),

    // One character or an escape like '\n'; a lone '\' is a backslash
    char: _ => token(/['"](\\[ntr0\\'"]|[^\n])['"]/),

    // Conditions and flags, like BatPU-2's `>=` and Tau's `!0`
    symbol: _ => choice('=', '!=', '>=', '<', '!', '!0', '!-', '-'),

    comment: _ => token(choice(
      seq(choice('#', '//', ';'), /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),
  },
});
