// Copyright 2022 CSCE240
//
#ifndef INC_SERIES_H_
#define INC_SERIES_H_


#include <ostream>
#include <string>

namespace csce240 {

class Series {
  public: 
  virtual bool Empty() const = 0;  //this function will not have a body
  
  virtual void Push(const size_t& value) = 0;
  
  virtual const size_t Pop() = 0;
  
  virtual const size_t Top() const = 0;
};


}  // namespace csce240

#endif  // INC_SERIES_H_
