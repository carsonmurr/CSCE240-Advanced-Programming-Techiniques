// Copyright 2022 CSCE 240
//
// calc_sqrt.cc
//  Implement the Babylonian Algorithm from Chapter 2 using a function. The
//  function should have id CalcSqrt and accept two floating point values. The
//  first is number for which we are calculating the root, the second is the
//  acceptable percent different. Give a default argument of 1.0, representing
//  less than 1% change in guess root. The function should return its
//  calculation as a floating point.
//
//  Test the function by passing the quotients 1.0/100.0, 1.0/2.0, and
//  99.0/100.0 to both CalcSqrt and cmath's sqrt, and determining if the sqrt
//  function from cmath matches for any of percent differences 1.0 0.1, 0.01,
//  0.001.
//
//  Revisit the Babylonian square root calculation:
//  1.) Guess at the correct square root (n/2 maybe?)
//  2.) Calculate root = n / guess
//  3.) Let guess = (guess + root)/2
//  4.) Repeat steps 2 and 3 until the square root is resolved.
//

#include <cmath>  // fabs (NOT ABS)
#include <iostream>

bool FPEquals(double lhs, double rhs) {
  const double kDelta = 0.000001;  // lhs is no more different than rhs

  return fabs(lhs-rhs) < kDelta;
}



double CalcSqrt(double base) {
  double guess = 0.5 * base;
  double root = base / guess;

  while (!FPEquals(root , guess)) {
    root = base / guess;
    guess = 0.5 * (guess + root);
    }

  return guess;
}

int main(int argc, char* argv[]) {
  double value;
  std::cout << "Enter a floating point value: ";
  std::cin >> value;
  std::cout << "Sqrt: " << CalcSqrt(value) <<std::endl;
  return 0;
}






