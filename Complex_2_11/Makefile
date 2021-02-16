cplx: main.o Complex.o
	g++ -o cplx main.o Complex.o

main.o: main.cpp Complex.hpp
	g++ -c -Wall -ansi -pedantic main.cpp

Complex.o: Complex.cpp Complex.hpp
	g++ -c -Wall -ansi -pedantic Complex.cpp

