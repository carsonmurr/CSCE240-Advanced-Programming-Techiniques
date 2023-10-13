// Copyright 2022 Carson Murray
#include <exam2/inc/functional_array.h>

::size_t** Allocate(const ::size_t* sizes, ::size_t length) {
  size_t **ret;
  ret = new size_t*[length];
  for (size_t i = 0; i < length; ++i) {
    ret[i] = new size_t[sizes[i]];
  }
  for (size_t i = 0; i < length; ++i) {
    for (size_t j = 0; j < sizes[i]; ++j) {
      ret[i][j] = sizes[i];
    }
  }
  return ret;
}
::size_t Deallocate(const ::size_t** delete_me,
                    const ::size_t* sizes,
                    ::size_t length) {
  size_t sum = 0;
  size_t rowSum = 0;
  for (size_t i = 0; i < length; ++i) {
    rowSum = 0;
    for (size_t j = 0; j < sizes[i]; ++j) {
      rowSum += delete_me[i][j];
    }
    sum += rowSum;
  }
  return sum;
}
