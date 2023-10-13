// Copyright 2022
//
// calc_avg.cc
// Given a file (using IO redirect) which begins with a single integer n, and
// contains n whitespace-delimited doubles, calculate the mean of the
// doubles.
//
// Use io redirect.
//


#include <cstddef>  // using size_t
#include <iostream>


int main(int argc, char* argv[]) {
  size_t count;

  std::cin >> count;
  // reads in first number which tells how
  //  many values there are in file

  std::cout << count << std::endl;

  double accum;
  for (size_t i = 0; i < count; ++i) {
    double input;
    std::cin >> input;
    accum += input;
    std::cout << input << std::endl;
  }

  double avg = accum / count;
  std::cout << avg << std::endl;

  return 0;
}
