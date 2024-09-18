#include <stdio.h>
#include "sorting.h"
#include <dlfcn.h>

void display(int a[],int l){
	int i;
	for (i=0;i<l;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main(int argc,char *argv[]){
	
	//int a[]={7,2,9,5,1,3,4,8,0,6};
	int a[]={50,90,30,10,20,100,40,60,70,80,0};
	int l=sizeof(a)/sizeof(a[0]);
	int i;

	void *dl=dlopen(argv[1],RTLD_LAZY);
	if (dl == NULL)
		printf("the shared library (%s) is not present\n",argv[1]);
	else
		printf("the shared library (%s) is present\n",argv[1]);

	void (*func) (int a[],int l);

	
	//bubble sort
	func=dlsym(dl,"bubble_sort");
	if (func == NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	else 
		printf("the symbol is present\n");
	
	printf("BEFORE BUBBLE SORT\n");
	display(a,l);
	func(a,l);
	printf("AFTER BUBBLE SORT\n");
	display(a,l);
	


	//selection sort
	func=dlsym(dl,"selection_sort");
	if (func == NULL){
		printf("the symbol is not present\n");
		dlclose(dl);
	}
	else 
		printf("the symbol is present\n");

	printf("BEFORE SELECTION SORT\n");
	display(a,l);
	func(a,l);
	printf("AFTER SELECTION SORT\n");
	display(a,l);

}
