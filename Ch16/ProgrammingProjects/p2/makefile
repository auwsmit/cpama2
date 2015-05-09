inventory: inventory.o read_line.o
	gcc -o inventory inventory.o read_line.o

inventory.o: inventory.c read_line.h
	gcc -c inventory.c

read_line.o: read_line.c read_line.h
	gcc -c read_line.c
