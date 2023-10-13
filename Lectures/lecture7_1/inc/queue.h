// Copyright 2022 CSCE240
//
#ifndef LECTURE7_1_INC_QUEUE_H_
#define LECTURE7_1_INC_QUEUE_H_

#include <list>
#include <string>

namespace csce240 {
class Queue  : public std::list<std::string> {
  public:  
    const std::string Head() const;  //retruns copy of what is on top of stack

    const std::string Pop();  //returns copy of what is on top and removes

    void Push(const std::string&);  //adds string param to top of stack

    bool Empty() const;  //false if atleast one element

};
/*class Queue : public std::list<std::string> {  // is-a vs has-a
 public:
  Queue();

  bool Empty() const;

  void Push(const std::string& value);

  const std::string Pop();

  const std::string Top() const;
 
};*/

}  // namespace csce240

#endif  // LECTURE7_1_INC_QUEUE_H_
