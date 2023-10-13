// Copyright 2022 Carson Murray
#include <hw5/inc/rational.h>
namespace csce240 {

namespace hw5 {
  Rational::Rational() {
    num_ = 0;
    denom_ = 1;
  }

  Rational::Rational(int number) {
    num_ = number;
    denom_ = 1;
  }

  Rational::Rational(int num, int denom) {
    if (denom == 0) {
      Rational();
    } else {
        if (num >= 0 && denom >=0) {
          num_ = num;
          denom_ = denom;
        } else if (num < 0 && denom < 0) {
          num_ = num * -1;
          denom_ = denom * -1;
        } else if (num < 0 && denom >= 0) {
          num_ = num * -1;
          denom_ = denom;
        } else {
          num_ = num * -1;
          denom_ = denom * -1;
        }
    }
  }

  double Rational::ToDouble() const {  // virtual
    double ret = static_cast<double>(num_)/static_cast<double>(denom_);
    return ret;
  }

  std::string Rational::ToString() const {  // virtual
    if (num_ == 0) {
      return "0";
    } else {
      std::string ret = std::to_string(num_) + "/" + std::to_string(denom_);
      return ret;
    }
  }

  bool Rational::Equals(const Rational& rhs) const {
    if (static_cast<double>(rhs.num())/static_cast<double>(rhs.den()) ==
                  static_cast<double>(num_)/static_cast<double>(denom_))
      return true;
    else
      return false;
  }

  bool Rational::Equals(int rhs) const {
    if (static_cast<double>(num_)/static_cast<double>(denom_) == rhs)
      return true;
    else
      return false;
  }

  bool Rational::operator==(int rhs) const {
    return Equals(rhs);
  }

  bool Rational::operator==(const Rational& rhs) const {
    return Equals(rhs);
  }

  Rational Rational::DividedBy(const Rational& rhs) const {
    int num = num_ * rhs.den();
    int den = denom_ * rhs.num();
    return Rational(num, den);
  }

  Rational Rational::DividedBy(int rhs) const {
    int num = num_;
    int den = denom_ * rhs;
    return Rational(num, den);
  }

  const Rational Rational::operator/(const Rational& rhs) const {
    return Rational(num_, denom_).DividedBy(rhs);
  }

  const Rational Rational::operator/(int rhs) const {
    return Rational(num_, denom_).DividedBy(rhs);
  }

  const Rational operator/(int lhs, const Rational& rhs) {
    return Rational(lhs, 1).DividedBy(rhs);
  }


  const Rational Rational::Plus(const Rational& rhs) const {
    int num = (num_ * rhs.den()) + (rhs.num() * denom_);
    int den = denom_ * rhs.den();
    return Rational(num, den);
  }

  const Rational Rational::Plus(int rhs) const {
    int num = num_ + (rhs * denom_);
    int denom = denom_;
    return Rational(num, denom);
  }
  const Rational Rational::operator+(const Rational& rhs) const {
    return Plus(rhs);
  }

  // const Rational Rational::operator+(int rhs) const {
  //   return Plus(rhs);
  // }

  const Rational operator+(int lhs, const Rational& rhs) {
    return rhs.Plus(lhs);
  }

  const Rational operator+(const Rational& lhs, int rhs) {
    return lhs.Plus(rhs);
  }


}  // namespace hw5

}  // namespace csce240
