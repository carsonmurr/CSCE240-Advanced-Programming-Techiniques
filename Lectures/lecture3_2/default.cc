// Copyright 2022 CSCE240
//
#include <lecture3_2/default.h>

// Tests the Pow function
// 
int main(int argc, char* argv[]) {
  const double kBases[] = { -2.0, -1.0, 0.0, 2.0, 3.0 };
  const int kPowers[] { 4, 3, 2, 0, 4 };
  const double kExpected[] = { 16.0, -1.0, 0.0, 1.0, 81.0 };
  const int kSize = sizeof(kBases) / sizeof(double);

  for (int i = 0; i < kSize; ++i) {
    double actual = Pow(kBases[i], kPowers[i]);
    if (kExpected[i] != actual) {
      std::cout << "FAILED: Expected: " << kExpected[i]
        << ", Actual: "<< actual << std::endl;
      return 1;
    }
  }


  std::cout << "PASSED" << std::endl;

  int test = Pow(5);
  if (test == 25)
    std::cout << "Default paramater test PASSED" << std::endl;
  else
    std::cout << "Default paramater test FAILED" << std::endl;

  return 0;
}
