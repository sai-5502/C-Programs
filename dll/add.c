#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

struct node *newnode(struct node *new){
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
	struct node *new=newnode(new);
	new->num=num;
	
	if (head == NULL){
		head=new;
		return head;
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
	struct node *new=newnode(new);
	new->num=num;
	
	if (head == NULL){
		head=new;
		return head;
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
	struct node *temp=head,*a=head;
	int i,l=0;
	while (a != NULL){
		l++;
		a=a->next;
	}
	if (pos<1 || pos>l){
		printf("invalid position\n");
		return head;
	}
	else if (pos == 1){
		head=add_begin(head,num);
		return head;
	}
	else{
		struct node *p;
		struct node *new=newnode(new);
		new->num=num;

		for (i=1;i<pos-1 && temp != NULL;i++){
			temp=temp->next;
		}
		p=temp->next;
	
		new->prev=temp;
		new->next=p;
		temp->next=new;
		p->prev=new;
	}
	return head;
}


