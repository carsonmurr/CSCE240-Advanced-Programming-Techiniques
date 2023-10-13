cc = g++  # use g++ compiler

standard = c++17

path = ..

flags = -std=$(standard)  # compile with standard
flags += -Wall  # compile with all warnings
flags += -pedantic  # even more warnings
flags += -I $(path)  # add parent to preprocessor include path
flags += -g  # include gdb instrumentation

link = $(cc) $(flags) -o  # final linked build to binary executable

compile = $(cc) $(flags) -c -o  # compilation to intermediary .o files

test-queue: bin/test-queue.o bin/queue.o
	$(link) $@ $^
test-stack: bin/test-stack.o bin/stack.o
	$(link) $@ $^

bin/test-queue.o : test/src/queue.cc test/inc/queue.h inc/queue.h
	$(compile) $@ $<
bin/test-stack.o : test/src/stack.cc test/inc/stack.h inc/stack.h
	$(compile) $@ $<

bin/queue.o : src/queue.cc inc/queue.h
	$(compile) $@ $<
bin/stack.o : src/stack.cc inc/stack.h
	$(compile) $@ $<

style : src/*.cc inc/*.h
	cpplint --root=$(path) $^

clean:
	@rm -f bin/* test-stack test-queue
