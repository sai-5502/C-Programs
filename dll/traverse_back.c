#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *prev;
	struct node *next;
};

struct node *newnode(){
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->prev=NULL;
	new->next=NULL;
}

struct node *add_begin(struct node *head,int num){
	struct node *temp=head;
	struct node *new=newnode();
	new->num=num;
	if (head == NULL){
		head=new;
	}
	else{
		new->next=temp;
		temp->prev=new;
		head=new;
	}
	return head;
}		

struct node *add_end(struct node *head,int num){
	struct node *temp=head;
	struct node *new=newnode();
	new->num=num;
	if (head == NULL){
		head=new;
	}
	else{
		while (temp->next != NULL)
			temp=temp->next;
		temp->next=new;
		new->prev=temp;
	}
	return head;
}
	
struct node *add_position(struct node *head,int num,int pos){
	struct node *temp=head;
	struct node *p=NULL;
	struct node *new=newnode();
	new->num=num;
	if (head == NULL){
		printf("add node at the given position is not possible\n");
		return NULL;
	}
	else{
		while(--pos){
			p=temp;
			temp=temp->next;
		}
		new->prev=temp->prev;
		new->next=p->next;
		p->next=new;
		temp->prev=new;
	}
	return head;
}

void display_forward(struct node *head){
	struct node *temp=head;
	if (head == NULL){
		printf("list is empty\n");
		return;
	}
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}

void display_backward(struct node *tail){
	struct node *temp=tail;
	if (tail == NULL){
		printf("list is empty\n");
		return;
	}
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->prev;
		}
		printf("NULL\n");
	}
}

struct node * traverse(struct node *head){
	struct node *temp=head;
	while (temp->next != NULL)
		temp=temp->next;
	return temp;
}

void main(){
	struct node *head=NULL;
	struct node *tail=NULL;
	head=add_begin(head,3);
	head=add_begin(head,2);
	head=add_begin(head,1);
	head=add_end(head,6);
	head=add_end(head,7);
	head=add_end(head,8);
	display_forward(head);
	head=add_position(head,4,4);
	head=add_position(head,5,5);
	display_forward(head);
	tail=traverse(head);
	display_backward(tail);
}
