// Copyright 2022 CSCE 240
//
#ifndef LECTURE5_4_INC_SUMMATION_H_
#define LECTURE5_4_INC_SUMMATION_H_

#include <lecture5_4/inc/rational.h>

#include <cassert>  // ::assert
#include <cstddef>  // ::size_t


class Summation {
 public:
  Summation();  // default constructor (because we have non-defaults)
  Summation(const Summation& that);  // copy constructor (1)
  Summation(const Rational* start, const Rational* end);  // range constructor

  ~Summation();  // destructor (2)

  const Summation& operator=(const Summation& rhs);  // assignment operator (3)

  Rational& operator[](size_t index) const;  // both accessor & mutator

  inline size_t size() const  { return count_; }  // accessor

  size_t Append(const Rational& element);  // mutator

  const Rational Sum() const;

 private:
  Rational *rationals_;  // dynamic array of Rationals
  size_t size_;  // size of rationals_
  size_t count_;  // number of rationals stored
};

#endif  // LECTURE5_4_INC_SUMMATION_H_
