/* Copyright 2022 */
#ifndef LECTURE6_4_INC_TEST_RATIONAL_H_
#define LECTURE6_4_INC_TEST_RATIONAL_H_


#include <lecture6_4/inc/rational.h>

#include <cassert>
// using assert
#include <cstddef>
// using size_t

#include <iostream>
#include <istream>
#include <sstream>
#include <string>


bool TestRationalAdd(const Rational& expected,
                     const Rational& lhs,
                     const Rational& rhs);
bool TestRationalAdd(const Rational& expected, int lhs, const Rational& rhs);


bool TestRationalInsert(const Rational& expected, std::istream* from);


bool TestRationalExtract(const Rational& input, const std::string& expected);

#endif  // LECTURE6_4_INC_TEST_RATIONAL_H_
