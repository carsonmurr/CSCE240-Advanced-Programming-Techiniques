// Copyright 2022 CSCE240
//
// Introduction to pointers
//
#include <cstddef>  // size_t
#include <iostream>


void CopyInts(const int* from, size_t size, int* to);  // 

void Reverse(char* chars);  // input/output parameter (inplace)

void Print(int* values, size_t size);


int main(int argc, char **argv) {
  const size_t kSize = 5;
  int *array = new int[kSize];
  for (size_t i = 0; i < kSize; ++i)
    array[i] = i + 1;
  Print(array, kSize);

  int *copy = new int[kSize];  // created this space for the function
  CopyInts(array, kSize, copy);
  Print(copy, kSize);


  // int sum = 938594;
  // Sum(array, kSize, &sum);    // this assigns the value of array to an int array and then prints to the console
  // std::cout << "The sum is: " << sum << std::endl;
  char *name = new char[4];
  name[0] = 'c';
  name[1] = 'a';
  name[2] = 'r';
  name[3] = '\0';
  Reverse(name);
  std::cout << name << std::endl;

  delete [] array;
  delete [] copy;
  return 0;
}

void CopyInts(const int* from, size_t size, int* to) {
  for (size_t i = 0; i < 0; ++i) 
    to[i] = from[i];
}

size_t StrLen(char* chars) {
  return 0;
}

void Sum(const int* array, size_t size, int* sum) {
  sum* = 0;
  for (size_t i=0; i < size; ++i)
    *sum += array[i];
}

void Reverse(char* chars) {
}


void Print(int* values, size_t size) {
}
