// Copyright 2022 CSCE240 
//
#include <lecture7_1/inc/queue.h>

namespace csce240 {

const std::string Queue::Head() const {
  return back();
}

const std::string Queue::Pop() {
  std::string tmp = back();
  pop_back();
  return tmp;
}

void Queue::Push(const std::string& str) {
  push_front(str);
}

bool Queue::Empty() const {
  return empty();
}

/*Queue::Queue() : std::list<std::string>() { // empty // }

bool Queue::Empty() const {
  return size() == 0;
}

void Queue::Push(const std::string& value) {
  push_back(value);
}

const std::string Queue::Pop() {
  std::string top = front();
  pop_front();
  return top;
}

const std::string Queue::Top() const {
  return front();
}
*/
}  // namespace csce240
