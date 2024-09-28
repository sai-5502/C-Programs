#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

struct node *del_begin(struct node *head){
	struct node *temp=head;
	if (temp == NULL){
		printf("the list is empty to delete at begin\n");
		return NULL;
	}
	else{
		head=temp->next;
		head->prev=temp->prev;
		free(temp);
	}
	return head;
}

struct node *del_end(struct node *head){
	struct node *temp=head;
	struct node *p;
	if (temp == NULL){
		printf("the list is empty to delete at end\n");
		return NULL;
	}
	else{
		while (temp->next != NULL){
			p=temp;
			temp=temp->next;
		}
		p->next=temp->next;
		free(temp);
	}
	return head;
}

struct node *del_position(struct node *head,int pos){
	struct node *temp=head;
	int i;
	for (i=1;i<pos && temp != NULL;i++)
		temp=temp->next;
	if (pos == 1){
		head=del_begin(head);
		return head;
	}
	else{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
	return head;
}


