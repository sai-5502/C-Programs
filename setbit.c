#include <stdio.h>
#include <stdlib.h>

void main(int argc,char *argv[]){
	int num=atoi(argv[1]);
	int pos=atoi(argv[2]);

	printf("%d",num | (1<<pos) );
}
