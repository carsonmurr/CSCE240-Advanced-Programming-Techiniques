// Copyright 2022 CSCE240
//

// #include <lecture9/inc/stack.h>

namespace csce240 {

template <class T>
bool Stack::Empty() const  {
  return size() == 0;
}

template <class T>
void Stack::Push(const T& value) {
  push_back(value);
}

template <class T>
const T Stack::Pop() {
  T top = back();
  pop_back();
  return top;
}
template <class T>
const T Stack::Top() const {
  return back();
}

template <class T>
std::ostream& Stack::Extract(std::ostream* out) const {
  for (auto r_itr = rbegin(); r_itr != rend(); ++r_itr)
    *out << *r_itr << ' ';
  return *out;
}

}  // namespace csce240
