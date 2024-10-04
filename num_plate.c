#include <stdio.h>
		
int func(int num){
	int sum=0;
	while (num){
		sum=sum+num%10;
		num/=10;
	}
	return sum;
}

void main(){
	int num,sum=0,re;
	printf("enter the number:");
	scanf("%d",&num);

	if (num >=1000 && num <=10000){
		while (num >= 10){
			sum=func(num);
			num=sum;
		}
		printf("%d",sum);
	}
	else
		printf("Invalid number\n");
}
