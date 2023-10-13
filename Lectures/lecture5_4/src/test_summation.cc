// Copyright 2022 CSCE 240
//
#include <lecture5_4/inc/test_summation.h>


int main(int argc, char* argv[]) {
  std::cout << "TESTING Summation" << std::endl;
  // seed the random number generator
  const size_t kSeed_arg = 1;
  unsigned int seed = (argc == 1) ? 0 : atoi(argv[kSeed_arg]);
  srand(seed);

  size_t array_size = 5;
  const Rational *array = BuildRationals(array_size);

  Summation test_summ;  

  std::cout << " FUNCTION TestRangeConstructor" << std::endl;
  std::cout << "  "
    << (TestRangeConstructor(array, array + array_size) ? "PASSED" : "FAILED")
    << std::endl;

  test_summ = Summation(array, array + array_size);  // tested by this point
  std::cout << " FUNCTION TestCopyConstructor" << std::endl;
  std::cout << "  " << (TestCopyConstructor(test_summ) ? "PASSED" : "FAILED")
    << std::endl;

  
  std::cout << " FUNCTION TestAssignmentOperator" << std::endl;
  std::cout << "  "
    << (TestAssignmentOperator(test_summ) ? "PASSED" : "FAILED") << std::endl;

  std::cout << " FUNCTION TestAppend" << std::endl;
  std::cout << "  " 
    << (TestAppend(array, array + array_size) ? "PASSED" : "FAILED")
    << std::endl;

  delete [] array;
  
  return 0;
}


bool TestRangeConstructor(const Rational* start, const Rational* end) {
  Summation test_sum(start, end);

  size_t size = end - start;
  for (size_t i = 0; i < size; ++i) {
    if (!(test_sum[i] == *(start + i)))
      return false;
  }

  {
    Summation sum;
  }  // sum falls out of scope and destructor is called
  return true;
}


bool TestCopyConstructor(const Summation& from) {
  Summation to(from);

  std::string a("Hello, World"); // when did object a exist? 

  for (size_t i = 0; i < to.size(); ++i) {
    if (!(to[i] == from[i]))
      return false;

    to[i] = to[i] + 1;

    if (to[i] == from[i])
      return false;
  }
  return true;
}


bool TestAssignmentOperator(const Summation& rhs) {
  Summation lhs(rhs);
  lhs = rhs;

  for (size_t i = 0; i < lhs.size(); ++i) {
    if (!(lhs[i] == rhs[i]))
      return false;

    lhs[i] = lhs[i] + -1;

    if (lhs[i] == rhs[i])
      return false;
  }

  lhs = lhs;   // was edge case handled
  return true;
}


bool TestAppend(const Rational* start, const Rational* end) {
  Summation test_summ;

  const Rational *itr = start;
  while (itr != end) {
    test_summ.Append(*itr);
    ++itr;
  }
  return true;

  if (test_summ.size() != static_cast<size_t>(end - start))
    return false;

  for (size_t i = 0; i < test_summ.size(); ++i)
    if (!(test_summ[i] == *(start + i)))
      return false;

  return true;
}


const Rational* BuildRationals(size_t size) {
  Rational *rationals = new Rational[size];
  for (size_t i = 0; i < size; ++i) {
    // pick a number from [-10, 0) U (0, 10]
    int num = (rand() % 2 == 0 ? 1 : -1) * (rand() % 10 + 1);
    // pick a number from (0, 10]
    int den = rand() % 10 + 1;
    rationals[i] = Rational(num, den);
  }
  
  return rationals;
}
