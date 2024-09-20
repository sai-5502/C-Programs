#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *addr;
};

struct node *add_begin(struct node *head,int data){
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->data=data;
	new->addr=head;
	head=new;
	return head;
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

int count_nodes(struct node *head){
	struct node *temp=head;
	while (temp != NULL){
		return 1+count_nodes(temp=temp->addr);
	}
}

void main(){
	struct node *head=NULL;
	head=add_begin(head,9);
	head=add_begin(head,8);
	head=add_begin(head,7);
	head=add_begin(head,6);
	head=add_begin(head,5);
	head=add_begin(head,4);
	head=add_begin(head,3);
	head=add_begin(head,2);
	head=add_begin(head,1);
	display(head);
	printf("the nodes present in the list = %d\n",count_nodes(head) );
}
