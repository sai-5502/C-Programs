#include <stdio.h>
char my_reverse(char *);
int str_length(char *);

void main(int argc,char *argv[]){
	my_reverse(argv[1]);
	printf("the reversed string is %s\n",argv[1] );
}

char my_reverse(char *a){
	char b;
	int start,end,l;
	l=str_length(a);
	start=0;
	end=l-1;
	while (start<end){
		b=a[start];
		a[start]=a[end];
		a[end]=b;
		start++;
		end--;
	}
}

int str_length(char *a){
	int l=0;
	while(*a){
		l++;
		a++;
	}
	return l;
}
