#include <stdio.h>
#include <stdlib.h>
char a[10];

char *int_to_str(int num){
	int i=0,j;
	char temp;
	int s=0;
	if (num<0){
		a[i++]='-';
		s=1;
		num = -num;
	}

	if (num ==0)
		a[i++]='0';
	else{
		while (num>0){
			a[i++]=(num%10)+48;
			num/=10;
		}
	}
	a[i]='\0';
	int e=i-1;

	while(s<e){
		temp=a[s];
		a[s]=a[e];
		a[e]=temp;
		s++;
		e--;
	}
	return a;
}

void main(int argc,char *argv[]){
	int num=atoi(argv[1]);
	printf("%s\n",int_to_str(num));
}
