#include <stdio.h>
#include <stdlib.h>
#include "my_string.h"

void main(int argc,char *argv[]){
	int n;
	char *b;
	b=(char *)malloc(my_strlen(argv[1])+1);
	
	
	//strlen
	printf("the length of the strings (%s) is %d and (%s) is %d\n",argv[1],my_strlen(argv[1]),argv[2],my_strlen(argv[2]) );

	//strcpy
	printf("before copy the string b = '%s'\n",b);
	my_strcpy(b,argv[1]);
	printf("after copy the string b = '%s'\n",b);

	//strcmp
	n=my_strcmp(argv[1],argv[2]);
	if (n>0)
		printf("(%s) is greater than (%s) with differ of %d\n",argv[1],argv[2],n);
	else if(n<0)
		printf("(%s) is smaller than (%s) with differ of %d\n",argv[1],argv[2],n);
	else
		printf("(%s) and (%s) both are equal\n",argv[1],argv[2]);


	//strcat
	my_strcat(argv[1],argv[2]);
	printf("the concate string is (%s)\n",argv[1]);

}
