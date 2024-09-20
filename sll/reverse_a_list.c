#include <stdio.h>
#include "stdlib.h"

struct node {
	int data;
	struct node *addr;
};

struct node *add_end(struct node *head,int data){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->data=data;
	
	if (temp == NULL){
		new->addr=head;
		head=new;
		return head;
	}
	else{
		while (temp->addr != NULL)
			temp=temp->addr;
		new->addr=temp->addr;
		temp->addr=new;
		return head;
	}
}

void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL)
		printf("list is empty\n");
	else{
		while (temp != NULL){
			printf("%d --> ",temp->data);
			temp=temp->addr;
		}
		printf("NULL\n");
	}
}

struct node *reverse_list(struct node *head){
	struct node *prev,*prsnt,*next;
	prev=NULL;
	prsnt=head;

	while (prsnt != NULL){
		next=prsnt->addr;
		prsnt->addr=prev;
		prev=prsnt;
		prsnt=next;
	}
	head=prev;
	return head;
}
	
void main(){
	struct node *head=NULL;
	head=add_end(head,1);
	head=add_end(head,2);
	head=add_end(head,3);
	head=add_end(head,4);
	head=add_end(head,5);
	head=add_end(head,6);
	head=add_end(head,7);
	head=add_end(head,8);
	head=add_end(head,9);
	head=add_end(head,10);
	display(head);
	head=reverse_list(head);
	display(head);

}

		
