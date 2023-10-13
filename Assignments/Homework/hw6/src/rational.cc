// Copyright 2022 Carson Murray
#include <hw6/inc/rational.h>

namespace csce240 {
namespace hw6 {
Rational::Rational() {
  num_ = 0;
  den_ = 1;
}

Rational::Rational(int num) {
  num_ = num;
  den_ = 1;
}

Rational::Rational(int num, int den) {
  num_ = num;
  den_ = den;
}

int Rational::num() const {
  return num_;
}

unsigned int Rational::den() const {
  return den_;
}

bool Rational::operator==(const Rational& rhs) const {
  return Equals(rhs);
}

  bool Rational::Equals(const Rational& rhs) const {  // LOOK AT THIS
    if (static_cast<double>(rhs.num())/static_cast<double>(rhs.den()) ==
                static_cast<double>(num_)/static_cast<double>(den_))
      return true;
    else
      return false;
  }

inline int GCD(int a, int b) {
  while (a != b)
    if (a > b)
      a -= b;
    else
      b -= a;
  return a;
}

std::ostream& Rational::Extract(std::ostream* out) const {
  int num, den, gcd = GCD(num_, den_);
  if (num_ == 0) {
    *out << 0;
    return *out;
  } else if (den_ == 1) {
    *out << num_;
    return *out;
  }
  num = num_ / gcd;
  den = den_ / gcd;
  if (num_ <= 0)
    *out << '-';
  *out << num << '/' << den;
  // std::cout<<"TESTING"<<std::endl;
  return *out;
}

std::ostream& operator<<(std::ostream& lhs, const Rational& rhs) {
  return rhs.Extract(&lhs);
}

}  // namespace hw6
}  // namespace csce240

