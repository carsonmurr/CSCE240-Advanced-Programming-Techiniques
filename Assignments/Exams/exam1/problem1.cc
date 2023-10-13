// Copyright 2022 Carson Murray
// Problem1: infix notation floating point comparator
//
// Task: WITHOUT PROMPTING read two numbers and an operator from STDIN, using
//     std::cin three times or in its form
//       std::cin >> value1 >> value2 >> value 3;
//
//     The input will always be given as
//       number operator number
//     e.g., 2.3 == 2.3, 4.5 != 4.5, etc
//
//     Using the operands and operators and conditional statement(s) perform
//     the operation. Emit the string "true" or "false" as necessary.
//
//     DO NOT emit anything other than the result. This is a calculator. Simply
//     emit the result of the operation. Do not prompt for input. Just write the
//     result of the operation to STDOUT using std::cout.
//
//   You must provide operators:
//     <
//     <=
//     ==
//     >=
//     >
//     !=
//
// Notes:
//   The two operands should be read as floating point data and the operator
//   can be read as an std::string. You need not set precision for the floating
//   point (in)equality operators. The default precision for a double is all
//   that is required.
//
// Points:
//  compilation: 1
//  style: 1
//  correctness: 2
//
#include <iostream>

int main(int argc, char* argv[]) {
  double val1;
  double val2;
  std::string operand;
  std::cin >> val1 >> operand >> val2;
  bool tOrF = false;
  if (operand == "==") {
    if (val1 == val2)
      tOrF = true;
  } else if (operand == "<=") {
      if (val1 <= val2)
        tOrF = true;
  } else if (operand == "<") {
      if (val1 < val2)
        tOrF = true;
  } else if (operand == ">=") {
      if (val1 >= val2)
        tOrF = true;
  } else if (operand == ">") {
      if (val1 > val2)
        tOrF = true;
  } else {
    if (val1 != val2)
      tOrF = true;
  }
  if (tOrF == true)
    std::cout << "true";
  else
    std::cout << "false";
  return 0;
}
