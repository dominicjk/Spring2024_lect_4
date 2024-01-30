CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall -Werror # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!
# all the flags we use with our compiler

all: test main

clean:
	rm test main

main: main.cpp Point.cpp Point.h
	$(CXX) $(CXXFLAGS) main.cpp -o main 

test : test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test
