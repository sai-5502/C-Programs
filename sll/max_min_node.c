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

void max_min(struct node *head){
	struct node *temp=head;

	if (temp == NULL)
		printf("the list is empty\n");
	else{
		int max=temp->num;
		int min=temp->num;
		while (temp != NULL){
			if (temp->num > max)
				max=temp->num;
			if (temp->num < min)
				min=temp->num;
			temp=temp->next;
		}
		printf("the maximum element in the list = %d\n",max);
		printf("the minimum element in the list = %d\n",min);
	}	
}
		
	
void main(){
	struct node *head=NULL;
	int max=0;
	head=add_end(head,5);
	head=add_end(head,2);
	head=add_end(head,6);
	head=add_end(head,9);
	head=add_end(head,3);
	head=add_end(head,7);
	head=add_end(head,0);
	head=add_end(head,8);
	head=add_end(head,4);
	head=add_end(head,1);
	display(head);
	max_min(head);

}

