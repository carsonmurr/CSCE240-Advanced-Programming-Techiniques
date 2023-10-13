// Copyright 2022 CSCE240
//

#include <lecture4_3/inc/test_word_finder.h>


int main(int argc, char* argv[]) {
  std::cout << "Find word horizontal and left-to-right." << std::endl;
  if (TestFinder("ash", WordIndices(0, 1, 0, 3))) {
    std::cout << "  CORRECT!" << std::endl;
  } else {
    std::cout << "  INCORRECT!" << std::endl;
    return 1;
  }

  std::cout << "Find word horizontal and right-to-left." << std::endl;
  if (TestFinder("run", WordIndices(4, 4, 4, 2))) {
    std::cout << "  CORRECT!" << std::endl;
  } else {
    std::cout << "  INCORRECT!" << std::endl;
    return 1;
  }

  std::cout << "Find word vertical and top-to-bottom." << std::endl;
  if (TestFinder("ask", WordIndices(0, 4, 2, 4))) {
    std::cout << "  CORRECT!" << std::endl;
  } else {
    std::cout << "  INCORRECT!" << std::endl;
    return 1;
  }

  std::cout << "Find word vertical and bottom-to-top." << std::endl;
  if (TestFinder("barks", WordIndices(4, 0, 0, 0))) {
    std::cout << "  CORRECT!" << std::endl;
  } else {
    std::cout << "  INCORRECT!" << std::endl;
    return 1;
  }

  std::cout << "Find missing word." << std::endl;
  if (TestFinder("half", WordIndices(0, 0, 0, 0), false)) {
    std::cout << "  CORRECT!" << std::endl;
  } else {
    std::cout << "  INCORRECT!" << std::endl;
    return 1;
  }

  return 0;
}


bool TestFinder(const char* word, const  WordIndices& indices, bool exists) {
  // create scramble to pass to finder
  const char **scramble = new const char* [kRows];
  for (size_t i = 0; i < kRows; ++i)
    scramble[i] = static_cast<const char *>(kWord_scramble[i]);
  // create scramble size for finder
  const size_t scramble_size[] = { kRows, kCols };
  // create array of indices from object
  size_t expected_indices[] = {
    indices.start_row, indices.start_col, indices.end_row, indices.end_col
  };

  // build output parameter and attempt find
  size_t actual_indices[] = { kRows, kCols, kRows, kCols };
  bool found = FindWord(word, scramble, scramble_size, actual_indices);
  if (exists) {
    // word expected to exist
    if (!found) {
      std::cout << "  \"" << word << "\" exists, but not found" << std::endl;
      return false;
    }
    if (!IndicesEqual(expected_indices, actual_indices)) {
      std::cout << "  Expected: " << ToString(expected_indices)
        << " Actual: " << ToString(actual_indices) << std::endl;
      return false;
    }
  } else {
    // word does not exist in scramble
    if (!exists && found) {
      std::cout << "  \"" << word << "\" returned, but does not exist"
        << std::endl;
      return false;
    }
  }
  return true;
}


bool IndicesEqual(const size_t* left, const size_t* right) {
  for (size_t i = 0; i < 4; ++i)
    if (left[i] != right[i])
      return false;
  return true;
}

const std::string ToString(const size_t* indices) {
  std::stringstream sout;
  sout << "(" << indices[kWord_begin_row] << ", " << indices[kWord_begin_col] << ") - ("
    << indices[kWord_end_row] << ", " << indices[kWord_end_col] << ")";
  return sout.str();
}
