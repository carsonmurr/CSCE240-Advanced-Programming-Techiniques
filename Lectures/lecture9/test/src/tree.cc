// Copyright 2022 CSCE 240
//

#include <lecture9/test/inc/tree.h>

class SearchOperation : public csce240::b_tree::Operation {
  const std::string* tree_;
  std::string needle_;
  size_t root_;
  size_t* comparisons_;

 public:
  inline size_t root() {
    return root_;
  }

  SearchOperation(const std::string* tree,
                  const std::string& needle,
                  size_t* comparisons )
      : tree_(tree), needle_(needle), root_(0), comparisons_(comparisons) {
    // empty
  }

  // override
  inline bool operator()(size_t root) {
    ++(*comparisons_);
    if (tree_[root] == needle_) {
      root_ = root;
      return true;
    }

    return false;
  }
};

class PrintOperation : public csce240::b_tree::Operation {
  const std::string* tree_;
 public:
  PrintOperation(const std::string* tree) : tree_(tree) { /* empty */ }

  bool operator()(size_t root) {
    std::cout << tree_[root] << ' ';
    return false;
  }
};


int main(int argc, char* argv[]) {
  const int kArg_index = 1;  // index of search value in argument list
  assert(1 < argc && "You must provide a movie title.");  // avoid segfaults
  std::string needle = std::string(argv[kArg_index]);  // get search string arg
  size_t comparisons = 0;
  int index = -1;

  csce240::Queue queue;
  SearchOperation op(kMovie_tree, needle, &comparisons);
  index = csce240::b_tree::QTraverse(kMovie_tree,
                                     kTree_size,
                                     &queue,
                                     &op) ? op.root() : -1;
  std::cout << "Using a breadth-first search and " << comparisons
      << " comparisons, " << needle << " was "
      << (index < 0 ? "not " : "") << "found at index " << index << std::endl;

  csce240::Stack stack;
  comparisons = 0;
  index = csce240::b_tree::QTraverse(kMovie_tree,
                                     kTree_size,
                                     &stack,
                                     &op) ? op.root() : -1;
  std::cout << "Using a depth-first search and " << comparisons
      << " comparisons, " << needle << " was "
      << (index < 0 ? "not " : "") << "found at index " << index << std::endl;


  std::cout << "Print using operation:" << std::endl;
  PrintOperation print_op(kMovie_tree);
  csce240::b_tree::QTraverse(kMovie_tree, kTree_size, &queue, &print_op);
  std::cout << std::endl;
  csce240::b_tree::QTraverse(kMovie_tree, kTree_size, &stack, &print_op);
  std::cout << std::endl;
  return 0;
}
