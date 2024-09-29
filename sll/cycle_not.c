#include <stdio.h>
#include <stdlib.h>
#include "sll.h"

struct node *add_end(struct node *head,int num){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;

	if (temp==NULL){
		new->num=num;
		head=new;
		return head;
	}
	else{
		while (temp->next != NULL)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

struct node *make_cycle(struct node *head){
	struct node *temp=head;
	if (temp==NULL){
		printf("cycle is not possible with empty list\n");
		return NULL;
	}
	else{
		while (temp->next != NULL)
			temp=temp->next;
		temp->next=head;
	}
	return head;
}

struct node *cycle_not(struct node *head){
	struct node *temp1=head;
	struct node *temp2=head;
	while (temp2 != NULL && temp2->next != NULL){
		temp1=temp1->next;
		temp2=temp2->next->next;
		if (temp1 == temp2)
			return temp1;
	}
	return NULL;
}

void display(struct node *head){
	struct node *temp=head;

	if (temp==NULL)
		printf("the list is empty\n");
	else{
		while (temp != NULL && temp->next != head){
			printf("%d --> ", temp->num);
			temp=temp->next;
		}
		if (temp == NULL)
			printf("NULL\n");
		else
			printf("%d\n", temp->num);
	}
}

void main(){
	struct node *head=NULL;
	struct node *temp=NULL;
	head=add_end(head,1);
	head=add_end(head,2);
	head=add_end(head,3);
	head=add_end(head,4);
	head=add_end(head,5);
	head=add_end(head,6);
	head=add_end(head,7);
	display(head);
	head=make_cycle(head);
	display(head);
	temp=cycle_not(head);
	if (temp == NULL)
		printf("the linked list is not in a cycle\n");
	else
		printf("the linked list is in the form of cycle at node = %d\n",temp->num);

}
