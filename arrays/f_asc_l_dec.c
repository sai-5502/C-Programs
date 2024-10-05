#include <stdio.h>

void main(){
	int a[]={8,5,2,1,4,7,9,6,3};
	int i,j,temp,l=sizeof(a)/sizeof(a[0]);

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

	for (i=(l/2);i<l-1;i++){
		for (j=(l/2);j<l-1;j++){
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
