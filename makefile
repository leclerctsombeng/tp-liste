exe : main.o liste.o
	gcc -o exe main.o liste.o
main.o : main.c liste.c
	gcc -c main.c
liste.o : liste.c liste.h
	gcc -c liste.c
clean:
	rm -f *.o
