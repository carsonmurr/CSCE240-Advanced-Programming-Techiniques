// Copyright 2022 Carson Murray
//
//
#include<cmath>
#include<iostream>

int main(int argc, char*argv[]) {
  int input;

  std::cin >> input;

  int counter = 0;
  int temp = input;
  // finds how many characters input is
  while (temp !=0) {
    temp = temp / 10;
    counter++;
  }

  int quotient = 0;
  int output = 0;
  // int next = 0;
  if (input > 0) {  // Prints out Positive inputs
    for (int i = counter; i > 0; --i) {
      quotient = input / (pow(10.0, i-1));
      output = quotient * (pow(10.0, i-1));
      input = input - (quotient * pow(10.0, i-1));
      if (i > 1) {
        std::cout << output << " + ";
      } else {
        std::cout << output;
    }
    }
  }  else {  // Prints out Negative inputs
    std::cout << "-(";
    input = input * -1;
    for (int i = counter; i > 0; --i) {
      quotient = input / (pow(10.0, i-1));
      output = quotient * (pow(10.0, i-1));
      input = input - (quotient * pow(10.0, i-1));
      if (i > 1) {
        std::cout << output << " + ";
      } else {
        std::cout << output << ")";
      }
    }
    }

  return 0;
}
