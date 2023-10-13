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


int main (int argc, char*argv[]) {
  // prompt user for input and parse input as floating point data type
 std::cout << "Input number for square root: ";
 
 double input; // not intitialized because used to store in next statement
 std::cin >> input;
 double guess = 0.5*input;

 int value = 0;
 value = value >> 1; 
  // create a floating point type variable named guess and assign it half input
 double root = input / guess;

  // create a floating point type named root and assign root input / guess
 guess = (guess+2.0)/2;
 root = input / guess;
 std::cout << "root: " << root << std::endl;

 
  // assign guess (guess + root)/2
  // assign root input / guess

  // assign guess (guess + root)/2
  // assign root input / guess

  // assign guess (guess + root)/2
  // assign root input / guess

  // assign guess (guess + root)/2
  // assign root input / guess

  // assign guess (guess + root)/2
  // assign root input / guess
return 0;
}
