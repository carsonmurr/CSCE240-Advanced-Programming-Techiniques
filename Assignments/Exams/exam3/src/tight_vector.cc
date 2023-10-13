// Copyright 2022 Carson Murray
#include <exam3/inc/tight_vector.h>

TightVector::TightVector() {
  count_ = 0;
  array_ = nullptr;
}
TightVector::TightVector(size_t count) {
  count_ = count;
  // array_ = nullptr;
  array_ = new int[count_];

  // for (size_t i = 0; i < rows_; ++i)
  //   matrix_[i] = new char[cols_];
}

TightVector::~TightVector() {
  delete[] array_;
}

void TightVector::Append(int element) {
  GrowArray();
  // count_++;
  array_[count_-1] = element;
  return;
}

void TightVector::GrowArray() {
  if (array_ != nullptr) {
    int* temp = new int[count_+1];
    for (size_t i = 0; i < count_; ++i) {
      temp[i] = array_[i];
    }
    // for(size_t i = 0; i < count_; ++i) {
    // delete[] array_[i];
    // }
    delete[] array_;
    array_ = new int[count_+1];
    // std::cout<<"count: "<<count_ <<std::endl;
    // int array_[count_+1];
    for (size_t i = 0; i < count_+1; ++i) {
    // std::cout<<"count: "<<count_<<std::endl;
    // std::cout<<"array_["<<i<<"]: "<<array_[i]<<std::endl;
    array_[i] = temp[i];
    }
    count_++;
    delete[] temp;
    return;
  } else {
    // delete[] array_;
    // count_++;
    count_ = 1;
    array_ = new int[count_];
    return;
  }
}

  // for(size_t i = 0; i < count_; ++i) {
  //   delete[] temp[i];
  // }
  // std::cout<<"test"<<std::endl;
  // delete[] temp;


void TightVector::Prepend(int element) {
  // GrowArray();
  GrowArrayForShift();
  count_++;
  ShiftArray();
  array_[0] = element;
  return;
}

void TightVector::ShiftArray() {
  for (size_t i = count_ - 1; i > 0; --i) {
    array_[i] = array_[i-1];
  }
  return;
}

  void TightVector::GrowArrayForShift() {
    int* temp = new int[count_+1];
    for (size_t i = 0; i < count_; ++i) {
      temp[i] = array_[i];
    }
    // for(size_t i = 0; i < count_; ++i) {
    // delete[] array_[i];
    // }
    delete[] array_;
    array_ = new int[count_+1];
    // std::cout<<"count: "<<count_ <<std::endl;
    // int array_[count_+1];
    for (size_t i = 0; i < count_+1; ++i) {
    // std::cout<<"count: "<<count_<<std::endl;
    // std::cout<<"array_["<<i<<"]: "<<array_[i]<<std::endl;
    array_[i] = temp[i];
    }
    delete[] temp;
    return;
  }
