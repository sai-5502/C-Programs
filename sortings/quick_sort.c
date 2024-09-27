#include <stdio.h>

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int a[],int low,int high){
	int pivot=a[high];
	int start=low,end=high;

	while (start < end){
		while (a[start] < pivot)
			start++;
		while (a[end] >= pivot)
			end--;
		if (start < end)
			swap(&a[start],&a[end]);
	}
	swap(&a[start],&a[high]);
	return start;
}

void quick_sort(int a[],int low,int high){
	if (low < high){
		int pi=partition(a,low,high);
		quick_sort(a,low,pi-1);
		quick_sort(a,pi+1,high);
	}
}	

void display(int a[],int l){
	int i;
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void main(){
	int a[]={1,4,7,0,5,5,5,3,6,9};
	int l=sizeof(a)/sizeof(a[0]);
	display(a,l);
	quick_sort(a,0,l-1);
	display(a,l);
}
