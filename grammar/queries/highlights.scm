(comment) @comment
(char) @string
(number) @number

"define" @keyword
(define name: (identifier) @constant)
(define value: (identifier) @constant)

(instruction mnemonic: (identifier) @keyword)

(label) @function

; Operands are registers (X, Y, Z, A, or numbered like r3) or define names
(instruction
  operand: (identifier) @variable
  (#match? @variable "^([XYZAxyza]|[rR][0-9]+)$"))
(instruction
  operand: (identifier) @constant
  (#not-match? @constant "^([XYZAxyza]|[rR][0-9]+)$"))
(memory
  (identifier) @variable
  (#match? @variable "^([XYZAxyza]|[rR][0-9]+)$"))
(memory
  (identifier) @constant
  (#not-match? @constant "^([XYZAxyza]|[rR][0-9]+)$"))

(symbol) @operator
["[" "]"] @punctuation.bracket
"," @punctuation.delimiter
