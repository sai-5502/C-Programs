#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dlfcn.h>
#include "my_string.h"

void main(int argc ,char *argv[]){
	int n;
	char *b=NULL;
	b= (char *)malloc(strlen(argv[1])+1);
	int (*func) (char *);	
	int (*fun) (char *,char *);	
	char (*fu) (char *,char *);	
	
	void *dl=dlopen(argv[1],RTLD_LAZY);

	if (dl==NULL)
		printf("the shared library (%s) is not present\n",argv[1]);
	else
		printf("the shared library (%s) is present\n",argv[1]);

	//strlen
	func=dlsym(dl,"my_strlen");
	if (func==NULL){
		printf("the symbol is not found\n");
		dlclose(dl);
	}
	printf("the length of the string (%s) is %d\n",argv[2],func(argv[2]) );
	

	//strcpy
	fu=dlsym(dl,"my_strcpy");
	if (fu==NULL){
		printf("the symbol is not found\n");
		dlclose(dl);
	}
	printf("before copied the string b = (%s) \n",b);
	fu(b,argv[2]);
	printf("after copied the string b = (%s) \n",b);


	//strcmp
	fun=dlsym(dl,"my_strcmp");
	if (fun==NULL){
		printf("the symbol is not found\n");
		dlclose(dl);
	}
	n=fun(argv[2],argv[3]);

	if (n>0)
		printf("(%s) is greater than (%s) with difference of %d\n",argv[2],argv[3],n);
	else if (n<0) 
		printf("(%s) is smaller than (%s) with difference of %d\n",argv[2],argv[3],n);
	else
		printf("(%s) and (%s) both are equal\n",argv[2],argv[3]);
	

	//strcat
	fu=dlsym(dl,"my_strcat");
	if (fu==NULL){
		printf("the symbol is not found\n");
		dlclose(dl);
	}
	printf("before concate the strings are (%s) and (%s) \n",argv[2],argv[3]);
	fu(argv[2],argv[3]);
	printf("after concate the strings are (%s) and (%s) \n",argv[2],argv[3]);

}

       	
