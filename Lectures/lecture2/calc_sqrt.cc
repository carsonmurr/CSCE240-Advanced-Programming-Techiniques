// Copyright 2022 CSCE 240
//
// The Babylonian square root calculation of a value n, algorithm works as
// follows:
// 1.) Guess at the correct square root (n/2 maybe?)
// 2.) Calculate root = n / guess
// 3.) Let guess = (guess + root)/2
// 4.) Repeat steps 2 and 3 until the square root is resolved.
//
// Implement the above algorithm and repeat steps 2 and 3 five times.
// Copy/pasta is your friend here.
//

#include  <iostream>
#include <cmath>


int main(int argc, char*argv[]) {
  // prompt user for input and parse input as floating point data type
  std::cout << "Input number for square root: ";

  double input;  // not intitialized because used to store in next statement
  std::cin >> input;
  double guess = 0.5*input;
  double root = input / guess;
  const double kE = 0000000000.1;

  while (fabs(root != guess) >kE) {
    guess = 0.5*(guess+root);
    root = input/guess;
    std::cout << "guess: " << guess << std::endl;
    std::cout << "root: " << root << std::endl;
  }

  return 0;
}
