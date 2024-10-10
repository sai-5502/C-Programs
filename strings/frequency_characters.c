#include <stdio.h>

void main(int argc,char *argv[]){
	char *a=argv[1];
	int i,j,k,count;
	int l=sizeof(a)/sizeof(a[0]);
	printf("%s\n",a);

	for (i=0;i<l;i++){
		count=1;
		for (j=i+1;j<l;j++){
			if (a[i] == a[j]){
				count++;
				for (k=j;k<l-1;k++)
					a[k]=a[k+1];
				j--;
				l--;
			}
		}
		printf("the character(%c) is %d times present in the string\n",a[i],count);
	}
	printf("%s\n",a);
}
