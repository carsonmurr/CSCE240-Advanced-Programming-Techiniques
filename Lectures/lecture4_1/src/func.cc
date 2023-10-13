// Copyright 2022 CSCE 240
//
#include <lecture4_1/inc/func.h>


int main(int argc, char* argv[]) {
  // test array functions
  int array[] = {9, 1, -3, -2, 33};
  ::size_t size = sizeof(array)/sizeof(int);

  // test linear search
  std::cout << "Min value is " << array[MinValue(array, size)] << std::endl;
  std::cout << "Max value is " << array[MaxValue(array, size)] << std::endl;

  // test array copy
  int copy[10];
  Copy(array, size, copy);

  // use for-loops with an index and for-each to print the original and copy

  return 0;
}
