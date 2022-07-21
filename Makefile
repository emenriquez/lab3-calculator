all: a.out

test: a.out
	./a.out "$(try)" 

a.out: tests.cpp Calculator.h
	g++ -std=c++11 tests.cpp



clean:
	rm a.out
