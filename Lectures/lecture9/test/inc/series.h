// Copyright 2022 CSCE240
//
#ifndef LECTURE9_TEST_INC_SERIES_H_
#define LECTURE9_TEST_INC_SERIES_H_


#include <lecture9/inc/queue.h>
#include <lecture9/inc/series.h>
#include <lecture9/inc/stack.h>

#include <cstddef>  // size_t
#include <iostream>
#include <string>
#include <vector>


const csce240::Series& LoadSeries(csce240::Series* series);

const size_t kIndices[] = {
  0, 1, 2, 3, 4, 5, 6, 7, 8 , 9
};


#endif  // LECTURE9_TEST_INC_SERIES_H_
