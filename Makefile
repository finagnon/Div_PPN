
CC=gcc
EXE = divi

.PHONY: clean main

all: divi

divi: divi.c
	$(CC) divi.c  -o $(EXE)

clean:
	rm -Rf *~ *.o $(EXE)                               