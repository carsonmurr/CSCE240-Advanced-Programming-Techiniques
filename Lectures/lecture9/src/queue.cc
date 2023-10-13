// Copyright 2022 CSCE240 
//

namespace csce240 {


template <class T>
bool Queue<T>::Empty() const {
  return store_.size() == 0;
}

template <class T>
void Queue<T>::Push(const T& value) {
  store_.push_back(value);
}

template <class T>
const T Queue<T>::Pop() {
  T top = store_.front();
  store_.pop_front();
  return top;
}

template <class T>
const T Queue<T>::Top() const {
  return store_.front();
}

template <class T>
std::ostream& Queue<T>::Extract(std::ostream* out) const {
  for (auto itr = store_.begin(); itr != store_.end(); ++itr)
    *out << *itr << ' ';

  return *out;
}

}  // namespace csce240
