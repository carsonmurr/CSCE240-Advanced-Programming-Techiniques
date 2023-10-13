// Copyright 2022 CSCE240
//
#include <lecture7_1/inc/stack.h>

namespace csce240 {
const std::string Stack::Top() const {
  return std::vector<std::string>::back();
}

const std::string Stack::Pop() {
  std::string tmp = back();
  pop_back();
  return tmp;
}

void Stack::Push(const std::string& str) {
  push_back(str);
}

bool Stack::Empty() const {
  return 0 == size();
}

const std::string UndoStack::Pop() {
  garbage_can_.push_back(back());
  pop_back();
  return garbage_can_.back();
}

bool UndoStack::Undo() {
  if (garbage_can_.empty())
    return false;
  push_back(garbage_can_.back());
  garbage_can_.pop_back();
  return !garbage_can_.empty();  //retruns true as long as there is something in the garbage can
}
/*  PREWRITTEN CODE
bool Stack::Empty() const  {
  return size() == 0;
}

void Stack::Push(const std::string& value) {
  push_back(value);
}

const std::string Stack::Pop() {
  std::string top = back();
  pop_back();
  return top;
}

const std::string Stack::Top() const {
  return back();
}

const std::string UndoStack::Pop() {
  if (!undo_stack_)
    undo_stack_ = new std::vector<std::string>();

  undo_stack_->push_back(back());
  pop_back();
  return undo_stack_->back();
}

bool UndoStack::Undo() {
  if (undo_stack_->size() == 0)
    return false;

  push_back(undo_stack_->back());
  undo_stack_->pop_back();
  return true;
}
*/
}  // namespace csce240
