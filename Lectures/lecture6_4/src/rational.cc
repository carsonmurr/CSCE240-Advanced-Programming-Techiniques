// Copyright 2022 CSCE 240
//
#include <lecture6_4/inc/rational.h>


Rational::Rational() : num_(0), den_(1), positive_(true) { /* empty */ }


Rational::Rational(int num, int den) : num_(num), den_(den), positive_(true) {
  if (num_ < 0) {
    positive_ = false;
    num_ = -num_;
  }

  if (den_ < 0) {
    positive_ = !positive_;
    den_ = -den_;
  }
}


const Rational Rational::Add(const Rational& that) const {
  int this_num = positive_ ? num_ : -num_;
  int that_num = that.positive_ ? that.num_ : -that.num_;
  int num = this_num*that.den_ + that_num*den_;
  int den = den_ * that.den_;
  return Rational(num, den);
}

const Rational Rational::operator+(const Rational& rhs) const {
  return Add(rhs);
}

const Rational Rational::operator+(int rhs) const {
  return Add(Rational(rhs, 1));
}

const Rational operator+(int lhs, const Rational& rhs) {
  return Rational(lhs, 1).Add(rhs);
}


bool Rational::operator==(const Rational& rhs) const {
  return positive_ == rhs.positive_ && num_ == rhs.num_ && den_ == rhs.den_;
}


// GCD: uses Euclids subtraction method to calculate the greatest common
// Divisor of the two parameters without changing the calling instance.
// Returns the GCD.
//
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
  num = num_ / gcd;
  den = den_ / gcd;
  if (!positive_)
    *out << '-';
  *out << num << '/' << den;
  return *out;
}

std::ostream& operator<<(std::ostream& lhs, const Rational& rhs) {
  return rhs.Extract(&lhs);
}


std::istream& Rational::Insert(std::istream* in) {
  char div_sym;  // store the divide symbol
  *in >> num_ >> div_sym >> den_;
  positive_ = true;
  if (num_ < 0) {
    positive_ = false;
    num_ *= -1;
  }

  if (den_ < 0) {
    positive_ = !positive_ ? true : false;
    den_ *= -1;
  }

  return *in;
}

std::istream& operator>>(std::istream& lhs, Rational& rhs) {
  return rhs.Insert(&lhs);
}
