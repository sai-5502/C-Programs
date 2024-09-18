#include <stdio.h>
#include <stdlib.h>
#include "sll.h"

struct node *add_begin(struct node *head,int num){
	struct node *new=NULL;
	new = (struct node *)malloc(sizeof(struct node)) ;
	
	if(new == NULL) {
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	new->next=head;
	head=new;
	return head;
}	

struct node *add_end(struct node *head,int num){
	struct node *new=NULL;
	struct node *temp=head;

	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	if (temp == NULL){
		new->next=head;
		head=new;
	}
	else{
		while(temp->next != NULL)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

struct node *add_position(struct node *head,int num,int pos){
	struct node *new=NULL;
	struct node *temp=head;
	int i;
	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}

	for (i=1;i<pos-1 && temp!=NULL;i++)
		temp=temp->next;

	if (pos == 1){
		printf("list is empty\n");
		head=add_begin(head,num);
		return head;
	}
	else{
		new->num=num;
		new->next=temp->next;
		temp->next=new;
		return head;
	}
}

		
	
void traverse_list(struct node *head){
	struct node *temp=head;

	if (temp == NULL){
		printf("the list is empty\n");
	}
	else{
		while(temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
	printf("NULL\n");
	}
}


void main(){
	struct node *head=NULL;

	head=add_begin(head,5);
	traverse_list(head);
	head=add_begin(head,6);
	traverse_list(head);
	head=add_begin(head,7);
	traverse_list(head);
	head=add_end(head,4);
	traverse_list(head);
	head=add_end(head,3);
	traverse_list(head);
	head=add_end(head,2);
	traverse_list(head);
	head=add_end(head,1);
	traverse_list(head);
	head=add_position(head,10,3);
	traverse_list(head);
}

