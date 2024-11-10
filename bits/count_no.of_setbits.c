#include <stdio.h>

int func(int num){
	int count=0;
	while (num){
		if ( (num&1) == 1 )
			count++;
		func(num=num>>1);
	}
	return count;
}

			
void main(){
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	int count=func(n);
	printf("count = %d \n",count);
}
