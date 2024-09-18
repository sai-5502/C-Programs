#include <stdio.h>
#include "sorting.h"

void selection_sort(int a[],int l){
	int i,j,temp;

	for (i=0;i<l-1;i++){
		for (j=i+1;j<l;j++){
			if (a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
