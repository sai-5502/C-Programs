#include <stdio.h>


void selection_sort(int a[], int l){
	int i,j,temp=0;
	for (i=0;i<l-1;i++){
		for (j=i+1;j<l;j++){
			if (a[i] > a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	selection_sort(a,l);
	print(a,l);
}
