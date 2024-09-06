#include <stdio.h>
void main(){
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	
	for (i=2;i<n;i++){
		if (n%i==0)
			break;
	}

	if (i==n)
		printf("the number(%d) is a prime",n);
	else
		printf("the number(%d) is not a prime",n);
}
