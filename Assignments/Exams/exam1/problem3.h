// Copyright 2022 Carson Murray
#ifndef EXAM1_PROBLEM3_H_
#define EXAM1_PROBLEM3_H_
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <sstream>

double Max(const std::string& name);

double Min(const std::string& name);

double Sum(const std::string& name);

double Avg(const std::string& name);

void Sort(const std::string& name, double[]);

void BubbleSort(double ret[], size_t total);

const char kTestVal = 'C';  // used to test correct header construction
#endif  // EXAM1_PROBLEM3_H_
