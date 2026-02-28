CC = gcc
CFLAGS = -Wall -g

all: program

program: mainAlgorithms.o AlgorithmLib.o initializeArrays.o
	$(CC) $(CFLAGS) -o program mainAlgorithms.o AlgorithmLib.o initializeArrays.o

mainAlgorithms.o: mainAlgorithms.c AlgorithmLib.h initializeArrays.h
	$(CC) $(CFLAGS) -c mainAlgorithms.c

AlgorithmLib.o: AlgorithmLib.c AlgorithmLib.h
	$(CC) $(CFLAGS) -c AlgorithmLib.c
initializeArrays.o: initializeArrays.c initializeArrays.h AlgorithmLib.h
	$(CC) $(CFLAGS) -c initializeArrays.c
clean:
	rm -f *.o program