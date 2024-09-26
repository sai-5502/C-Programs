#include <stdio.h>
#include <stdlib.h>

struct node {
	int num;
	struct node *next;
};

struct node *add_end(struct node *head,int num){
	struct node *new=NULL;
	struct node *temp=head;

	new=(struct node *)malloc(sizeof(struct node));
	if (new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	if (temp == NULL){
		new->next=head;
		head=new;
		return head;
	}
	else{
		while(temp->next != NULL)
			temp=temp->next;
		new->next=temp->next;
		temp->next=new;
	}
	return head;
}

void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL)
		printf("list is empty\n");
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}

struct node *reverse(struct node *head){
	struct node *prev,*prsnt,*next;
	prev=NULL;
	prsnt=head;

	while (prsnt != NULL){
		next=prsnt->next;
		prsnt->next=prev;
		prev=prsnt;
		prsnt=next;
	}
	head=prev;
	return head;
}
	
int palin(struct node *head){
	struct node *a,*b,*temp;
	a=b=temp=head;
	while (b->next && b->next->next){
		a=a->next;
		b=b->next->next;
	}
	struct node *newnode=reverse(a->next);
	struct node *new=newnode;
	display(newnode);
	
	while (newnode){
		if (newnode->num != temp->num){
			reverse(new);
			return -1;
		}
		newnode=newnode->next;
		temp=temp->next;
	}
	reverse(new);
	return 0;
}
	
void main(){
	struct node *head=NULL;
	head=add_end(head,1);
	head=add_end(head,2);
	head=add_end(head,3);
	head=add_end(head,2);
	head=add_end(head,1);
	display(head);
	int n=palin(head);

	if (n == -1)
		printf("It is not a palindrome\n");
	else
		printf("It is a palindrome\n");
	display(head);
}
