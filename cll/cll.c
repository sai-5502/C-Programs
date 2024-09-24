#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *next;
};


struct node *add_begin(struct node *head,int num){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}

	if (head == NULL){
		head=new;
		new->num=num;
		new->next=head;
		return head;
	}
	else{
		new->num=num;
		while (temp->next != head)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
		head=new;
	}
	return head;
}
	
struct node *add_end(struct node *head,int num){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}

	if (head==NULL){
		head=new;
		new->num=num;
		new->next=head;
		return head;
	}
	else{
		new->num=num;
		while(temp->next != head)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

void display(struct node *head){
	struct node *temp=head;

	if (temp==NULL)
		printf("the list is empty\n");
	else{
		while (temp->next != head){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("%d\n",temp->num);
	}
}	

void main(){
	struct node *head=NULL;
	head=add_begin(head,6);
	head=add_begin(head,7);
	head=add_begin(head,8);
	head=add_begin(head,9);
	head=add_begin(head,10);
	display(head);
	head=add_end(head,1);
	head=add_end(head,2);
	head=add_end(head,3);
	head=add_end(head,4);
	head=add_end(head,5);
	display(head);
}
