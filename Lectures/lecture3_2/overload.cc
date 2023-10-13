// Copyright 2022 CSCE240
//
#include <lecture3_2/overload.h>


/*Tests correct functionality of Min functions
 */
int main(int argc, char* argv[]) {
  int a = 2, b = 3;
  if (a == Min(a, b))
    std::cout << "Min(int, int) PASSED" << std::endl;
  else
    std::cout << "Min(int, int) FAILED" << std::endl;
  
  return 0;
}

