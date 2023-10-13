// Copyright 2022 CSCE240
//
#ifndef LECTURE7_1_INC_STACK_H_
#define LECTURE7_1_INC_STACK_H_

#include <string>
#include <vector>

namespace csce240 {

class Stack : public std::vector<std::string> {  //is a vector
  public:
    const std::string Top() const;  //retruns copy of what is on top of stack

    virtual const std::string Pop();  //returns copy of what is on top and removes
// virtual allows child's version of method to be called 
    void Push(const std::string&);  //adds string param to top of stack

    bool Empty() const;  //false if atleast one element
};

class UndoStack : public Stack {  //inherits stack publicly
  public:
    const std::string Pop();

    bool Undo();
  private:
    std::vector<std::string> garbage_can_;

};

/* PREWRITTEN CODE
class Stack : public std::vector<std::string> {  // is-a std::vector
 public:
  virtual ~Stack() { // empty // } 
  bool Empty() const;
  
  void Push(const std::string& value);
  
  virtual const std::string Pop();
  
  const std::string Top() const;
};


class UndoStack : public Stack {
 public:
  UndoStack() { undo_stack_ = nullptr; }
  ~UndoStack() { delete undo_stack_; }
  const std::string Pop();  // override

  bool Undo();

 protected:
  std::vector<std::string> *undo_stack_;
};
*/
}  // namespace csce240

#endif  // LECTURE7_1_INC_STACK_H_
