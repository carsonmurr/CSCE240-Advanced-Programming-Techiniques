// Copyright 2022 CSCE240
//
#ifndef LECTURE9_INC_STACK_H_
#define LECTURE9_INC_STACK_H_

#include <lecture9/inc/series.h>
#include <vector>
#include <ostream>


namespace csce240 {

template <class T>
class Stack : public Series<T>, public std::vector<T> {
 public:
  bool Empty() const;

  void Push(const T& value);

  const T Pop();

  const T Top() const;

  std::ostream& Extract(std::ostream*) const;
};


// IMPLEMENTATION DETAILS


template <class T>
bool Stack<T>::Empty() const  {
  return store_.size() == 0;
}

template <class T>
void Stack<T>::Push(const T& value) {
  store_.push_back(value);
}

template <class T>
const T Stack<T>::Pop() {
  T top = store_.back();
  store_.pop_back();
  return top;
}

template <class T>
const T Stack<T>::Top() const {
  return store_.back();
}

template <class T>
std::ostream& Stack<T>::Extract(std::ostream* out) const {
  for (auto r_itr = store_.rbegin(); r_itr != store_.rend(); ++r_itr)
    *out << *r_itr << ' ';
  return *out;
}

}  // namespace csce240

// #include <lecture9/src/stack.cc>

#endif  // LECTURE9_INC_STACK_H_
