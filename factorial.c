#include <stdio.h>
#include <stdlib.h>
int fact(int n);
void main(int argc,char *argv[]){
	int a;
	a=fact(atoi(argv[1]));
	printf("the factorial of the number is %d",a);
}
int fact(int n){
	if (n==1)
		return 1;
	return n*fact(n-1);
}
