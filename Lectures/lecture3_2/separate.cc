/* Copyright 2022 CSCE240 */

#include <lecture3_2/separate.h>


int main(int argc, char* argv[]) {
  // call HelloWorld01
  HelloWorld01();

  // call HelloWorld02
  HelloWorld02();

  return 0;
}


/* A void function which displays Hello, World named HelloWorld01
 */
 void HelloWorld01 () {
  std::cout << "Hello World" << std::endl;
 }

/* A void function which displays Hello, World named HelloWorld02
 */
  void HelloWorld02 () {
    std::cout << "Hello World 2" << std::endl;
  }
