main: main.o Racional.o
	g++ main.o Racional.o -o main

main.o: main.cpp Racional.h
	g++ -c main.cpp

Racional.o: Racional.h

clean:
	rm -f *.o main
