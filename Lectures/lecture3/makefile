# Style Guide: https://style-guides.readthedocs.io/en/latest/makefile.html

# Make a compiler variable, named cc
cc = g++
root = ..

# Make a compiler variable for C++ 17 standard flag named flags
flags = -std=c++17
# Append the "all warnings" flag to variable
flags += -Wall
flags += -I $(root)

# Create link variable to compile, assemble, link, and name
link = $(cc) $(flags) -o

# Create variable compile to compile, assemble, but not link
compile = $(cc) $(flags) -c

# calc-wind-chill rule
#	Dependencies: calc_wind_chill.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-wind-chill : calc-wind-chill.o
	$(link) $@ $^
calc-wind-chill.o : calc_wind_chill.cc calc_wind_chill.h
	$(compile) -o $@ $<

# calc-sqrt rule
#	Dependencies: calc_sqrt.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-sqrt : calc_sqrt.cc
	$(link) $@ $^

# ninety-nine rule
#	Dependencies: ninety_nine.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
ninety-nine : ninety_nine.cc
	$(link) $@ $^


# Create a rule to clean up object and executable files.
#   Dependencies: none
#   Command: rm (make rm silent)
#   Arg: prob*
clean :
	@rm -f calc-wind-chill calc-sqrt ninety-nine *.o
