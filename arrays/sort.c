#include <stdio.h>

void main(){
	int a[]={5,8,2,0,1,4,7,9,6,3};
	int temp,l,i,j;
	l=sizeof(a)/sizeof(a[0]);
	
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<l-1;i++){
		for (j=0;j<l-1;j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	for (i=0;i<l-1;i++){
		for (j=0;j<l-1;j++){
			if (a[j]<a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}

