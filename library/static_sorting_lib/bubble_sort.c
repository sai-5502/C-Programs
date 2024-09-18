#include <stdio.h>
#include "sorting.h"

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

