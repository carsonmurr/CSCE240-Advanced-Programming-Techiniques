// Copyright 2022 CSCE240
//
// ninety_nine
//  Write the 99 stanzas of "Ninety-Nine Bottles of Soda on the Wall" song to
//  the console.
//
//  Write a void function with id PrintStanza which accepts an integer n, and
//  prints
//   n bottles of soda on the wall.
//   n bottles of soda.
//   Take one down, pass it around,
//   n - 1 bottles of bottles of soda on the wall.
//  Where n and n - 1 are in English. Implement it with the functions defined
//  below and print the 99 stanzas in a loop.
//
//  Write a function with id InEnglish which accepts an integer and returns the
//  value in a string as an English word [Zero to Ninety-nine]. Implement
//  function with functions described below. Test the function.
//
//  Write a function with id OnesInEnglish which accepts an integer in [0,
//  9] and returns a string containing the value as an English word. Test the
//  function.
//  "Zero"
//  "One"
//  "Two"
//  "Three"
//  "Four"
//  "Five"
//  "Six"
//  "Seven"
//  "Eight"
//  "Nine"
//
//  Write a function with id TensInEnglish which accepts an integer n in [10,
//  90] s.t. n % 10 = 0 and returns a string containing the value as an English
//  word. Test the function.
//  "Twenty"
//  "Thirty"
//  "Fourty"
//  "Fifty"
//  "Sixty"
//  "Seventy"
//  "Eighty"
//  "Ninety"
//
//  Write a function with id TeensInEnglish which accepts an integer in [10, 19]
//  and returns a string containing the value as an English word. Test the
//  function.
//  "Ten"
//  "Eleven"
//  "Twelve"
//  "Thirteen"
//  "Fourteen"
//  "Fifteen"
//  "Sixteen"
//  "Seventeen"
//  "Eighteen"
//  "Nineteen"

#include <iostream>


std::string OnesInEnglish(int ones_place) {
  if (ones_place == 0)
    return "Zero";
  if (ones_place == 1)
    return "One";
  if (ones_place == 2)
    return "Two";
  if (ones_place == 3)
    return "Three";
  if (ones_place == 4)
    return "Four";
  if (ones_place == 5)
    return "Five";
  if (ones_place == 6)
    return "Six";
  if (ones_place == 7)
    return "Seven";
  if (ones_place == 8)
    return "Eight";
  if (ones_place == 9)
    return "Nine";
}

std::string TeensInEnglish(int ones_place) {
  if (ones_place == 0)
    return "Ten";
  if (ones_place == 1)
    return "Eleven";
  if (ones_place == 2)
    return "Twelve";
  if (ones_place == 3)
    return "Thirteen";
  if (ones_place == 4)
    return "Fourteen";
  if (ones_place == 5)
    return "Fifteen";
  if (ones_place == 6)
    return "Sixteen";
  if (ones_place == 7)
    return "Seventeen";
  if (ones_place == 8)
    return "Eighteen";
  if (ones_place == 9)
    return "Nineteen";
}

std::string TensInEnglish(int tens_place) {
  if (tens_place == 2)
    return "Twenty";
  if (tens_place == 3)
    return "Thirty";
  if (tens_place == 4)
    return "Fourty";
  if (tens_place == 5)
    return "Fifty";
  if (tens_place == 6)
    return "Sixty";
  if (tens_place == 7)
    return "Seventy";
  if (tens_place == 8)
    return "Eighty";
  if (tens_place == 9)
    return "Ninety";
}

void PrintStanza (int bottles) {
  for (int i = bottles; i > 0; i--) {
    if (i > 19) {
      if (i % 10 != 0) {
        int num = i / 10;
        int rem = i % 10;
        std::string tens = TensInEnglish(num);
        std::string ones = OnesInEnglish(rem);
        std::cout << tens << " " << ones << " bottles of milk on the wall, "
          << tens << " " << ones << " bottles of milk, take one down pass it around " << std::endl;
      } else {
        int num = i / 10;
        std::string tens = TensInEnglish(num);
        std::cout << tens << " bottles of milk on the wall, "
          << tens << " bottles of milk, take one down pass it around " << std::endl;
      }
    } else if (i > 9 && i < 21) {
        int rem = i % 10;
        std::string teens = TeensInEnglish(rem);
        std::cout << teens << " bottles of milk on the wall, "
          << teens << " bottles of milk, take one down pass it around " << std::endl;

    } else { 
        std::string ones = OnesInEnglish(i);
        std::cout << ones << " bottles of milk on the wall, "
          << ones << " bottles of milk, take one down pass it around " << std::endl;
    }
  }
}

int main(int argc, char* argv[]) {
  int bottles;
  std::cout << "Enter an integer 1-99: " << std::endl;
  std::cin >> bottles;
  PrintStanza(bottles);
  return 0;
  }
