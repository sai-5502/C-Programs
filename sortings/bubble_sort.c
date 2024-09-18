#include <stdio.h>

void bubble_sort(int a[],int l){
	int i,j,temp;
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
	for (i=0;i<l-1;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void main(){
	int a[]={25,10,5,15,20,35,30,50,45,40};
	int l=sizeof(a)/sizeof(a[0]);
	bubble_sort(a,l);
	print(a,l);
}
