#include <stdio.h>

void main(){
	int n,i,j;
	printf("enter the number:");
	scanf("%d",&n);

	for (i=0;i<=n;i++){
		for (j=2;j<i;j++){
			if (i%j==0)
				break;
		}
		if (i==j)
			printf("%d ",i);
	}
	printf("\n");
}
	
