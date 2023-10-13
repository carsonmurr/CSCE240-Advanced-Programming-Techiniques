// Copyright 2022 Carson Murray
//
#include <exam1/problem2.h>

std::string SumDigits(const std::string& value) {  // std::string
  if (ValidInput(value) == false)
    return "\"\"";  // returns the empty string
  int inputNum = std::stoi(value);
  int temp = inputNum;
  int counter = 0;
  while (temp !=0) {  // finds the size of inputNum
    temp = temp / 10;
    counter++;
  }
  int nextNum = 0;
  // int output = 0;
  int sum = 0;
  if (inputNum > 0) {
    nextNum = inputNum;
    for (int i = 0; i < counter; ++i) {
      sum = sum + (nextNum % 10);
      nextNum = nextNum / 10;
    }
  return std::to_string(sum);
  } else {
    nextNum = inputNum * -1;
      for (int i = 0; i < counter; ++i) {
        sum = sum + (nextNum % 10);
        nextNum = nextNum / 10;
      }
    sum = sum * -1;
    return std::to_string(sum);
  }
}

bool ValidInput(const std::string& value) {
  bool isValid = true;
    try {
      std::stoi(value);
    } catch (const std::invalid_argument& exception) {
    isValid = false; }
    return isValid;
}
