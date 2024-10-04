#include <stdio.h>
int mystrlen(char *);
void main (int argc,char *argv[]){
	int l;
	l=mystrlen(argv[1]);
	printf("the length of the string (%s) is %d",argv[1],l);

}


int mystrlen(char *a){
	int l=0;
	while (*a){
		l++;
		a++;
	}
	return l;
}
	


	
