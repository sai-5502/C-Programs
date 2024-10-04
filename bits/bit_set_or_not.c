#include <stdio.h>

void main(){
	int num,pos;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	(num & (1<<pos)) ? printf("the bit is set\n") : printf("the bit is not set\n");

}
