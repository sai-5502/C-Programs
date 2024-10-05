#include <stdio.h>

void recursion(int a[],int min,int max){
	int temp;
	if (min<max){
		temp=a[min];
		a[min]=a[max];
		a[max]=temp;
	}
	else
		return;
	recursion(a,min+1,max-1);
}

void main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int i,l;
	l=sizeof(a)/sizeof(a[0]);
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
	recursion(a,0,l-1);
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}
