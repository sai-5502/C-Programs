#include <stdio.h>
#include "my_string.h"

char my_strcpy(char *b,char *a){
	char *temp=a;
	while (*a){
		*b=*a;
		a++;
		b++;
	}
}


