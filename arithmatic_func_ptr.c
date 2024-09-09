#include <stdio.h>

int add(int a,int b){
	return a+b;
}

int sub(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int div(int a,int b){
	return a/b;
}

int mod(int a,int b){
	return a%b;
}

void main(){
	int a,b,res;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);

	int (*func)(int a,int b);

	func=add;
	res=func(a,b);
	printf("addition=%d\n",res);
	
	func=sub;
	res=func(a,b);
	printf("subtraction=%d\n",res);
	
	func=mul;
	res=func(a,b);
	printf("multiplication=%d\n",res);
	
	func=div;
	res=div(a,b);
	printf("division=%d\n",res);
	
	func=mod;
	res=func(a,b);
	printf("modulus=%d\n",res);
}
