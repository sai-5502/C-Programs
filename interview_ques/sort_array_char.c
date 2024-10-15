#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strcpy(char *b,char *a){
	char *temp=b;
	while (*a){
		*b++=*a++;
	}
	return temp;
}

int my_strcmp(char *a,char *b){
	while (*a && *a == *b){
		a++;
		b++;
	}
	return (*a-*b);
}

void main(int argc,char *argv[]){
	int i,j,k;
	char temp[50];
	for (i=1;i<argc;i++)
		printf("%s\t",argv[i]);
	printf("\n");
	
	for (i=1;i<argc-1;i++){
		for (j=i+1;j<argc;j++){
			int ret=my_strcmp(argv[i],argv[j]);
			if (ret > 0){
				my_strcpy(temp,argv[i]);
				my_strcpy(argv[i],argv[j]);
				my_strcpy(argv[j],temp);
			}
		}
	}
	for (i=1;i<argc;i++)
		printf("%s\t",argv[i]);
	printf("\n");

}
