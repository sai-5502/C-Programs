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

struct node *Nthnode_from_last(struct node *head,int n){
	struct node *temp=head;
	struct node *p=head;
	while (n && temp !=NULL){
		temp=temp->addr;
		n--;
	}

	if (n==0 && temp != NULL){
		while (temp != NULL){
			p=p->addr;
			temp=temp->addr;
		}
		return p;
	}
	else{
		printf("the nodes are not present upto n \n");
		return NULL;
	}
	

}
void main(){
	struct node *head=NULL;
	struct node *n=NULL;
	head=add_begin(head,10);
	head=add_begin(head,8);
	head=add_begin(head,6);
	head=add_begin(head,4);
	head=add_begin(head,2);
	display(head);
	n=Nthnode_from_last(head,1);
	printf("the 1st node from the list last = %d\n",n->data);
	n=Nthnode_from_last(head,3);
	printf("the 3rd node from the list last = %d\n",n->data);
	n=Nthnode_from_last(head,4);
	printf("the 4th node from the list last = %d\n",n->data);
}
