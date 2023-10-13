# use g++ compiler
cc = g++

# add parent to include path and linter root
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


test-word-finder : bin/test-word-finder.o bin/word-finder.o
	$(link) $@ $^

test-word-finder-style: src/word_finder.cc inc/word_finder.h
	cpplint --root=$(path) $^

bin/test-word-finder.o : src/test_word_finder.cc inc/test_word_finder.h \
                         inc/word_finder.h
	$(compile) -o $@ $<

bin/word-finder.o : src/word_finder.cc inc/word_finder.h
	$(compile) -o $@ $<

clean:
	@rm -f bin/* test-word-finder
