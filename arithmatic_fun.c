#include <stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

void main(){
	int a,b;
	printf("enter the a,b values\n");
	scanf("%d  %d",&a,&b);

	printf("addition=%d\n",add(a,b));
	printf("subtraction=%d\n",sub(a,b));
	printf("multiplication=%d\n",mul(a,b));
	printf("division=%d\n",div(a,b));
	printf("modulus=%d\n",mod(a,b));
}

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
