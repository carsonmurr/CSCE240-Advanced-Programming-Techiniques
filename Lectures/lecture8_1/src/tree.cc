// Copyright 2022 Fall CSCE 240
//
#include <inc/tree.h>

using csce240::Queue;
using csce240::Series;
using csce240::Stack;

namespace b_tree {

int Qsearch(const std::string* tree,
        size_t size,
        const std::string& value,
        csce240::Series* Q,
        size_t* comparisons) {
  Queue Q;  // breadth first
  Q->(kRoot);
  while (!Q.Empty()) {
    if (comparisons)
      ++(*comparisons);
    size_t root = Q->Pop();

    // compare with needle
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)  // is the left child null?
      Q->Push(left_child(root));

    if (right_child(root) < size)  // is the right child null?
      Q->Push(right_child(root));
  }
  return -1;
}
int Qsearch(const std::string* tree,
        size_t size,
        const std::string& value,
        csce240::Series* Q,
        size_t* comparisons) {
  Stack Q;  // breadth first
  Q->(kRoot);
  while (!Q.Empty()) {
    if (comparisons)
      ++(*comparisons);
    size_t root = Q->Pop();

    // compare with needle
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)  // is the left child null?
      Q->Push(left_child(root));

    if (right_child(root) < size)  // is the right child null?
      Q->Push(right_child(root));
  }
  return -1;
}
int BFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons) {
  Queue Q;  // breadth first
  Q.Push(kRoot);
  while (!Q.Empty()) {
    if (comparisons)
      ++(*comparisons);
    size_t root = Q.Pop();

    // compare with needle
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)  // is the left child null?
      Q.Push(left_child(root));

    if (right_child(root) < size)  // is the right child null?
      Q.Push(right_child(root));
  }
  return -1;
}

int DFS(const std::string* tree,
        size_t size,
        const std::string& value,
        size_t* comparisons) {
  Stack Q;  // depth first
  Q.Push(kRoot);
  while (!Q.Empty()) {
    ++(*comparisons);
    size_t root = Q.Pop();

    // determine if the needle is found
    if (tree[root] == value)
      return root;

    if (left_child(root) < size)  // is the left child null?
      Q.Push(left_child(root));

    if (right_child(root) < size)  // is the right child null?
      Q.Push(right_child(root));
  }
  return -1;
}

}  // namespace b_tree
