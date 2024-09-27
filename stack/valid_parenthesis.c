#include <stdio.h>
#define SIZE 10
int top=-1;

void push(char a[],char ch){
	if (top == SIZE-1){
		printf("stack is full\n");
		return;
	}
	top++;
	a[top]=ch;
}

char pop(char a[]){
	if (top == -1){
		printf("stack is empty\n");
		return '\0';
	}
	return a[top--];
}

int valid_paren(char *str){
	char a[SIZE];
	while (*str){
		switch (*str){
			case '(':
			case '{':
			case '[':
				push(a,*str);
				str++;
				break;
			case ')':
			case '}':
			case ']':
				if (top == -1)
					return 1;
				char ch=pop(a);
				if ( (*str==')' && ch=='(') || (*str=='}' && ch=='{') || (*str==']' && ch=='[') )
					str++;
				else
					return 1;
				break;

			default:
				return 1;
		}
	}
	if (top != -1)
		return 1;
	return 0;

}


void main(){
	char str[]="{[]({})}";
	int n=valid_paren(str);
	if ( n == 0 )
		printf("the string contains the valid parenthesis\n");
	else
		printf("the string contains the invalid parenthesis\n");
}
