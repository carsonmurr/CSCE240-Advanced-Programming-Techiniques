# Make a compiler variable, named cc
cc = g++

# Make a compiler variable for C++ 11 standard flag named flags
flags = -std=c++17
# Append the "all warnings" flag to variable
flags += -Wall
flags += -g  # turn on debugger instrumentation

# Create link variable to compile, assemble, link, and name
link = $(cc) $(flags) -o

# Create variable compile to compile, assemble, but not link
compile = $(cc) $(flags) -c

# calc-inflation rule
#	Dependencies: calc_inflation.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-inflation : calc_inflation.cc
	$(link) $@ $^

# calc-prime rule
#	Dependencies: calc_prime.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-prime : calc_prime.cc
	$(link) $@ $^

# calc-sqrt rule
#	Dependencies: calc_sqrt.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-sqrt : calc_sqrt.cc
	$(link) $@ $^

# calc-avg rule
#	Dependencies: calc_avg.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
calc-avg : calc_avg.cc
	$(link) $@ $^

# parse-file rule
#	Dependencies: calc_avg.cc
#   Command: link
#   Executable file name: left side reference, $@
#   Input file(s): right side reference, $^
parse-file : parse_file.cc
	$(link) $@ $^

# Create a rule to make all problems at onces.
#   Dependencies: calc-inflation ~ parse-file

# Create a rule to clean up object and executable files.
#   Dependencies: none
#   Command: rm (make rm silent)
#   Arg: prob*
clean :
	rm -f calc-inflation calc-prime calc-sqrt calc-avg parse-file
