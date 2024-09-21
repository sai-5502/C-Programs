#include <stdio.h>
#include <dlfcn.h>
#include "sll.h"

void main(){
	struct node *head=NULL;
	struct node *temp=NULL;
	int n;

	void *dl=NULL;
	dl=dlopen("./libsll.so",RTLD_LAZY);
	if (dl==NULL)
		printf("the shared library is not present\n");
	else	
		printf("the shared library is present\n");

	struct node* (*func) (struct node *head,int num);
	struct node* (*fun) (struct node *head,int num,int pos);
	struct node* (*fu) (struct node *head);
	int (*c)(struct node *head);
	void (*disp)(struct node *head);	

	//add begin
	func=dlsym(dl,"add_begin");
	if (func==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=func(head,7);
	head=func(head,8);
	head=func(head,9);

	disp=dlsym(dl,"display");
	if(disp==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	disp(head);

	//add end
	func=dlsym(dl,"add_end");
	if (func==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=func(head,7);
	head=func(head,8);
	head=func(head,9);
	disp(head);

	//add position
	fun=dlsym(dl,"add_position");
	if (fun==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=fun(head,6,4);
	head=fun(head,5,5);
	disp(head);

	//del begin
	fu=dlsym(dl,"del_begin");
	if (fu==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=fu(head);
	disp(head);

	//del end
	fu=dlsym(dl,"del_end");
	if (fu==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=fu(head);
	disp(head);
	
	//del position
	func=dlsym(dl,"del_position");
	if (func==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=func(head,5);
	disp(head);

	//count nodes
	c=dlsym(dl,"count_nodes");
	if (c==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	n=c(head);
	printf("total nodes = %d\n",n);
	
	//mid node
	fu=dlsym(dl,"mid_node");
	if (fu==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	temp=fu(head);
	printf("the mid node from a list = %d\n",temp->num);
	
	//Nth from last list
	func=dlsym(dl,"Nthnode_from_last");
	if (func==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	temp=func(head,4);
	printf("the nth node from the list last = %d\n",temp->num);
	
	//reverse list
	fu=dlsym(dl,"reverse_list");
	if (fu==NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	head=fu(head);
	disp(head);
	dlclose(dl);
}
	
