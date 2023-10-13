# Copyright 2022  CSCE240
cc = g++  # use g++ compiler

flags = -std=c++17  # compile with C++ 17 standard
flags += -Wall  # compile with all warnings
flags += -g  # produce debugging information
flags += -I .. # add pwd directory to src include path

link = $(cc) $(flags) -o
compile = $(cc) $(flags) -c


# Series
#
test-series: bin/queue.o bin/series.o bin/stack.o bin/test-series.o
	$(link) $@ $^
bin/test-series.o : test/src/series.cc test/inc/series.h inc/series.h
	$(compile) $< -o $@
bin/series.o : src/series.cc inc/series.h
	$(compile) $< -o $@


# Tree
#
test-tree: bin/queue.o bin/stack.o bin/test-tree.o bin/tree.o
	$(link) $@ $^

bin/test-tree.o : test/src/tree.cc inc/queue.h inc/stack.h test/inc/tree.h \
                  inc/tree.h
	$(compile) $< -o $@

bin/tree.o : src/tree.cc inc/tree.h
	$(compile) $< -o $@


# Queue
#
test-queue: bin/test-queue.o
	$(link) $@ $^

bin/test-queue.o : test/src/queue.cc test/inc/queue.h inc/queue.h.gch
	$(compile) $< -o $@

inc/queue.h.gch : inc/queue.h src/queue.cc 
	$(compile) $< -o $@


# Stack
#
test-stack: bin/test-stack.o bin/stack.o
	$(link) $@ $^

bin/test-stack.o : test/src/stack.cc test/inc/stack.h inc/stack.h.gch
	$(compile) $< -o $@

inc/stack.h.gch : inc/stack.h src/stack.cc
	$(compile) $< -o $@

# Clean up
clean:
	@rm -f bin/* test-*
