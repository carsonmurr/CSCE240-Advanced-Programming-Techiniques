// Copyright 2022 Carson Murray
#include <hw3/inc/find_sum.h>
const size_t** FindSum(const int** matrix,
                       const size_t* matrix_size,
                       int search_sum,
                       size_t* sums_found) {
  size_t sumSize = 100;  // start assuming we dont need more than 4 sums
  size_t **sums;
  sums = new size_t*[sumSize];
  size_t coords[kIndices_size];
  *sums_found = 0;  // no sums should be found at start
  for (size_t rows = 0; rows < matrix_size[kMatrix_size_rows_idx]; ++rows) {
    for (size_t cols = 0; cols < matrix_size[kMatrix_size_cols_idx]; ++cols) {
      coords[0] = rows;
      coords[1] = cols;
      coords[2] = 0;
      coords[3] = 0;
      if (SearchHorizontal(matrix, matrix_size, search_sum, coords) == true) {
        sums[*sums_found] = new size_t[kIndices_size];
        if (*sums_found == sumSize) {
            size_t **tmp_mem = new size_t*[sumSize];
            // tmp_mem = new size_t*[sumSize];
            for (size_t i=0; i < sumSize; ++i) {
              tmp_mem[i] = new size_t();  // not increasing size of cols
              for (size_t ii = 0; ii < kIndices_size; ++ii) {
                tmp_mem[i][ii] = sums[i][ii];
              }
            }
            sumSize *= 2;
              // delete old matrix
            for (size_t i = 0; i < cols; ++i)
              delete [] sums[i];
            delete [] sums;
           sums = tmp_mem;
        }
        for (size_t i=0; i < kIndices_size; ++i) {
          sums[*sums_found][i] = coords[i];
        }
        *sums_found += 1;
      }
    }
  }
  for (size_t cols = 0; cols < matrix_size[kMatrix_size_cols_idx]; ++cols) {
    for (size_t rows = 0; rows < matrix_size[kMatrix_size_rows_idx]; ++rows) {
      coords[0] = rows;
      coords[1] = cols;
      coords[2] = 0;
      coords[3] = 0;
      if (SearchVertical(matrix, matrix_size, search_sum, coords) == true) {
        sums[*sums_found] = new size_t[kIndices_size];
        for (size_t i=0; i < kIndices_size; ++i) {
          sums[*sums_found][i] = coords[i];
        }
        *sums_found += 1;
      }
    }
  }
  for (size_t cols = 0; cols < matrix_size[kMatrix_size_cols_idx]; ++cols) {
    for (size_t rows = 0; rows < matrix_size[kMatrix_size_rows_idx]; ++rows) {
      coords[0] = rows;
      coords[1] = cols;
      coords[2] = 0;
      coords[3] = 0;
      if (SearchAscending(matrix, matrix_size, search_sum, coords) == true) {
        sums[*sums_found] = new size_t[kIndices_size];
        for (size_t i=0; i < kIndices_size; ++i) {
          sums[*sums_found][i] = coords[i];
        }
        *sums_found += 1;
      }
    }
  }
  for (size_t cols = matrix_size[kMatrix_size_cols_idx]-1; cols > 0; --cols) {
    for (size_t rows = 0; rows < matrix_size[kMatrix_size_rows_idx]; ++rows) {
      coords[0] = 0;
      coords[1] = 0;
      coords[2] = rows;
      coords[3] = cols;
      if (SearchDescending(matrix, matrix_size, search_sum, coords) == true) {
        sums[*sums_found] = new size_t[kIndices_size];
        for (size_t i=0; i < kIndices_size; ++i) {
          sums[*sums_found][i] = coords[i];
        }
        *sums_found += 1;
      }
    }
  }
  return const_cast<const size_t**>(sums);
}
bool SearchHorizontal(const int** matrix,
                      const size_t* matrix_size,
                      int search_sum,
                      size_t coords[]) {
  size_t kRow = coords[0];
  int rowTotal = 0;
  for (size_t cols = coords[1]; cols < matrix_size[kMatrix_size_rows_idx];
       ++cols) {
    if (matrix[kRow][cols] == search_sum && cols == coords[1]) {
      coords[2] = kRow;
      coords[3] = cols;
      return true;
    } else if (rowTotal == search_sum) {
      coords[2] = kRow;
      coords[3] = cols-1;
      return true;
    } else if (cols == matrix_size[kMatrix_size_rows_idx] - 1
               && rowTotal != search_sum) {
      return false;
    } else {
      rowTotal += matrix[kRow][cols];
    }
  }
return false;
}
bool SearchVertical(const int** matrix,
                    const size_t* matrix_size,
                    int search_sum,
                    size_t coords[]) {
  size_t kCol = coords[1];
  int colTotal = 0;
  for (size_t rows = coords[0]; rows < matrix_size[kMatrix_size_cols_idx];
       ++rows) {
    colTotal += matrix[rows][kCol];
    if (matrix[rows][kCol] == search_sum && rows == coords[0]) {
      coords[2] = rows;
      coords[3] = kCol;
      return true;
    } else if (colTotal == search_sum) {
      coords[2] = rows;
      coords[3] = kCol;
      return true;
    } else if (rows == matrix_size[kMatrix_size_rows_idx] - 1
              && colTotal != search_sum) {
      return false;
    }
  }
  return false;
}
bool SearchAscending(const int** matrix,
                    const size_t* matrix_size,
                    int search_sum,
                    size_t coords[]) {
  size_t startRow = coords[0];
  size_t startCol = coords[1];
  int total = 0;
  while (startRow <= matrix_size[kMatrix_size_rows_idx] - 1
         && startCol <= matrix_size[kMatrix_size_cols_idx] - 1) {
    total += matrix[startRow][startCol];
    if (search_sum == total) {
      coords[2] = startRow;
      coords[3] = startCol;
      return true;
    } else if (startRow == matrix_size[kMatrix_size_rows_idx] - 1
              || startCol == matrix_size[kMatrix_size_cols_idx] - 1) {
      break;
    } else {
      startRow -= 1;
      startCol += 1;
    }
  }
  return false;
}
bool SearchDescending(const int** matrix,
                      const size_t* matrix_size,
                      int search_sum,
                      size_t coords[]) {
  size_t startRow = coords[2];
  size_t startCol = coords[3];
  int total = 0;
  while (startRow >= 0 && startCol >= 0) {
    total += matrix[startRow][startCol];
    if (search_sum == total) {
      coords[0] = startRow;
      coords[1] = startCol;
      return true;
    } else if (startRow == 0 || startCol == 0) {
      break;
    } else {
      startRow -= 1;
      startCol -= 1;
    }
  }
  return false;
}
