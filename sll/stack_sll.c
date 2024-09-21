#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *addr;
};

struct node *top=NULL;

void push(int data){
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return;
	}
	new->data=data;
	new->addr=top;
	top=new;
}

int pop(){
	int n;
	struct node *temp=top;
	if (temp == NULL){
		printf("stack is empty\n");
	}
	else{
		n=temp->data;
		top=temp->addr;
		free(temp);
		return n;
	}
}

void display(){
	struct node *temp=top;

	if (temp == NULL)
		printf("the stack is empty\n");
	else{
		while (temp != NULL){
			printf("%d --> ",temp->data);
			temp=temp->addr;
		}
		printf("NULL\n");
	}
}

void main(){
	int n;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
	n=pop();
	printf("the element pop from the stack = %d\n",n);
	display();
	n=pop();
	printf("the element pop from the stack = %d\n",n);
	display();
	n=pop();
	n=pop();
	display();
	n=pop();
	n=pop();
	display();
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	display();
}
