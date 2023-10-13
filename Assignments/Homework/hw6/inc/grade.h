// Copyright 2022 Carson Murray
// Public interface for Grade class
//
#include <ostream>
#include <cmath>
#include <string>
#include <iostream>
#include <cstddef>
#include <vector>

namespace csce240 {
namespace hw6 {

template <class T>
class Grade {
 public:
  Grade<T>();
  explicit Grade<T>(T score);
  
  T score() const;

  std::string ToLetter() const;
  std::string ToLetter(unsigned int grade) const;

  static Grade<T> CalcAverage(const std::vector<T>& scores);
  
  bool Equals() const;
  // T operator=(T rhs) const;
 private:
  T score_;

};









}  // namespace hw6
}  // namespace csce240

// Grade: a templated class that wraps a numeric-type classes representing
//   values in the range [0.0, +INFINITY)
//
//  Example Usage:
//    Grade<int> g1(88);
//    Grade<double> g2(79.49);
//    Grade<Rational> g3(825, 11);  // 825 / 11 == 75.0
//
//    bool equals = g3.score() == 75.0;  // true
//    equals = g3.ToLetter(50) == "C+";  // true
//    equals = g1.ToLetter(75) == "B+";  // true
//    equals = g1.ToLetter() == "B";  // true
//
//    vector<int> scores{87, 92, 79};
//    g1 = Grade<int>::CalcAverage(scores);  // call to static method

  // constructor (T score)
  //
  //  * Initializes chosen representation of score


  // score: accessor method for represenation of score
  //
  //  * Returns score as type T
  //
  //  * Does not modify calling instance; const method


  // ToLetter(unsigned int): determines ranking of representation of score in a
  //   five-letter system with pluses on A-D, but not F.
  //
  //  * Accepts unsigned integer to determine threshold for pluses. For
  //    instance,
  //      threshold = 75 means if 87.5 <= score < 90.0 method returns a B+
  //      threshold = 75 means if 80.0 <= score < 87.5 method returns a B
  //
  //  * Parameter has DEFAULT VALUE of 0
  //
  //  * Precondition: 0 <= threshold < 100
  //
  //  * Floating point equality of lhs == rhs is determined by
  //      ||lhs - rhs|| < epsilon * ||lhs||
  //    where epsilon is 1x10^-6. FYI, cmath has abs and fabs functions. The
  //    fabs is used to compare floating point absolute values.
  //
  //    Note that you will need some means to convert the T score_ variable
  //    into a floating point value no matter T's type. The method I chose was
  //    to divide score_ by 1.0. If the correct operator is overloaded for your
  //    Rational and returns a double, then this works for all of int, double,
  //    and Rational.
  //
  //  * Does not modify calling instance; const method.


  // CalcAverage(vector<T>): determines the average of all provided scores and
  //   returns as a Grade object.
  //
  // * Accepts a vector storing type T scores. Accepts read-only and by
  //   reference.
  //
  // * Static method. Called from class, e.g.:
  //     Grade<int> avg = Grade<int>::CalcAverage(vector<int>{1, 2, 3})



// Leave this at the bottom of your file to manage template. It must be
// inside your define guards, but outside of your namespace(s)
#include <hw6/src/grade.cc>  // NOLINT

