// Copyright 2022 Carson Murray
#include <hw5/inc/grade.h>

namespace csce240 {

namespace hw5 {

  Grade::Grade() {
    // num_= 0;
    // denom_ = 1;
    // scored_ = Rational().num();  // static_cast<size_t>(num());
    // total_ = Rational().den();  // static_cast<size_t>(den());
    scored_ = 0;
    total_ = 1;
  }

  Grade::Grade(size_t scored, size_t total) {
    if (scored >= 0 && total > 0) {
      scored_ = scored;
      total_ = total;
    } else {
      Grade();  // calls default constructor
    }
  }

  double Grade::ToDouble(size_t precision) const {
    double s = static_cast<double>(scored_);
    double p = static_cast<double>(total_);
    double value = (s/p);
    int temp = static_cast<int>((value * (pow(10.0, precision + 2))) + .5);
    double percent = static_cast<double>(temp / (pow(10.0, precision + 2)));
    return percent * 100;
  }

  double Grade::ToDouble() const {  // overrides parent ToDouble
    double s = static_cast<double>(scored_);
    double p = static_cast<double>(total_);
    double value = (s/p);
    int temp = static_cast<int>((value * (pow(10.0, 5))) + .5);
    double percent = static_cast<double>(temp / (pow(10.0, 5)));
    return percent * 100;
  }

  std::string Grade::ToString() const {
    if (scored_ == 0)
      return "0/" + std::to_string(total_);
    else
      return std::to_string(scored_) + "/" + std::to_string(total_);
  }

  bool Grade::Equals(const Grade& rhs) const {  // LOOK AT THIS
    if (static_cast<double>(rhs.scored())/static_cast<double>(rhs.total()) ==
                static_cast<double>(scored_)/static_cast<double>(total_))
      return true;
    else
      return false;
  }

  bool Grade::Equals(int rhs) const {
    if (static_cast<double>(scored_)/static_cast<double>(total_) == rhs)
      return true;
    else
      return false;
  }

  bool Grade::operator==(const Grade& rhs) const {
    return Equals(rhs);
  }

  bool Grade::operator==(int rhs) const {
    return Equals(rhs);
  }

  bool operator==(int lhs, const Grade& rhs) {
    return rhs.Equals(lhs);
  }

}  // namespace hw5
}  // namespace csce240
