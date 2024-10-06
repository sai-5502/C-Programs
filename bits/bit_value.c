#include <stdio.h>
#define BIT_VALUE(num,pos) ((num>>pos) & (1))

void main(){
	int num,pos;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("the bit value = %d\n",BIT_VALUE(num,pos) );
}


