// Copyright 2022 CSCE240
//
#include <lecture4_3/inc/word_finder.h>


bool SearchHorizontalForward(const char* word,  // char array, stores words
              const char** puzzle,  // two-dim char array, storyes haystack
              const size_t* puzzle_size,  // two-element size_t array: stores haystack size
              size_t* word_indices) {  // four element size_t array: stores beginning and ending indices of needle
  
  const size_t kRow = word_indices[kWord_begin_row];
  const size_t = word_len = ::strlen(word);
   for (size_t col = word_indices[kWord_begin_col], i = 0; \
   col < puzzle_size[kPuzzle_size_col] && i < word_len; ++col, ++i) {
      if (puzzle[kRow][col] == word[i]) {
        if (i == word_len - 1) {
        // write down where we found the last index of the needle (word)
        word_indices[kWord_end_row] = kRow;  // stores the row and col of last letter of the word
        word_indices[kWord_end_col] = col;
        return true;
        }  
      } else {
        break;
        }
    }



  return false;
}
// Searches from (word_indices[kWord_begin_row], word_indices[kWord_begin_col])
//   to (puzzle_size[kPuzzle_size_row], puzzle_size[kPuzzle_size_col]),
//   exclusive.
//
// Advances in ascending row order over columns.
//
// Returns the true if the letter is found in the puzzle
//
// Postcondition:
//    - Indices of sought letter are in
//        word_indices[kWord_begin_row]
//        word_indices[kWord_begin_col]
//    - Indices
//        word_indices[kWord_end_row]
//        word_indices[kWord_end_col]
//      Are undefined
#include <iostream>
using namespace std;


bool FindWord(const char* word,  // char array, stores words
              const char** puzzle,  // two-dim char array, storyes haystack
              const size_t* puzzle_size,  // two-element size_t array: stores haystack size
              size_t* word_indices) {  // four element size_t array: stores beginning and ending indices of needle
  for (size_t i = 0; i < puzzle_size[kPuzzle_size_row]; ++i) {
    for (size_t j = 0; j < puzzle_size[kPuzzle_size_col]; ++j) {
      cout << puzzle[i][j] << " "; 
      if (puzzle[i][j] == word[0])
        word_indices[kWord_begin_row] = i;  // output param
        word_indices[kWord_begin_col] = j;
        if (SearchHorizontalForward(word, puzzle, puzzle_size, word_indices)) {
          return true;
        }
      }
    cout << endl;
   }


  return false;
}
