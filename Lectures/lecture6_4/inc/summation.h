/* Copyright 2022 CSCE240
 */
#ifndef LECTURE6_4_INC_SUMMATION_H_
#define LECTURE6_4_INC_SUMMATION_H_


#include <lecture6_4/inc/rational.h>

#include <cassert>
// using assert
#include <cstddef>
// using size_t

class Summation {
 public:
  Summation();
  Summation(const Summation& that);  // copy constructor
  Summation(const Rational* start, const Rational* end);  // fill constructor

  ~Summation();

  const Summation& operator=(const Summation& that);

  Rational& operator[](size_t index) const;

  inline size_t size() const { return count_; }

  const Rational Sum() const;

  size_t Append(const Rational& element);

 private:
  Rational *elements_;
  size_t count_;
  size_t size_;
};

#endif  // LECTURE6_4_INC_SUMMATION_H_
