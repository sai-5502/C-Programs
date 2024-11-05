#include <stdio.h>

#define SIZE 10

int front=-1;
int rear=-1;

void enqueue(int q[],int num){
	if (front == SIZE-1 && rear == SIZE-1){
		printf("The queue is full\n");
		return;
	}
	else if (front == -1 && rear == -1){
		front = rear = 0;
		q[front]=num;
	}
	else{
		rear++;
		q[rear]=num;
	}
}

int dequeue(int q[]){
	int n;
	if (front == -1 && rear == -1){
		printf("The queue is empty\n");
		return -1;
	}
	else if (front == rear){
		n=q[front];
		front = rear = -1;
		return n;
	}
	else{
		n=q[front];
		front++;
		return n;
	}
}

void display(int q[]){
	int i;
	for (i=front;i<=rear;i++){
		printf("%d ",q[i]);
	}
	printf("\n");
}

void main(){
	int q[SIZE];
	int n;
	enqueue(q,1);
	enqueue(q,2);
	enqueue(q,3);
	enqueue(q,4);
	enqueue(q,5);
	display(q);
	n=dequeue(q);
	printf("The element removed from the queue is %d\n",n);
	display(q);
	n=dequeue(q);
	printf("The element removed from the queue is %d\n",n);
	display(q);
	enqueue(q,6);
	enqueue(q,7);
	display(q);
}
