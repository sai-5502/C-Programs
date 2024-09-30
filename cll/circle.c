#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node *add_begin(struct node *head,int num){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	if (temp == NULL){
		head=new;
		new->next=head;
	}
	else{
		while (temp->next != head)
			temp=temp->next;
		temp->next=new;
		new->next=head;
		head=new;
	}
	return head;
}

struct node *add_end(struct node *head,int num){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	if (temp == NULL){
		head=new;
		new->next=head;
	}
	else{
		while (temp->next != head)
			temp=temp->next;
		temp->next=new;
		new->next=head;
	}
	return head;
}

void display(struct node *head){
	struct node *temp=head;
	while (temp->next != head){
		printf("%d --> ",temp->num);
		temp=temp->next;
	}
	printf("%d\n",temp->num);
}

struct node *add_position(struct node *head,int num,int pos){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	if (pos == 1){
		printf("not possible to insert an element in this position\n");
	}
	else{
		new=(struct node *)malloc(sizeof(struct node));
		if(new == NULL){
			printf("malloc is failed\n");
			return NULL;
		}
		new->num=num;
		while (pos-1 != 1 && temp != NULL){
			temp=temp->next;
			pos--;
		}
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}		

void main(){
	struct node *head=NULL;
	head=add_begin(head,3);
	head=add_begin(head,2);
	head=add_begin(head,1);
	display(head);
	head=add_end(head,4);
	head=add_end(head,5);
	display(head);
	head=add_position(head,6,4);
	head=add_position(head,7,5);
	head=add_position(head,7,1);
	display(head);
}
