
sll:dynamic_main.o libsll.so
	gcc dynamic_main.o -L. -lsll
libsll.so:dynamic_main.o add.o del.o mid.o count.o Nth.o reverse.o
	gcc -shared -o libsll.so add.o del.o mid.o count.o Nth.o reverse.o
dynamic_main.o:dynamic_main.c
	gcc -c dynamic_main.c -o dynamic_main.o
add.o:add.c
	gcc -c add.c -o add.o
del.o:del.c
	gcc -c del.c -o del.o
mid.o:mid.c
	gcc -c mid.c -o mid.o
count.o:count.c
	gcc -c count.c -o count.o
Nth.o:Nth.c
	gcc -c Nth.c -o Nth.o
reverse.o:reverse.c
	gcc -c reverse.c -o reverse.o

clean:
	rm -rf *.o a.out libsll.so
