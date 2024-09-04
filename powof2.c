#include <stdio.h>
void main(){
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	if ( (n&(n-1)) == 0)
		printf("the number %d is a power of 2\n",n);
	else
		printf("the number %d is not a power of 2\n",n);
}
