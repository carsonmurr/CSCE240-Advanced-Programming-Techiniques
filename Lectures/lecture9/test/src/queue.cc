// Copyright 2022 CSCE 240
// 

#include <lecture9/test/inc/queue.h>


template <class T>
const std::string& EmptyQueue(csce240::Queue<T>* from, std::string* into) {
  while (!from->Empty())
    *into += std::to_string(from->Pop()) + ' ';
  return *into;
}


template <class T>
std::ostream& operator<<(std::ostream& lhs, const std::list<T>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}


template <class T>
const csce240::Queue<T>& LoadQueue(std::list<T>& l, csce240::Queue<T>* q) {
  for (auto itr = l.begin(); itr != l.end(); ++itr)
    q->Push(*itr);

  return *q;
}

int main(int argc, char* argv[]) {
  std::list<size_t> list{0, 4, 1, 2, 18, 19};
  csce240::Queue<size_t> q;
  std::string q_holder;

  q = LoadQueue<size_t>(list, &q);

  std::cout << "Test csce240::Queue:" << EmptyQueue<size_t>(&q, &q_holder)
    << std::endl;

  return 0;
}
