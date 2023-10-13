// Copyright 2022 CSCE 240
//
#ifndef LECTURE7_1_TEST_INC_TEST_STACK_H_
#define LECTURE7_1_TEST_INC_TEST_STACK_H_

#include <lecture7_1/inc/stack.h>

#include <cstddef>  // size_t
#include <iostream>
#include <ostream>
#include <string>
#include <vector>


const std::vector<std::string>& LoadVector(std::vector<std::string>* stack);

const csce240::Stack& LoadStack(csce240::Stack* s);

std::ostream& operator<<(std::ostream& lhs,
                         const std::vector<std::string>& rhs);

const std::string& EmptyStack(csce240::Stack* from, std::string* into);

const std::string kVideos[] = {
  "The Office", "Better Things", "Nailed It", "The Boys"
};

#endif  // LECTURE7_1_TEST_INC_TEST_STACK_H_
