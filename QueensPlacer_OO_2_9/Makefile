qsolve: main.o QueensPlacer.o
	g++ -o qsolve main.o QueensPlacer.o

main.o: main.cpp QueensPlacer.hpp
	g++ -c -Wall -ansi -pedantic main.cpp

QueensPlacer.o: QueensPlacer.cpp QueensPlacer.hpp
	g++ -c -Wall -ansi -pedantic QueensPlacer.cpp

clean:
	/bin/rm -f *.o qsolve *~
