pcalc: pcalc.o stack.o
	gcc -o pcalc pcalc.o stack.o

pcalc.o: stack.h
	gcc -c pcalc.c

stack.o: stack.c stack.h
	gcc -c stack.c
