#include <stdio.h>

void bubble_sort(int a[], int l){
	int i,j,temp=0;
	for (i=0;i<l-1;i++){
		for (j=0;j<l-1;j++){
			if (a[j] > a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

void print(int a[],int l){
	int i;
	for (i=0;i<l;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main(){
	int a[]={6,9,2,1,8,5,7,3,4,0};
	int l=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,l);
	print(a,l);
}
