// Copyright 2022 CSCE240
//
#ifndef LECTURE4_1_INC_FUNC_H_
#define LECTURE4_1_INC_FUNC_H_

#include <cassert>  // assert
#include <cstddef>  // size_t
#include <iostream>
#include <sstream>
#include <string>

// Returns the idx of smallest element in an int array
::size_t MinValue(const int array[], ::size_t size);


// Returns the largest element in an array
::size_t MaxValue(const int array[], ::size_t size);

// Copies an int array and returns the value
//
// Returns:
//  new array of size size. Must be deleted by outside code.
// 
void Copy(const int from[], ::size_t size, int to[]);  // to is an output parameter


// create a function which creates an int array

// create a function which sorts an int array

#endif  // LECTURE4_1_INC_FUNC_H_
