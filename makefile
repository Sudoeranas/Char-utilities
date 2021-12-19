all: tp5_squelette.c chaine5.o chaine4.o
	gcc chaine4.o chaine5.o tp5_squelette.c -o tp5.exe

chaine5.o: chaine5.c
	gcc -c chaine5.c -o chaine5.o

clean:
	rm -rf *.exe chaine5.o
