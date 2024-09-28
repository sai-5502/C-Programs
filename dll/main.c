#include <stdio.h>
#include <dlfcn.h>
#include "dll.h"

void main(){
	struct node *head=NULL;
	
	void *dl=NULL;
	dl=dlopen("./libdll.so",RTLD_LAZY);
	if (dl == NULL)
		printf("the shared library is not present\n");
	else
		printf("the shared library is present\n");
	
	struct node* (*func_add_begin_end_delpos) (struct node *head,int num);
	struct node* (*func_add_position) (struct node *head,int num,int pos);
	struct node* (*func_del_begin_end) (struct node *head);
	void (*func_display) (struct node *head);

	//add begin
	func_add_begin_end_delpos=dlsym(dl,"add_begin");
	if (func_add_begin_end_delpos == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_add_begin_end_delpos(head,5);
	head=func_add_begin_end_delpos(head,4);
	head=func_add_begin_end_delpos(head,2);
	head=func_add_begin_end_delpos(head,1);
	
	//display
	func_display=dlsym(dl,"display");
	if (func_display == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	func_display(head);

	//add end
	func_add_begin_end_delpos=dlsym(dl,"add_end");
	if (func_add_begin_end_delpos == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_add_begin_end_delpos(head,6);
	head=func_add_begin_end_delpos(head,7);
	head=func_add_begin_end_delpos(head,9);
	head=func_add_begin_end_delpos(head,10);
	func_display(head);

	//add position
	func_add_position=dlsym(dl,"add_position");
	if (func_add_position == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_add_position(head,3,3);
	head=func_add_position(head,8,8);
	func_display(head);
	head=func_add_position(head,11,11);
	head=func_add_position(head,13,13);
	func_display(head);

	//del begin
	func_del_begin_end=dlsym(dl,"del_begin");
	if (func_del_begin_end == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_del_begin_end(head);
	func_display(head);

	//del end
	func_del_begin_end=dlsym(dl,"del_end");
	if (func_del_begin_end == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_del_begin_end(head);
	func_display(head);

	//del position
	func_add_begin_end_delpos=dlsym(dl,"del_position");
	if (func_add_begin_end_delpos == NULL){
		printf("the symbol is not found in the library\n");
		dlclose(dl);
	}
	head=func_add_begin_end_delpos(head,3);
	func_display(head);
	head=func_add_begin_end_delpos(head,5);
	func_display(head);
	
	dlclose(dl);
}

