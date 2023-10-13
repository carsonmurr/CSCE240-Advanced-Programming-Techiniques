// Copyright 2022 Carson Murray
#include <exam1/problem3.h>

double Max(const std::string& name) {
  double max = 0.0;
  std::ifstream myFile(name);
  std::string myString;
  if (myFile.is_open()) {
    while (myFile.good()) {  // && myFile.eof() == false) {
      myFile >> myString;
      // std::cout << myString << " ";
        if (std::stod(myString) > max)
          max = std::stod(myString);
    }
  }
  myFile.close();
  return max;
}

double Min(const std::string& name) {
  double min = 0.0;
  std::ifstream myFile(name);
  std::string myString;
  if (myFile.is_open()) {
    while (myFile.good()) {
      myFile >> myString;
        if (std::stod(myString) < min)
          min = std::stod(myString);
    }
  }
  myFile.close();
  return min;
}

double Sum(const std::string& name) {
  double sum = 0.0;
  std::ifstream myFile(name);
  std::string myString;
  if (myFile.is_open()) {
    while (myFile.good()) {
      myFile >> myString;
      sum += std::stod(myString);
    }
  sum -= std::stod(myString);
  }
  myFile.close();
  return sum;
}

double Avg(const std::string& name) {
  double sum = 0.0;
  double total = 0.0;
  double avg = 0.0;
  std::ifstream myFile(name);
  std::string myString;
  if (myFile.is_open()) {
    while (myFile.good()) {
      myFile >> myString;
      total += 1.0;
      sum += std::stod(myString);
    }
  sum -= std::stod(myString);
  total = total - 1;
  }
  myFile.close();
  avg = sum/total;
  return avg;
}

void Sort(const std::string& name, double ret[]) {
  size_t total = 0;
  std::ifstream myFile(name);
  std::string myString;
  if (myFile.is_open()) {
    while (myFile.good()) {
      myFile >> myString;  // gets the size
      total += 1.0;
    }
    total -= 1;
  }
  myFile.close();
  std::ifstream myFile2(name);
  std::string myString2;
  if (myFile2.is_open()) {
    for (size_t i = 0; i < total; ++i) {
      myFile2 >> myString2;  // assigns values to the array
      ret[i] = std::stod(myString2);
    }
  }
  myFile2.close();
  BubbleSort(ret, total);  // uses bubble sort
}

void BubbleSort(double ret[], size_t total) {
  for (size_t i = 0; i < total-1; ++i) {
    for (size_t j = 0; j < total-i-1; ++j) {
      if (ret[j] > ret[j+1]) {
        double temp = ret[j];
        ret[j] = ret[j+1];
        ret[j+1] = temp;
      }
    }
  }
}
