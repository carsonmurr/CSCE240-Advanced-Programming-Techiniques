// Copyright 2022 CSCE240
//
// Introduction to pointers
//
#include <iostream>


int main(int argc, char* argv[]) {
  double a = 0.0;  // this double is stored in the call stack (automatic variable)
  double *x = nullptr;
  // demonstrate decl double pointers
  x = &a;  // x is an alias of a
  std::cin >> a;
  std::cout << "address of a: " << &a << std::endl;
  std::cout << "x stores: " << x << std::endl;    

  // introduce and demonstrate address-of operator to point to auto vars
  std::cout << "the value x points to is: " << *x << std::endl;  //deferencing x as an rVal
  std::cin >> *x;  // derefencing x at lval
  std::cout << "the value a stores is:  " << a << std::endl; 
  // introduce and demonstrate the derefence operator using std::std::cout

  // demonstrate creation of dynamic variable
  x = new double (0.0);  // this memory is taken from the heap not an aoutmatic variable
  std::cout << "x points to : " << *x << std::endl;    

  // examine the behavior of assignment operator between pointers

  // demonstrate returning memory to freestore/heap
  delete x;  // gives the memory back to the memory manager, preventing memory leaks 
  return 0;
}
