#include <stdio.h>
#include "sorting.h"

void display(int a[],int l){
	int i;
	for (i=0;i<l;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}


void main(int argc,char *argv[]) {
	
	int a[]={50,90,10,70,30,0,40,60,80,100,20};
	int l=sizeof(a)/sizeof(a[0]);

	//bubble sort
	printf("BEFORE BUBBLE SORT\n");
	display(a,l);
	bubble_sort(a,l);
	printf("AFTER BUBBLE SORT\n");
	display(a,l);

	//selection sort
	printf("BEFORE SELECTION SORT\n");
	display(a,l);
	selection_sort(a,l);
	printf("AFTER SELECTION SORT\n");
	display(a,l);
}
