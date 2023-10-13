// Copyright 2022 CSCE 240
//
// calc_inflation.cc
//
//  Due to inflation, the cost of goods increase over the years in which they
//  must be purchased. Write an app which given the cost of a good, the expected
//  annual rate of inflation (as a percentage), and number of years, display the
//  increasing cost, year-by-year, line-by-line.
//
#include <cstddef>
#include <iostream>
bool IndicesAreGood(const std::string input[], size_t size);
bool FormatIsGood(const std::string input[], size_t size);

int main(int argc, char* argv[]) {
  const std::string test[] = {"hello", "3", "47.2", "54.1", "23.2"};
  const size_t kSize = 5;
  // int grades = std::stoi(test[1]);
  if (IndicesAreGood(test, kSize) == true && FormatIsGood(test, kSize) == true)
    std::cout << "good" << std::endl;
  else
    std::cout << "bad" << std::endl;
  return 0;
}
bool FormatIsGood(const std::string input[], size_t size) { 
  // int grades = std::stoi(input[1]);
    if (static_cast<int>(size) < 2) {
      std::cout << "array too small" << std::endl;
      return false;
      } else if (std::stoi(input[1]) < 0) {
      std::cout << "number of grades is negative" << std::endl;
      return false;
      } else if (std::stoi(input[1]) != static_cast<int>(size)-2) {
      std::cout << "wrong number of grades" << std::endl;
      return false;
      } else
      return true; 
}

bool IndicesAreGood(const std::string input[], size_t size) {
  double grade;
  bool nextStage = true;
  for (size_t i = 2; i < size; ++i) {
    try {
      grade = std::stod(input[i]);
    } catch (const std::invalid_argument& exception) {
    nextStage = false; // non-nuemeric grade
    }
    if (nextStage == false) {
      std::cout << "not a valid number" << std::endl;
      return false;
      } else {
      for (size_t i = 2; i < size; ++i) {
        grade = std::stod(input[i]);
        if (grade < 0.0 || grade > 100.0) {
          std::cout << "number is too big or too small" << std::endl;
          return false;
          }
        else
          return true;
      }
   }
  }
}
