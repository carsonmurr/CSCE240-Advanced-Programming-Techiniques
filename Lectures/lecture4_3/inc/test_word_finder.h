// Copyright 2022 CSCE240
//
#ifndef LECTURE4_3_INC_TEST_WORD_FINDER_H_
#define LECTURE4_3_INC_TEST_WORD_FINDER_H_

#include <lecture4_3/inc/word_finder.h>

#include <cstddef>  // size_t
#include <iostream>
#include <sstream>
#include <string>


const char kWord_scramble[][5] = {
  {'s', 'a', 's', 'h', 'a'},
  {'k', 'n', 'm', 'r', 's'},
  {'r', 'a', 'u', 'a', 'k'},
  {'a', 'a', 'n', 'b', 'w'},
  {'b', 'f', 'n', 'u', 'r'}
};
const size_t kRows = 5;
const size_t kCols = 5;

// A class to easily create new arrays to pass to test functions
//
struct WordIndices {
  WordIndices(size_t r1, size_t c1, size_t r2, size_t c2)
    : start_row(r1), start_col(c1), end_row(r2), end_col(c2) {}

  size_t start_row, start_col, end_row, end_col;
};

// Compare two sets of indices to ensure they are equal.
// Preconditions: two input parameters are allocated as arrays, each containing
//                four elements
//
bool IndicesEqual(const size_t* left, const size_t* right);

// Converts a set of indices to a string for printing.
// Preconditions: input parameter must be allocated as an array with four
//                elements
//
const std::string ToString(const size_t* indices);

// Uses word to test the FindWord function from student library. Can check for
// words that exist or do not exist by last parameter.
//
bool TestFinder(const char* word,
                const WordIndices& expected_indices,
                bool exists = true);

#endif  // LECTURE4_3_INC_TEST_WORD_FINDER_H_
