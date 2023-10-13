// Copyright 2022 CSCE 240
//

#ifndef LECTURE9_TEST_INC_QUEUE_H_
#define LECTURE9_TEST_INC_QUEUE_H_


#include <lecture9/inc/queue.h>

#include <cstddef>  // size_t
#include <iostream>
#include <list>
#include <ostream>
#include <string>


template <class T>
const csce240::Queue<T>& LoadQueue(const std::list<T>& l, csce240::Queue<T>* q);

template <class T>
std::ostream& operator<<(std::ostream& lhs, const std::list<T>& rhs);

template <class T>
const std::string& EmptyQueue(csce240::Queue<T>* from, std::string* into);

#endif  // LECTURE9_TEST_INC_QUEUE_H_
