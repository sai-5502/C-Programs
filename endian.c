#include <stdio.h>

void main(){
	int a=0x0F000001;
	char *b=&a;
	if (*b == 0x0F)
		printf("it is a big endian\n");
	else
		printf("it is a little endian\n");
}
