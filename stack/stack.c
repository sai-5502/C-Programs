#include <stdio.h>

#define SIZE 8
int top=-1;

void push(int a[],int b) {
	if (top == SIZE-1) {
		printf("the stack is full \n");
		return;
	}
	top++;
	a[top]=b;
	
}

void pop(int a[]){
	if (top == -1){
		printf("the stack is empty\n");
		return;;
	}
	top--;

}

void display(int a[]){
	int i;
	if (top != -1){
		for (i=top;i>=0;i--)
			printf("%d ",a[i]);
		printf("\n");
	}
}

void main(){
	int a[SIZE],value=0;
	push(a,1);
	push(a,3);
	push(a,5);
	push(a,7);
	push(a,9);
	display(a);
	pop(a);display(a);
	pop(a);display(a);
	pop(a);	display(a);
	pop(a);	display(a);
	pop(a);	display(a);
	pop(a);	display(a);
	push(a,2);
	push(a,4);
	push(a,6);
	push(a,8);
	push(a,10);
	display(a);

}
