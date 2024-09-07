#include <stdio.h>
#include <stdlib.h>
void main(int argc,char *argv[]){
	int min=atoi(argv[1]);
	int max=atoi(argv[2]);
	int i,j;

	for (i=min;i<=max;i++){
		for (j=2;j<i;j++){
			if (i%j == 0)
				break;
		}
		if (i==j)
			printf("%d  ",i);
	}
}

	


