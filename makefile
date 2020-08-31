all: a.out

a.out: test.cpp
	g++ -Ixbyak test.cpp
