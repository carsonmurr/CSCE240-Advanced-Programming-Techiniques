// Copyright 2022 CSCE 240
//
#include <cstddef>  // size_t
#include <iostream>


int main(int argc, char* argv[]) {
  // create a const int to hold the size of the array
  const size_t kSize = 10;

  // use the const int to create an array
  int integers[kSize];

  // store integers 1 to n in the array, where n is the size of the array
  for (size_t i = 0; i < kSize; ++i)
    integers[i] = i + 1;
  // determine the sum of the n integers stored in the array
  int sum = 0;
  for (size_t i = 0; i < kSize; ++i)
    sum +=  integers[i];
  // display the sum
  std::cout << "Sum: " << sum << std::endl;
  // create a second array and copy each value, doubled, from the first
  int integers2[kSize << 1];
  for (size_t i = 0; i < kSize; ++i)
    integers2[i] = integers[i];
  // display both arrays in columns, 1 element of each per line, tab delimited
  for (size_t i = 0; i < kSize; ++i)
    std::cout << integers[i] << '\t' << integers2[i] << std::endl;
  return 0;
}
