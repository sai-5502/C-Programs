#include <stdio.h>
#include <stdlib.h>
int my_atoi(char *a);

void main(int argc,char *argv[]){
	int n=my_atoi(argv[1]);
	if (n == 0)
		printf("the string to integer conversion is not possible\n");
	else
		printf("the string to integer conversion = %d\n",n);
}

int my_atoi(char *a){
	int i,num=0,sign=0;
	if (*a == '-'){
		sign=1;
		a++;
	}

	while (*a){
		if (*a < '0' || *a > '9'){
			break;
		}
		else{
			num=(num*10)+*a-48;
			a++;
		}
	}
	if (sign==1)
		num=num*-1;
	return num;
}
	

