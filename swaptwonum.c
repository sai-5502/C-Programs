#include <stdio.h>
void swap1(int *a,int *b);
int swap2(int a,int b);
void swap3(int a,int b);
void swap4(int a,int b);


void main(){
	int a,b,temp;
	printf("enter the a value:");
	scanf("%d",&a);
	printf("enter the b value:");
	scanf("%d",&b);
	swap1(&a,&b);
	printf("a=%d b=%d\n",a,b);
	swap2(a,b);
	printf("a=%d b=%d\n",a,b);
	swap3(a,b);
	printf("a=%d b=%d\n",a,b);
	swap4(a,b);
	printf("a=%d b=%d\n",a,b);
}

void swap1(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}


int swap2(int a,int b){
	return a=a*b/(b=a);
}

void swap3(int x,int y){
	x=x+y;
	y=x-y;
	x=x-y;
}

void swap4(int a,int b){
	a=a^b;
	b=a^b;
	a=a^b;
}

