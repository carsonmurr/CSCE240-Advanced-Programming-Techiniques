// Copyright 2022 CSCE240
// 
// Structs
//  This small library introduces structs and their usage, paving the way for
//  classes. Just because structs predate classes does not mean they are no
//  longer used and used outside C++. They see lots of use in Javascript, for
//  instance, additionally, database frameworks often use them to store
//  retrieved rows.
// 
// + Person: struct representing a person as a
//   + first name : std::string,
//   + last name : std::string, and
//   + date of birth : Date.
// 
// + Date: struct representing a date
//   + year : unsigned int,
//   + month : unsigned int, and
//   + day : unsigned int.
// 
// Functions:
//  In the past, functions were often grouped with structs. This is what led to
//  member functions or methods. This library presents a few reasonable
//  functions one might expect to have provided with the structs.
// 
// + ConstructPerson(const std::string&,
//                   const std::string&,
//                   const Date&) : Person
// + CalculateAge(const Person&, const Date&) : unsigned int
// + Equals(const Person&, const Person&) : bool
// + Insert(std::istream*, Person*) : void
// + ConstructDate(unsigned int, unsigned int, unsigned int) : const Date
// + Equals(const Date&, const Date&) : bool
// + Insert(std::istream*, Date*) : void
//
#ifndef LECTURE5_1_INC_PERSON_H_
#define LECTURE5_1_INC_PERSON_H_


#include <istream>
#include <string>


struct Date {
  unsigned int year;
  unsigned int month;
  unsigned int day;
};


struct Person {
  std::string first_name;
  std::string last_name;
  Date date_of_birth;
};



// Creates new Person object.
//
const Person ConstructPerson(const std::string& first_name,
                             const std::string& last_name,
                             const Date& date_of_birth);

// Calculates the age of a person, given the date.
//
unsigned int CalculateAge(const Person& person, const Date& current);


// Equals the members of two instances for equality.
//
bool Equals(const Person& lhs, const Person& rhs);


// Inserts data from istream object into provided Person instance. Both
// instances are modified. This is efficient because it does not use a copy to
// return Person instance.
//
void Insert(std::istream* from, Person* to);


// Creates a new Date object.
//
const Date ConstructDate(unsigned int year,
                         unsigned int month,
                         unsigned int day);


// Equals checks the members of two dates for equality.
//
bool Equals(const Date& lhs, const Date& rhs);


// Inserts data from istream object into provided Date object.
//
void Insert(std::istream* from, Date* to);

#endif  // LECTURE5_1_INC_PERSON_H_
