#include <stdio.h>

void main(){
	int num,pos;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	printf("%d\n",num | (1<<pos) );

}
