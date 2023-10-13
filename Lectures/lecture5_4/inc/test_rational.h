// Copyright 2022 CSCE 240
//
#ifndef LECTURE5_4_INC_TEST_RATIONAL_H_
#define LECTURE5_4_INC_TEST_RATIONAL_H_

#include <lecture5_4/inc/rational.h>

#include <cassert>  // ::assert
#include <cstddef>  // ::size_t
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

#endif  // LECTURE5_4_INC_TEST_RATIONAL_H_
