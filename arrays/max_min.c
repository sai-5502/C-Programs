#include <stdio.h>
#include <stdlib.h>
#define N 5
void main(){
	int a[N],i,min,max;
	for (i=0;i<N;i++)
		scanf("%d",&a[i]);
	printf("the elements are\n");
	for (i=0;i<N;i++)
		printf("%d ",a[i]);
	max=a[0];
	min=a[0];
	
	for (i=1;i<N;i++){
		if (a[i] > max)
			max=a[i];
		else
			min=a[i];
	}
	printf("\nthe maximum element is %d\n",max);
	printf("the minimum element is %d\n",min);
}
