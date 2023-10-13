// Copyright 2022 CSCE 240
//
// calc_prime.cc
//
//  Write a program that prints on a single line,
//  separated but not terminated by
//  commas, all prime numbers [3, 100).
//
//  Now, update the app to accept a lower bound and upper bound from user input
//  and, so long as 2 < lower_bound < upper_bound, display all prime numbers
//  from [lower_bound, upper_bound]
//
#include <cassert>  // assert
#include <cstddef>  // size_t
#include <cstdlib>  // atoi
#include <iostream>


int main(int argc, char* argv[]) {
  int no = 97;
  bool is_prime = true;
  for (int i = 2; i < no/2 - 1; ++i) {
    if (no % i == 0) {
      std::cout << no << " is not prime" << std::endl;
      is_prime = false;
      break;
    }
  }
  if (is_prime)
    std::cout << no << " is prime" << std::endl;
  else
    std::cout << no << " is not prime" << std::endl;




  return 0;
}
