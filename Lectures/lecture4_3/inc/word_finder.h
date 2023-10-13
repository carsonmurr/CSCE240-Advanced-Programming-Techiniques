// Copyright 2022 CSCE240
//
#ifndef LECTURE_4_3_WORD_FINDER_H_
#define LECTURE_4_3_WORD_FINDER_H_
#include <cstddef>  // size_t
#include <cstring>  // strlen


// The function accepts a word, a letter puzzle, a pair of integers representing
// puzzle size, and an output parameter to store the indices of a found word.
//
// Preconditions:
//  - All arrays are allocated,
//  - The puzzle array's dimensions are correctly represented in puzzle_size
//    array,
//  - The puzzle_size parameter has exactly two elements
//  - The word_indices output parameter is allocated and has four elements
// Parameters:
//  - word: a null-terminated character array
//  - puzzle: a two-dimension character array
//  - puzzle_size: a two-element integer array with index 0 storing the number
//    of rows, and index 1 storing the number of columns
//  - word_indices: a four-element integer array into which the beginning row
//    and column and ending row and column indicies are stored
// Returns:
//  - Will return true if word is found in puzzle, false otherwise
//  - Additionally, returns the beginning row and column and ending row and
//    column indicies are stored
//
bool FindWord(const char* word,  // a character array
              const char** puzzle,  // this is a two-dimensional char array    
              const size_t* puzzle_size,  // a size_t array
              size_t* word_indices);  // size_t array (output parameter)


const size_t kPuzzle_size_row = 0;  // maps puzzle_size
const size_t kPuzzle_size_col = 1;

const size_t kWord_begin_row = 0;  // maps a word in word_indices
const size_t kWord_begin_col = 1;
const size_t kWord_end_row = 2;
const size_t kWord_end_col = 3;


#endif  // LECTURE_4_3_WORD_FINDER_H_
