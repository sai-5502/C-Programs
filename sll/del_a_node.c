#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node *add_begin(struct node *head,int num){
	struct node *new=NULL;
	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	new->next=head;
	head=new;
	return head;
}

struct node *add_end(struct node *head,int num){
	struct node *new=NULL;
	struct node *temp=head;
	new=(struct node *)malloc(sizeof(struct node));
	if(new==NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	if (temp == NULL){
		new->num=num;
		new->next=temp;
		temp=new;
		return head;
	}
	else{
		while (temp->next != NULL){
			temp=temp->next;
		}
		new->num=num;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

struct node *add_pos(struct node *head,int num,int pos){
	int i;
	struct node *temp=head;
	struct node *new=NULL;
	
	for (i=1;i<pos-1 && temp != NULL;i++)
		temp=temp->next;
	
	if (pos == 1){
		head=add_begin(head,num);
		return head;
	}
	else{
		new=(struct node *)malloc(sizeof(struct node));;
		if (new==NULL){
			printf("malloc is failed\n");
			return NULL;
		}
		new->num=num;
		new->next=temp->next;
		temp->next=new;
		return head;
	}
}

struct node *del_begin(struct node *head){
	struct node *temp=head;
	if (temp == NULL){
		printf("list is empty\n");
		return NULL;
	}
	else{
		head=temp->next;;
		free(temp);
		return head;
	}
}

struct node *del_end(struct node *head){
	struct node *a=head;
	struct node *b=head;

	if (a == NULL){
		printf("list is empty\n");
		return NULL;
	}
	else{
		while (a->next != NULL){
			b=a;
			a=a->next;
		}
		b->next=a->next;
		free(a);
		return head;
	}
}


void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL)
		printf("the list is empty\n");
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
	head=add_begin(head,7);
	head=add_begin(head,8);
	head=add_begin(head,9);
	display(head);
	head=add_end(head,4);
	head=add_end(head,3);
	head=add_end(head,2);
	head=add_end(head,1);
	head=add_end(head,0);
	display(head);
	head=add_pos(head,6,4);
	head=add_pos(head,5,5);
	display(head);
	head=del_begin(head);
	head=del_begin(head);
	display(head);
	head=del_end(head);
	head=del_end(head);
	display(head);
	head=del_begin(head);
	head=del_end(head);
	display(head);
}
