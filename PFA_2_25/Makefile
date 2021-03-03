CC = g++ -c -Wall -ansi -pedantic
LN = g++

OBJS = main.o PartiallyFilledArray.o


pfa: $(OBJS)
	$(LN) -o pfa $(OBJS)

main.o: main.cpp PartiallyFilledArray.hpp
	$(CC) main.cpp

PartiallyFilledArray.o: PartiallyFilledArray.cpp PartiallyFilledArray.hpp
	$(CC) PartiallyFilledArray.cpp

clean:
	/bin/rm -f $(OBJS) pfa *~
