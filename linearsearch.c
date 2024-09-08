#include <stdio.h>
int linear_search(int *a,int l,int key);

void main(){
	int a[]={6,1,3,7,9,2,8,4,5,0};
	int l=sizeof(a)/sizeof(a[0]);
	int i,key,pos;

	printf("enter the key:");
	scanf("%d",&key);
	pos=linear_search(a,l,key);
	
	if (pos>=0)
		printf("the key(%d) is found at the (%d)position\n",key,pos);
	else
		printf("the key(%d) is not found\n",key);
}

int linear_search(int a[],int l,int key){
	int i;
	for (i=0;i<l;i++){
		if (a[i]==key)
			return i;
	}
	return -1;
}
