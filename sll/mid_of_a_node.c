#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *next;
};

struct node *add_begin(struct node *head,int num){
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	new->next=head;
	head=new;
	return head;
}

struct node *mid_node(struct node *head){
	struct node *a=head;
	struct node *b=head;

	while (b != NULL && b->next !=NULL){
		a=a->next;
		b=b->next->next;
	}
	return a;
}

void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL){
		printf("the stack is empty\n");
	}
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
	

void main(){
	struct node *head=NULL;
	struct node *mid=NULL;
	head=add_begin(head,1);
	head=add_begin(head,2);
	head=add_begin(head,3);
	head=add_begin(head,4);
	display(head);
	mid=mid_node(head);
	printf("%d\n",mid->num);

}

