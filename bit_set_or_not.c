#include <stdio.h>
#include <stdlib.h>
void main(int argc,char *argv[]){
	int num=atoi(argv[1]);
	int pos=atoi(argv[2]);

	( num & (1<<pos) )? printf("the number(%d) is set at the (%d) position",num,pos):printf("the number(%d) is not set at the (%d) position",num,pos);
}
