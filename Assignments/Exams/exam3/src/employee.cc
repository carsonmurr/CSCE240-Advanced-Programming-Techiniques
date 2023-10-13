// Copyright 2022 Carson Murray

#include <exam3/inc/employee.h>

namespace exam3 {

namespace problem2 {

Demographic::Demographic() {
  f_name_ = " ";
  l_name_ = " ";
  dob_ = " ";
}

Demographic::Demographic(const std::string& first_name,
                         const std::string& last_name,
                         const std::string& date_of_birth) {
  f_name_ = first_name;
  l_name_ = last_name;
  dob_ = date_of_birth;
}

// void Demographic::setFirstName(const std::string& first_name) {
//   f_name_ = first_name;
//   return;
// }

const std::string Demographic::first_name() const {
  return f_name_;
}

const std::string Demographic::last_name() const {
  return l_name_;
}

const std::string Demographic::date_of_birth() const {
  return dob_;
}

Employee::Employee() {
  f_name_ = " ";
  l_name_ = " ";
  dob_ = " ";
  id_ = " ";
}

Employee::Employee(const std::string& first_name,
           const std::string& last_name,
           const std::string& date_of_birth,
           const std::string& employee_id)  : Demographic(first_name,
                                           last_name,
                                           date_of_birth) {
  // f_name_ = first_name;
  // l_name_ = last_name;
  // dob_ = date_of_birth;
  // Demographic(first_name,
  //             last_name,
  //             date_of_birth);
  id_ = employee_id;
}

const std::string Employee::employee_id() const {
  return id_;
}

HourlyEmployee::HourlyEmployee() {
  f_name_ = " ";
  l_name_ = " ";
  dob_ = " ";
  id_ = " ";
  rate_ = 0;
}
HourlyEmployee::HourlyEmployee(const std::string& first_name,
                 const std::string& last_name,
                 const std::string& date_of_birth,
                 const std::string& employee_id,
                 double hourly_rate)  : Employee(first_name,
                                           last_name,
                                           date_of_birth,
                                           employee_id) {
  // f_name_ = first_name;
  // l_name_ = last_name;
  // dob_ = date_of_birth;
  // id_ = employee_id;
  rate_ = hourly_rate;
}


double HourlyEmployee::pay_rate() const {
  return rate_;
}
double HourlyEmployee::CalculatePay(double hours_worked) const {
  return hours_worked * pay_rate();
}

SalaryEmployee::SalaryEmployee() {
  f_name_ = " ";
  l_name_ = " ";
  dob_ = " ";
  id_ = " ";
  salary_ = 0;
}
SalaryEmployee::SalaryEmployee(const std::string& first_name,
                 const std::string& last_name,
                 const std::string& date_of_birth,
                 const std::string& employee_id,
                 double salary) : Employee(first_name,
                                           last_name,
                                           date_of_birth,
                                           employee_id) {
  // f_name_ = first_name;
  // l_name_ = last_name;
  // dob_ = date_of_birth;
  // id_ = employee_id;
  // Employee(first_name,
  //          last_name,
  //          date_of_birth,
  //          employee_id);
  salary_ = salary;
}

double SalaryEmployee::pay_rate() const {
  return salary_;
}

double SalaryEmployee::CalculatePay(double annual_percentage) const {
  return annual_percentage * 0.01 *pay_rate();
}


}  // namespace problem2
}  // namespace exam3
