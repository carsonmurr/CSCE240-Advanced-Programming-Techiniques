// Copyright 2022 CSCE240

#ifndef LECTURE9_INC_SERIES_H_
#define LECTURE9_INC_SERIES_H_

#include <ostream>
#include <string>


namespace csce240 {

template <class T>
class Series {
 public:
  virtual ~Series() { /* intentionally empty */ }

  virtual bool Empty() const = 0;

  virtual void Push(const T& value) = 0;

  virtual const T Pop() = 0;

  virtual const T Top() const = 0;

  virtual std::ostream& Extract(std::ostream*) const = 0;
};
template <class T>
std::ostream& operator<<(std::ostream& lhs, const Series& rhs);

}  // namespace csce240

#endif  // LECTURE9_INC_SERIES_H_
