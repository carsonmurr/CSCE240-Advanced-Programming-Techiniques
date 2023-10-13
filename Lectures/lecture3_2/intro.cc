/* Copyright 2022 CSCE240
 *
 * Separate functions into declaration and definition to fix scope issue.
 */

#include <iostream>


void HelloWorld01();  // forward decl
void HelloWorld02();  // forward decl


int main(int argc, char* argv[]) {
  // call HelloWorld01
  HelloWorld01();

  // call HelloWorld02
  HelloWorld02();

  return 0;
}


/* A void function which displays Hello, World named HelloWorld01
 */
  void HelloWorld01() {  // function definiton
    std::cout << "Hello World" << std::endl;
  }
/* A void function which displays Hello, World named HelloWorld02
 */
 void HelloWorld02() {  // function definition
  std::cout << "Hello World 2" << std::endl;
 }
