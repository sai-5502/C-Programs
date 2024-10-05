#include <stdio.h>

int duplicates(int a[],int l){
	int i=0,j,count;
	for (j=1;j<l;j++){
		if (a[j] != a[i]){
			a[i+1]=a[j];
			i++;
		}
	}
	return i+1;
}

void main(){
	int a[]={0,1,1,2,2,2,3,3,3,3,4,4,4,4,4,5,5,5,5,6,7,8,8,9,9,9,10};
	int l=sizeof(a)/sizeof(a[0]);
	int n=duplicates(a,l);
	int i;
	for (i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}	
