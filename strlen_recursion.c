#include <stdio.h>

int len_recursion(char *a){
	while (*a)
		return ( 1+len_recursion(a+1) );

}
void main(int argc,char *argv[]){
	int l;
	l=len_recursion(argv[1]);
	printf("length of the string(argv[1]) = %d\n",l);
}

