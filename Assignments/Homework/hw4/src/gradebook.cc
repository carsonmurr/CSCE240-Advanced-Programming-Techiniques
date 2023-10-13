// Copyright 2022 Carson Murray
#include <hw4/inc/gradebook.h>

GradeBook::GradeBook() : grades_(nullptr), size_(0), count_(0) {
  // empty
}

GradeBook::~GradeBook() {
  if (grades_)
    delete [] grades_;
}
GradeBook::GradeBook(const GradeBook& that) : grades_(nullptr),
                                              size_(that.size_),
                                              count_(that.count_) {
  if (size_ > 0)
    grades_ = new Grade[size_];
  for (size_t i = 0; i < count_; ++i)
    grades_[i] = that.grades_[i];
}

GradeBook::GradeBook(const Grade* start, const Grade* end) {
  count_ = size_ = end - start;  // calculate size_ and count_ from fill
  grades_ = new Grade[size_];  // allocate memory for Rational instances
  for (size_t i = 0; i < count_; ++i)
    grades_[i] = start[i];
}

Grade GradeBook::Get(size_t index) const {
  /*  if (index >= 0 && index < count_) 
    return grades_[index];
  else
    return Grade(0,1);  */
  return Grade();
}
void GradeBook::Add(Grade newGrade) const {
  /* if (count_ == size_ {
    Grade temp = new Grade[size_ * 2];
    for (size_t i = 0; i < size_; ++i)
      temp[i] = grades_[i];
    ~GradeBook();
    GradeBook(gra)
  } 
  else {
    grades_[count_] = newGrade;
    count += 1;
  }
  return newGrade; */
}

const GradeBook GradeBook::Add(const GradeBook parameter) const {
  const GradeBook temp = GradeBook();
  return temp;
}

const GradeBook GradeBook::CalcAverage() const {
  const GradeBook temp = GradeBook();
  return temp;
}
