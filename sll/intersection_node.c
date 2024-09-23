#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *add_end(struct node *head,int data){
	struct node *temp=head;
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}

	if (temp == NULL){
		new->data=data;
		new->next=head;
		head=new;
		return head;
	}
	else{
		new->data=data;
		while (temp->next != NULL)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL)
		printf("the list is empty\n");
	else{
		while (temp != NULL){
			printf("%d --> ",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}

int intersection_node(struct node *head1,struct node *head2){
	struct node *temp1=head1;
	struct node *temp2=head2;
	int l1=0,l2=0;

	while (temp1 != NULL){
		l1++;
		temp1=temp1->next;
	}
	while (temp2 != NULL){
		l2++;
		temp2=temp2->next;
	}
	int d=l1-l2;
	
	if (l1>l2){
		while(d){
			head1=head1->next;
			d--;
		}
	}
	else{
		while(d){
			head2=head2->next;
			d--;
		}
	}

	while (head1 != NULL && head2 !=NULL){
		if (head1->data == head2->data)
			return head1->data;
		head1=head1->next;
		head2=head2->next;
	}
	return -1;
}


void main(){
	struct node *head1=NULL;
	struct node *head2=NULL;
	head1=add_end(head1,1);
	head1=add_end(head1,2);
	head1=add_end(head1,3);
	head1=add_end(head1,4);
	head1=add_end(head1,5);
	head1=add_end(head1,6);
	head1=add_end(head1,7);
	display(head1);
	display(head2);
	head2=head1->next->next;
	display(head2);
	int n=intersection_node(head1,head2);
	if (n == -1)
		printf("the two lists are not intersected at any node\n");
	else
		printf("the two lists are intersected at node %d\n",n);
}
