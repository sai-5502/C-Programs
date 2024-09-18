#include <stdio.h>
#include <string.h>

void rev_recursion(char *a,int i){
	if (a[i] == '\0')
		return;

	rev_recursion(a,i+1);
	
	printf("%c\n",a[i]);
}
	
void main(int argc,char *argv[]){
	int i=0;
	rev_recursion(argv[1],i);
	printf("%s",argv[1]);
}
