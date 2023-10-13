// Copyright 2022 CSCE
//
// calc_wind_chill
//  Wind chill is defined as
//  w = 33 - [(10(v)^0.5 - v + 10.5)(33 - t)]/23.1
//  Where v is wind speed in m/sec,
//  t is temp in Celsius, s.t. t <= 10.0.
//
//  Write a function with id CalcWindChill. It should accept two double
//  parameters vel and temp and return a double value representing the wind
//  chill. When temp is greater than 10.0, return temp.


/* Public documentation
 * This is where I document for another dev how to use this function
 */
double CalcWindChill(double, double);  // forward decl
