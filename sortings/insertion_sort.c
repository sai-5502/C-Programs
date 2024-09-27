#include <stdio.h>

void display(int a[],int l){
	int i;
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void insertion_sort(int a[],int l){
	int i,j,key;
	for (i=1;i<l;i++){
		key=a[i];
		for (j=i-1;j>=0 && a[j]>key;j--){
			a[j+1]=a[j];
		}
		a[j+1]=key;
	}
}

void main(){
	int a[]={3,6,7,9,0,1,8,4,2,5};
	int l=sizeof(a)/sizeof(a[0]);
	display(a,l);
	insertion_sort(a,l);
	display(a,l);
}

