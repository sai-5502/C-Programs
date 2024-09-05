#include <stdio.h>
#include <stdlib.h>

char *mystrcpy(char *,char *);
int mystrlen(char *);

	
void main(int argc,char *argv[]){
	char *b;
	b=(char *)malloc(mystrlen(argv[1])+1);
	int l;
	l=mystrlen(argv[1]);
	mystrcpy(b,argv[1]);
	printf("the source string is %s and length is %d\n",argv[1],l);
	printf("the destination string is %s\n",b);

}

char *mystrcpy(char *b,char *a){
	char *temp=b;
	while (*a){
		*b++=*a++;
	}
	return temp;
}

int mystrlen(char *a){
	int l=0;
	while (*a){
		l++;
		a++;
	}
	return l;
}

