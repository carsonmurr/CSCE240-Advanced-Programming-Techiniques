// Copyright 2022 Carson Murray
//
//
//
#include <hw2/parse_scores.h>

double GetGrade(size_t grade_index, const std::string input[], size_t size) {
  if (FormatIsGood(input, size) == true &&
  IndicesAreGood(input, size) == true) {
    if (grade_index+2 >= size) {
      return -2.0;
    } else {
      double ret = std::stod(input[grade_index+2]);
      return ret;
      }
    } else {
    return -1.0;
    }
}

int GetGradeCount(const std::string input[], size_t size) {
  if (FormatIsGood(input, size) == true &&
    IndicesAreGood(input, size) == true) {
    int ret = std::stoi(input[1]);
    return ret;
  } else {
    return -1;
    }
}

std::string GetID(const std::string input[], size_t size) {
  if (FormatIsGood(input, size) == true) {
    return input[0];
  } else {
    return "";
    }
}
double GetMaxGrade(const std::string input[], const size_t size) {
  if (FormatIsGood(input, size) == true &&
    IndicesAreGood(input, size) == true) {
    double ret = 0.0;
    for (size_t i = 2; i < size; ++i) {
    double tempValue = std::stod(input[i]);
      if (tempValue > ret)
        ret = tempValue;
    }
    return ret;
  } else {
    if (std::stoi(input[1]) == 0)
      return -2.0;
    else
      return -1.0;
    }
}

bool FormatIsGood(const std::string input[], size_t size) {
     if (static_cast<int>(size) < 2)
       return false;
     else if (std::stoi(input[1]) < 0)
       return false;
     else if (std::stoi(input[1]) != static_cast<int>(size)-2)
       return false;
     else
       return true;
}

bool IndicesAreGood(const std::string input[], size_t size) {
  double grade;
  bool nextStage = true;
  for (size_t i = 2; i < size; ++i) {
    try {
      grade = std::stod(input[i]);
    } catch (const std::invalid_argument& exception) {
    nextStage = false;  // non-nuemeric grade
    }
  }
  if (nextStage == false) {
    return false;
  } else {
    for (size_t i = 2; i < size; ++i) {
      grade = std::stod(input[i]);
      if (grade < 0.0)
        return false;
      else
        return true;
      }
    }
}
