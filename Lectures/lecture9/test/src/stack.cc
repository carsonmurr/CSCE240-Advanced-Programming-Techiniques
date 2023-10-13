// Copyright 2022 CSCE240
//

#include <lecture9/test/inc/stack.h>


const std::vector<size_t>& LoadVector(std::vector<size_t>* vector) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    vector->push_back(*itr);

  return *vector;
}

const csce240::Stack& LoadStack(csce240::Stack* s) {
  const size_t *end = kIndices + sizeof(kIndices) / sizeof(size_t);

  for (const size_t *itr = kIndices; itr != end; ++itr)
    s->Push(*itr);

  return *s;
}

const std::string& EmptyStack(csce240::Stack* from, std::string* into) {
  if (from->Empty())
    return *into;

  *into += std::to_string(from->Pop());
  while (!from->Empty())
    *into += ", " + std::to_string(from->Pop());
  return *into;
}

std::ostream& operator<<(std::ostream& lhs, const std::vector<size_t>& rhs) {
  for (auto it = rhs.begin(); it != rhs.end(); ++it)
    lhs << *it << ' ';
  return lhs;
}

int main(int argc, char* argv[]) {
  csce240::Stack stack;
  std::string stack_holder;

  stack = LoadStack(&stack);
  std::cout << "Test Stack: " << EmptyStack(&stack, &stack_holder)
    << std::endl;

  return 0;
}
