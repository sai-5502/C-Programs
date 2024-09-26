#include <stdio.h>
#include <stdlib.h>

struct node{
	int num;
	struct node *next;
};

struct node *add_begin(struct node *head,int num){
	struct node *new=NULL;
	struct node *temp=head;
	new=(struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("malloc is failed\n");
		return NULL;
	}
	new->num=num;
	new->next=head;
	head=new;
	return head;
}

struct node *reverse(struct node *head){
	struct node *prev=NULL;
	struct node *cur=head;
	struct node *next;
	while (cur != NULL){
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	head=prev;
	return prev;
}

void display(struct node *head){
	struct node *temp=head;
	if (temp == NULL){
		printf("list is empty\n");
	}
	else{
		while (temp != NULL){
			printf("%d --> ",temp->num);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}

struct node *sub(struct node *head1,struct node *head2){
	struct node *temp1=reverse(head1);
	display(temp1);
	struct node *temp2=reverse(head2);
	display(temp2);
	struct node *head3=NULL;
	int sum=0,borrow=0;
	while (temp1 && temp2){
		sum=borrow+temp1->num-temp2->num;
		if (sum<0){
			borrow=-1;
			sum=sum+10;
		}
		else
			borrow=0;
			
		head3=add_begin(head3,sum);
		temp1=temp1->next;
		temp2=temp2->next;
	}

	while (temp1){
		sum=borrow+temp1->num;
		if (sum<0){
			borrow=-1;
			sum=sum+10;
		}
		else
			borrow=0;
		head3=add_begin(head3,sum);
		temp1=temp1->next;
	}
	while (temp1){
		sum=borrow+temp1->num;
		if (sum<0){
			borrow=-1;
			sum=sum+10;
		}
		else
			borrow=0;
		head3=add_begin(head3,sum);
		temp1=temp1->next;
	}

	return head3;
}

void main(){
	struct node *head1=NULL;
	struct node *head2=NULL;
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	head1=add_begin(head1,1);
	display(head1);
	head2=add_begin(head2,9);
	head2=add_begin(head2,9);
	head2=add_begin(head2,9);
	head2=add_begin(head2,9);
	display(head2);
	struct node *head3=sub(head1,head2);
	display(head3);
}
