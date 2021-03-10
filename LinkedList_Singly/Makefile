CC = g++ -c -g -Wall -ansi -pedantic

LN = g++

OBJS = main.o StringList.o StringNode.o

listTest: $(OBJS)
	$(LN) -o listTest $(OBJS)

main.o: main.cpp StringNode.hpp
	$(CC) main.cpp

StringList.o: StringList.cpp StringList.hpp StringNode.hpp
	$(CC) StringList.cpp

StringNode.o: StringNode.cpp StringNode.hpp
	$(CC) StringNode.cpp


clean:
	/bin/rm -f $(OBJS) *~ listTest
