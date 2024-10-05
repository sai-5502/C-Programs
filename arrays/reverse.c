#include <stdio.h>

void main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int i,l,temp,min,max;
	l=sizeof(a)/sizeof(a[0]);
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	for (i=0;i<(l/2);i++){
		temp=a[i];
		a[i]=a[l-i-1];
		a[l-i-1]=temp;
	}

	for (i=0;i<l;i++)
		printf("%d ",a[i]);
}	
