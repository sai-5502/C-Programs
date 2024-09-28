dll:main.o libdll.so
	gcc main.o -o dll -L. -ldll
libdll.so:main.o add.o del.o display.o 
	gcc -shared -o libdll.so main.o add.o del.o display.o

main.o:main.c
	gcc -c main.c -o main.o
add.o:add.c
	gcc -c add.c -o add.o
del.o:del.c
	gcc -c del.c -o del.o
display.o:display.c
	gcc -c display.c -o display.o

clean:
	rm -rf *.o dll libdll.so


