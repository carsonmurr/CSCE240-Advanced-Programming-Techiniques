// Copyright 2022 CSCE 240
//

#include <lecture9/inc/tree.h>

namespace csce240 {

namespace b_tree {

bool QTraverse(const std::string* tree,
               size_t size,
               csce240::Series* Q,
               Operation* operation) {
  Q->Push(kRoot);
  while (!Q->Empty()) {
    size_t root = Q->Pop();

    if ((*operation)(root))
      return true;

    if (left_child(root) < size)
      Q->Push(left_child(root));

    if (right_child(root) < size)
      Q->Push(right_child(root));
  }
  return false;
}

}  // namespace b_tree

}  // namespace csce240
 