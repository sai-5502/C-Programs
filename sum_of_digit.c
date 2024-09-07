#include <stdio.h>
void main(){
	int m,n,re,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	m=n;
	while (m>0){
		re=m%10;
		sum+=re;
		m/=10;
	}
	printf("the sum of the given number(%d) is %d\n",n,sum);
}

