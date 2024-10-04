#include <stdio.h>
char *my_strcat(char *s1,char *s2);

void main(int argc,char *argv[]){
	my_strcat(argv[1],argv[2]);
	printf("%s\n",argv[1]);	
	printf("%s\n",argv[2]);	
}
	
char *my_strcat(char *s1,char *s2){
	char *temp=s1;

	while(*s1)
		s1++;

//	*s1++=' ';

	while(*s2){
		*s1=*s2;
		s1++;
		s2++;
		
	}
	return temp;
}
