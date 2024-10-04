#include <stdio.h>

int fact(int n){
	if (n == 1)
		return 1;
	return n*fact(n-1);
}

void main(){
	int n,f;
	printf("enter the number:");
	scanf("%d",&n);

	if (n == 0)
		printf("the factorial of the %d is 1\n",n);
	else{
		f=fact(n);
		printf("the factorial of the %d is %d\n",n,f);
	}
}
