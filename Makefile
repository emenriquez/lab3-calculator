all: a.out

test: a.out
	./a.out "$(try)" 

a.out: tests.cpp Calculator.h
	g++ -std=c++11 tests.cpp

b.out: demo.cpp Calculator.h
	g++ -std=c++11 demo.cpp

demo: b.out
	./b.out

clean:
	rm a.out
