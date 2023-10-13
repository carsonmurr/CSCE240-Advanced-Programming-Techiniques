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

arrays : bin/arrays.o
	$(link) $@ $^
bin/arrays.o : src/arrays.cc
	$(compile) $^ -o $@

undef-ind : bin/undef-ind.o
	$(link) $@ $^
bin/undef-ind.o : src/undef_ind.cc
	$(compile) $^ -o $@

str-proc : bin/str_proc.o
	$(link) $@ $^
bin/str_proc.o : src/str_proc.cc
	$(compile) $^ -o $@

func : bin/func.o
	$(link) $@ $^
bin/func.o : src/func.cc inc/func.h
	$(compile) $< -o $@

multi-arrays : bin/multi-arrays.o
	$(link) $@ $^
bin/multi-arrays.o : src/multi_arrays.cc
	$(compile) $^ -o $@

# list of all apps
apps = arrays undef-ind str-proc func mult-arrays

all : $(apps)
	@echo All apps made

clean:
	@rm -f bin/* $(apps)
