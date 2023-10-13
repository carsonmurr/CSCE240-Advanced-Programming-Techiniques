// Copyright 2022 Carson Murray
namespace csce240 {
namespace hw6 {

template <class T>
Grade<T>::Grade() {
  score_ = 0;
}

template <class T>
Grade<T>::Grade(T score) {
  score_ = score;  
}

template <class T>
T Grade<T>::score() const {
  return score_;
}

template<class T>
std::string Grade<T>::ToLetter(unsigned int grade) const {
  double threshold = static_cast<double>(grade) / 10;
  if (threshold < 0 || threshold >= 100)
    return "test";
  else
    return "test2";
}

template<class T>
std::string Grade<T>::ToLetter() const {
  return "String";
}

template<class T>
Grade<T> Grade<T>::CalcAverage(const std::vector<T>& scores) {
  return Grade<T>();
}
// template<class T>
// T Grade<T>::operator=(T rhs) const {
//   return rhs;
// }

}  // namespace hw6
}  // 