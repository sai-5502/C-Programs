#include <stdio.h>
void main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	if (n%2==0)
		printf("the given number %d is even\n",n);
	else
		printf("the given number %d is odd\n",n);
}

