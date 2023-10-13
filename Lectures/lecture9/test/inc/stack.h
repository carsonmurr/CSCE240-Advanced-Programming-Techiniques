// Copyright 2022 CSCE 240
//
#ifndef LECTURE9_TEST_INC_STACK_H_
#define LECTURE9_TEST_INC_STACK_H_


#include <lecture9/inc/stack.h>

#include <cstddef>  // size_t
#include <iostream>
#include <ostream>
#include <string>
#include <vector>


const std::vector<size_t>& LoadVector(std::vector<size_t>* stack);

const csce240::Stack& LoadStack(csce240::Stack* s);

std::ostream& operator<<(std::ostream& lhs,
                         const std::vector<size_t>& rhs);

const std::string& EmptyStack(csce240::Stack* from, std::string* into);

const size_t kIndices[] = {
  12, 18, 32, 87, 91, 0, 99
};


#endif  // LECTURE9_TEST_INC_STACK_H_
