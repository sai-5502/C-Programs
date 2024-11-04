#include <stdio.h>
#include <stdarg.h>

void characters(int n, ...){
	int i;
	char ch;
	va_list ele;
	va_start(ele,n);
	for (i=0;i<n;i++){
		ch=va_arg(ele,int);
		printf("%c ",ch);
	}
	printf("\n");
	va_end(ele);
}

void main(){
	characters(9,'A','B','C','D','E','F','G','H','I');
}
