// Copyright 2022 CSCE240
//

#ifndef LECTURE9_INC_QUEUE_H_
#define LECTURE9_INC_QUEUE_H_

#include <lecture9/inc/series.h>
#include <list>
#include <ostream>


namespace csce240 {

template <class T>
class Queue : public Series {  // isa
 public:
  bool Empty() const;

  void Push(const T& value);

  const T Pop();

  const T Top() const;

  std::ostream& Extract(std::ostream*) const;

 protected:
  std::list<T> store_;
};

}  // namespace csce240

#include <lecture9/src/queue.cc>  // NOLINT  
// THIS INCLUDE IS IMPORTANT FOR LAST PROGRAMMING ASSIGNMENT

#endif  // LECTURE9_INC_QUEUE_H_
