#include <stdio.h>

int sorted_or_not(int a[],int l){
	int i;
	for (i=0;i<l;i++){
		if (a[i]<=a[i+1])
			continue;
		else
			return 1;
	}
	return 0;
}

void main(){
	int a[]={0,1,2,3,4,5,6,7,8,9};
	int l;
	l=sizeof(a)/sizeof(a[0]);
	int n=sorted_or_not(a,l);
	if (n == 1)
		printf("the array is not sorted\n");
	else
		printf("the array is sorted\n");

}
