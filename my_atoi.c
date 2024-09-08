#include <stdio.h>
#include <stdlib.h>
int my_atoi(char *a,int *b);

void main(int argc,char *argv[]){
	int *b;
	b=(int *)malloc(5*sizeof(int));
	my_atoi(argv[1],b);
	printf("%s\n",argv[1]);
	printf("%ls\n",b);
}

int my_atoi(char *a,int *b){
	while (*a){
		if (*a>='0' && *a<='9'){
			*b=*a;
			*b++;
			*a++;
		}
		else
			break;
			
	}
}		
