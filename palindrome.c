#include <stdio.h>

void main(){
	int n,num,re,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	num=n;
	while (num > 0){
		re=num%10;
		sum=sum*10+re;
		num/=10;
	}
	if (n==sum)
		printf("the given number(%d) is a palindrome\n",n);
	else
		printf("the given number(%d) is not a palindrome\n",n);
}

