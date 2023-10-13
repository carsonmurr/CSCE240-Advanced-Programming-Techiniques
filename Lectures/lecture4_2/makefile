# use g++ compiler
cc = g++

# add parent to include path and root
path = ..

# compile with C++ 17 standard
flags = -std=c++17
# compile with all warnings
flags += -Wall
# compile with PWD appended to compiler library path
flags += -I $(path)
# compile with debug instrumentation
flags += -g

# compile, assemble, link
link = $(cc) $(flags) -o
# compile, assemble, do not link
compile = $(cc) $(flags) -c

intro : intro.cc
	$(link) $@ $^

output_params: output_params.o
	$(link) $@ $^
output_params.o: output_params.cc
	$(compile) $<

clean:
	@rm -f intro output_params *.o 
