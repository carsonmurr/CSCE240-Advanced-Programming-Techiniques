// Copyright 2022 Carson Murray
#include <hw4/inc/grade.h>

Grade::Grade() {
  scored_ = 0;
  total_ = 0;
}

Grade::Grade(size_t scored, size_t total) {
  if (scored >= 0 && total > 0) {
    scored_ = scored;
    total_ = total;
  } else {
    Grade();  // sets values to 0 if they are invalid
  }
}
double Grade::ToDouble() const {
  double s = static_cast<double>(scored_);
  double p = static_cast<double>(total_);
  double value = (s/p);
  int temp = static_cast<int>((value * (pow(10.0, 5))) + .5);
  double percent = static_cast<double>(temp / (pow(10.0, 5)));
  return percent * 100;
}

double Grade::ToDouble(int precision) const {
  double s = static_cast<double>(scored_);
  double p = static_cast<double>(total_);
  double value = (s/p);
  int temp = static_cast<int>((value * (pow(10.0, precision + 2))) + .5);
  double percent = static_cast<double>(temp / (pow(10.0, precision + 2)));
  return percent * 100;
}

std::string Grade::ToString() const {
  if (scored_ == 0) {
    std::string ret = "0";
    return ret;
  } else {
    std::string num = std::to_string(scored_);
    std::string denom = std::to_string(total_);
    std::string ret = num + "/"+ denom;
    return ret;
  }
}

std::string Grade::ToLetter() const {
  double s = static_cast<double>(scored_);
  double p = static_cast<double>(total_);
  double fraction = (s/p);
  if (fraction >= .9)
    return "A";
  else if (fraction >= .8)
    return "B";
  else if (fraction >= .7)
    return "C";
  else if (fraction >= .6)
    return "D";
  else
    return "F";
}
std::string Grade::ToLetter(size_t threshold) const {
  double s = static_cast<double>(scored_);
  double p = static_cast<double>(total_);
  double fraction = (s/p);
  if (fraction > (.9 + (threshold/100)) || fraction >= 1)
    return "A+";
  else if (fraction >= .9)
    return "A";
  else if (fraction > .8 + (threshold/100))
    return "B+";
  else if (fraction >=.8)
    return "B";
  else if (fraction > .7 + (threshold/100))
    return "C+";
  else if (fraction >= .7)
    return "C";
  else if (fraction > .6 + (threshold/100))
    return "D+";
  else if (fraction >= .6)
    return "D";
  else
    return "F";
}

bool Grade::Equals(const Grade& rhs) const {
  double fraction1 = (static_cast<double>(scored_) /
  static_cast<double>(total_));
  double fraction2 = (static_cast<double>(rhs.scored()) /
  static_cast<double>(rhs.total()));
  if (fraction1 == fraction2)
    return true;
  else
    return false;
}

Grade Grade::DividedBy(const Grade& rhs) const {
  int newScore = scored_ * rhs.total();
  int newTotal = total_ * rhs.scored();
  return Grade(newScore, newTotal);
}

Grade Grade::Plus(const Grade& rhs) const {
  int newScore = (scored_ * rhs.total()) + (rhs.scored() * total_);
  int newTotal = total_ * rhs.total();
  return Grade(newScore, newTotal);
}
