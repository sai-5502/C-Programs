#include <stdio.h>

void main(){
	int n,num,pos=0,count=0;
	printf("enter the number:");
	scanf("%d",&num);
	n=num;

	while(n){
		if (n & (1<<pos) )
			count++;
		n=n>>1;
	}
	printf("%d\n",count);
}
