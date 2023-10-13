// Copyright 2022 CSCE240
//

#include <cassert>  // assert
#include <cctype>  // isdigit
#include <cstddef>  // size_t
#include <cstring>  // strlen
#include <iostream>
#include <string>


int main(int argc, char* argv[]) {
  const int kArg_position = 1;  //position of possible palindrone
  assert(argc > 1 && "You forgot the argument");
  std::string str = argv[kArg_position];

  std::cout << "Palindrone candidate is " << str << std::endl;
  bool is_pal = true;

  for (size_t i = 0, ii = str.size() - 1; (i < str.size() >> 1); ++i, --ii) {
    if (str[i] != str[ii]) {
    is_pal = false;
    break;
      }
    }
   if (is_pal == true) {
    std::cout << str << " is a Palindrone" << std::endl;
    } else {
    std::cout << str << " is not a Palindrone" << std::endl;
    }
  // Determine whether the character array is a palindrome
  //   Consider both examining characters

  // Extact any digits and determine both sum of digits as well as digits read
  //     as base-10 integer. Try without isdigit or stoi
   for (size_t i = 0, i < str.size(); ++i) {
    if (static_cast<int>('0') <= static_cast<int>(str[i]) && static_cast<int(str[i]) <= static_cast<int>('9') {
      std::cout << str[i] << " is numeric" << std::endl;
      sumt += static_cast<char>(static_cast<int>(str[i]) - static_cast<int>("/0")
    } else {
      std::cout << str[i] << " is not numeric" << std::endl;
    }
   }

  return 0;
}
