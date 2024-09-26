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

struct node *add(struct node *head1,struct node *head2){
	struct node *temp1=reverse(head1);
	display(temp1);
	struct node *temp2=reverse(head2);
	display(temp2);
	struct node *head3=NULL;
	int sum=0,carry=0;
	while (temp1 && temp2){
		sum=(carry+temp1->num+temp2->num);
		carry=(sum)/10;
		head3=add_begin(head3,sum%10);
		temp1=temp1->next;
		temp2=temp2->next;
	}

	while(temp1){
		sum=(carry+temp1->num);
		carry=(sum)/10;
		head3=add_begin(head3,sum%10);
		temp1=temp1->next;
	}

	while(temp2){
		sum=(carry+temp2->num);
		carry=(sum)/10;
		head3=add_begin(head3,sum%10);
		temp2=temp2->next;
	}

	if (carry)
		head3=add_begin(head3,carry);
	return head3;
}

void main(){
	struct node *head1=NULL;
	struct node *head2=NULL;
	head1=add_begin(head1,9);
	head1=add_begin(head1,8);
	head1=add_begin(head1,7);
	head1=add_begin(head1,6);
	head1=add_begin(head1,5);
	head1=add_begin(head1,4);
	head1=add_begin(head1,3);
	display(head1);
	head2=add_begin(head2,1);
	head2=add_begin(head2,2);
	head2=add_begin(head2,3);
	head2=add_begin(head2,4);
	display(head2);
	struct node *head3=add(head1,head2);
	display(head3);

}
