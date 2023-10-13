// Copyright 2022 CSCE240
//
#include <cstddef>  // size_t
#include <iostream>
#include <array>


int main(int argc, char** argv) {
  // create double std::array from std::array literal of 4 floating point
  // literals
  double doubles[] = {1.0, 2.7, 3.9, 430.71};
  const size_t kSize = sizeof(doubles)/sizeof(double);
  // tab and display elements from positions -1 to 4, by 1 using []
  for (int i = -1; i < static_cast<int>(kSize); ++i) {
    doubles[i] = doubles[i];
    std::cout << doubles[i] << std::endl;
  }
  // create a double std::array class instance with size 4, reuse literals

  // tab and display elements from positions -1 to 4, by 1 using []

  // tab and display elements from positions -1 to 4, by 1 using std::array::at

  return 0;
}
