// Copyright 2022 CSCE 240
// 
// A metric ton is 35,273.92 ounces. Write a program which accepts the
// weight of a box of cereal in ounces and displays how many boxes would
// be required to provide one metric ton.
//
#include <iostream>
int main(int argc, char*argv[]){
 std:cout << "Enter ounces in box: " << std:endl;
 int oz_in_box;


  // get ounces in cereal box
 std:cin >> oz_in_box;
  // divide ounces in metric ton by onces in cereal box
 const double kOzInMetricTon / oz_in_box + 1;

  // display results
 std:cout << "Shipping " << kOzInMetricTon << "boxes of cereal" << std:endl;
 return 0;
}
