#include <stdio.h>

void main(){
	int a[10],n,i,sum;
	printf("enter the size of an array:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("the array elements are\n");
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<n;i++)
		sum+=a[i];
	printf("sum of the array = %d\n",sum);
}
