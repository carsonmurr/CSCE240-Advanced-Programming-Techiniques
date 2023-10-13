// Copyright 2022 CSCE 240
//
#include <lecture5_4/inc/test_rational.h>


int main(int argc, char* argv[]) {
  std::cout << "TESTING Rational OPERATORS" << std::endl;
  Rational expected, lhs, rhs;

  std::cout << " FUNCTION TestRationalAdd" << std::endl;
  expected = Rational(19, 24), lhs = Rational(2, 3), rhs = Rational(1, 8);
  std::cout << "  Positive + Positive: "
    << (TestRationalAdd(expected, lhs, rhs) ? "PASSED" : "FAILED")
    << std::endl;
  expected = Rational(-13, 24), lhs = Rational(-2, 3), rhs = Rational(1, 8);
  std::cout << "  Negative + Positive: "
    << (TestRationalAdd(expected, lhs, rhs) ? "PASSED" : "FAILED")
    << std::endl;
  expected = Rational(-19, 24), lhs = Rational(-2, 3), rhs = Rational(-1, 8);
  std::cout << "  Negative + Negative: "
    << (TestRationalAdd(expected, lhs, rhs) ? "PASSED" : "FAILED")
    << std::endl;

  std::cout << " FUNCTION TestRationalExtract" << std::endl;
  Rational input(3, 4);
  std::string expected_str = "3/4";
  std::cout << "  Positive: "
    << (TestRationalExtract(input, expected_str) ? "PASSED" : "FAILED")
    << std::endl;
  input = Rational(-3, 4);
  expected_str = "-3/4";
  std::cout << "  Negative: "
    << (TestRationalExtract(input, expected_str) ? "PASSED" : "FAILED")
    << std::endl;
  input = Rational(3, 21);
  expected_str = "1/7";
  std::cout << "  Simplified: "
    << (TestRationalExtract(input, expected_str) ? "PASSED" : "FAILED")
    << std::endl;

  std::cout << " FUNCTION TestRationalInsert" << std::endl;
  expected = Rational(7, 8);
  std::stringstream sin = std::stringstream("7/8");  // mocking stdin
  expected = Rational(7, 8);
  std::cout << "  Positive: "
    << (TestRationalInsert(expected, &sin) ? "PASSED" : "FAILED")
    << std::endl;
  expected = Rational(-7, 8);
  sin = std::stringstream("-7/8");
  std::cout << "  Negative: "
    << (TestRationalInsert(expected, &sin) ? "PASSED" : "FAILED")
    << std::endl;

  return 0;
}


bool TestRationalAdd(const Rational& expected,
                     const Rational& lhs,
                     const Rational& rhs) {
  // Rational actual = lhs.Add(rhs);
  Rational actual = lhs + rhs;
  return expected.num() == actual.num() && expected.den() == actual.den()
    && expected.positive() == actual.positive();
}


bool TestRationalInsert(const Rational& expected, std::istream* from) {
  Rational actual;
  // actual.Insert(from);
  *from >> actual;
  return expected.num() == actual.num() && expected.den() == actual.den();
}


bool TestRationalExtract(const Rational& input, const std::string& expected) {
  std::stringstream sout;
  // input.Extract(&sout);
  sout << input;  // mocking stdout
  return expected == sout.str();
}
