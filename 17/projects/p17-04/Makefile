justify: justify.o line.o word.o
	gcc justify.o line.o word.o -o justify

justify.o: justify.c line.h word.h
	gcc -c justify.c

line.o: line.c line.h
	gcc -c line.c

word.o: word.c word.h
	gcc -c word.c