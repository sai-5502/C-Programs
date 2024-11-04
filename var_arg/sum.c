#include <stdio.h>
#include <stdarg.h>

int sum(int num, ...){
	int i,ele,sum=0;
	va_list args;
	va_start(args,num);
	for (i=0;i<num;i++){
		ele=va_arg(args,int);
		printf("%d ",ele);
		sum+=ele;
	}
	va_end(args);
	return sum;
}

void main(){
	printf("\nsum = %d\n",sum(5,1,2,3,4,5) );
	
}
