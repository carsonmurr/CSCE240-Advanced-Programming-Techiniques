/* Copyright 2022 CSCE240
 */

#include <iostream>
#include <string>


void Swap(int& left, int& right);

/*Function returns the contents of the string parameter surrounded by double
 * quotes.
 *
 * Parameters:
 * - str : string, shall be passed by reference to avoid doubling memory
 */
std::string DblQuoteString(const std::string& str);

/*Function returns the contents of the string parameter surrounded by single
 * quotes.
 *
 * Parameters:
 * - str : string, shall be passed by reference to avoid doubling memory
 */
std::string SngQuoteString(const std::string& str);

