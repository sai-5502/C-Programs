#include <stdio.h>

void main(){
	int a[]={5,6,4,5,2,1,3,0,1,7,8,9,5,4,1,2,3,0,0,9,9,8,5,2,5};
	int l=sizeof(a)/sizeof(a[0]);
	int i,j,k,count;
	
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");

	for (i=0;i<l;i++){
		count=1;
		for(j=i+1;j<l;j++){
			if (a[i] == a[j]){
				count++;
				for (k=j;k<l-1;k++)
					a[k]=a[k+1];
				j--;
				l--;
			}
		}
		printf("the element %d is present at %d times\n",a[i],count);
	}
	
	for (i=0;i<l;i++)
		printf("%d ",a[i]);
	printf("\n");
}
