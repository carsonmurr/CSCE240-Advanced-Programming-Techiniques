// Copyright Carson Murray 2022
#include <exam3/inc/char_matrix.h>

CharMatrix::CharMatrix(const char** chars, ::size_t rows, ::size_t cols) {
  rows_ = rows;
  cols_ = cols;
  matrix_ = new char*[rows_];
  for (size_t i = 0; i < rows_; ++i)
    matrix_[i] = new char[cols_];

  for (size_t i = 0; i < rows_; ++i) {
    for (size_t j = 0; j < cols_; ++j) {
        matrix_[i][j] = chars[i][j];
    }
  }
  // for (size_t i = 0; i < rows_; ++i) {
  //   for (size_t j = 0; i < cols_; ++j) {
  //     matrix_[i][j] = chars[i][j];
  //   }
  // }
}
CharMatrix::CharMatrix(const CharMatrix& that) {
  rows_ = that.rows_;
  cols_ = that.cols_;

  matrix_ = new char*[rows_];

  for (size_t i = 0; i < rows_; ++i)
    matrix_[i] = new char[cols_];

  for (size_t i = 0; i < rows_; ++i) {
    for (size_t j = 0; j < cols_; ++j) {
      matrix_[i][j] = that.matrix_[i][j];
    }
  }
  // for (size_t i = 0; i < rows_; ++i) {
  //   for (size_t j = 0; i < cols_; ++j) {
  //     matrix_[i][j] = that.matrix_[i][j];
  //   }
  // }
}
const CharMatrix& CharMatrix::operator=(const CharMatrix& rhs) {
  // if (this != &rhs) {
  //   *matrix_ = *rhs;
  // }
  // return *this;
  // return CharMatrix(rhs);
  return *this;
}

CharMatrix::~CharMatrix() {
  for (size_t i = 0; i < rows_; ++i)
    delete[] matrix_[i];
}
