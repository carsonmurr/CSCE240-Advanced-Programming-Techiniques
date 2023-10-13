// Copyright 2022 CSCE 240
//

#ifndef LECTURE9_INC_TREE_H_
#define LECTURE9_INC_TREE_H_

#include <lecture9/inc/queue.h>
#include <lecture9/inc/stack.h>
#include <cstddef>  // using size_t
#include <string>

namespace csce240 {

/* A balanced, unordered, C-style binary tree stored in an array.
 */
namespace b_tree {

const size_t kRoot = 0;  // global root of the tree

inline size_t left_child(size_t root) {  // left child of root parameter
  return 2*root + 1;
}

inline size_t right_child(size_t root) {  // right child of root parameter
  return 2*root + 2;
}

class Operation {
 public:
  virtual bool operator()(size_t root) = 0;
};

/* traverse tree, breadth-vs-depth decided by Q
 */
bool QTraverse(const std::string* tree,
               size_t size,
               csce240::Series* Q,
               Operation* operation);

}  // namespace b_tree

}  // namespace csce240

#endif  // LECTURE9_INC_TREE_H_
