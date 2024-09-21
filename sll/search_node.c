#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *next;
};

struct node *add_end(struct node *head,int num){
	struct node *new=NULL;
	struct node *temp=head;
	new=(struct node *)malloc(sizeof(struct node));
	new->num=num;
	if (head == NULL){
		new->next=head;
		head=new;
	}
	else{
		while (temp->next != NULL)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

void display(struct node *head){
	struct node *temp=head;

	if (temp==NULL)
		printf("list is empty\n");
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}

int search_node(struct node *head,int ele){
	struct node *temp=head;
	int index=1;
	
	while (temp != NULL){
		if (temp->num == ele)
			return index;
		temp=temp->next;
		index++;
	}	
	return -1;	
}

void main(){
	struct node *head=NULL;
	struct node *temp=NULL;
	int index=0;
	head=add_end(head,1);
	head=add_end(head,2);
	head=add_end(head,3);
	head=add_end(head,9);
	head=add_end(head,5);
	head=add_end(head,6);
	head=add_end(head,7);
	display(head);
	index=search_node(head,10);
	if (index == -1)
		printf("the element is not present in the list\n");
	else
		printf("the element(10) present in the list at index of %d\n",index);

}

