#include <stdio.h>
#include <string.h>
int my_strlen(int *a);
int binary_search(int a[],int key,int l);

void main(){
	int a[]={1,3,5,7,9,10,12,14,16,18,20,21,24,27,30};
	int key;
	printf("enter the key:\n");
	scanf("%d",&key);
	int i,l;
	l=sizeof(a)/sizeof(a[0]);
	i=binary_search(a,key,l);
	
	if (i == -1)
		printf("the key is not found in the array\n");
	else
		printf("the key is found in the (%d) position\n",i);  
		
}


int binary_search(int a[],int key,int l){
	int f=0,mid;

	while (f<=l){
		mid=( (f+l) /2);
		if (key == a[mid])
			return mid;
		else if  (key > a[mid])
			f=mid+1;
		else
			l=mid-1;
	}
	return -1;
}

