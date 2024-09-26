#include <stdio.h>

char *my_strchr(char *str,char ch){
	while (*str){
		if (*str == ch)
			return str;
		else
			str++;
	}
	return NULL;
}

void main(){
	char string[]="uma sai sankar";
	char *p=NULL;
	char ch='s';
	p=my_strchr(string,ch);
	
	if (p==NULL)
		printf("The character (%c) is not present in the given string (%s)\n",ch,string);
	else{
		printf("%s\n",p);
		printf("string=%p\tp=%p\n",string,p);
		printf("The character (%c) is present at %ld position in the string (%s)\n",ch,p-string,string);
	}
}
