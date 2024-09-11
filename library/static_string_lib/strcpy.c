#include <stdio.h>
#include "my_string.h"

char my_strcpy(char *b,char *a){
	char *temp=b;

	while (*a){
		*b=*a;
		b++;
		a++;
	}
	return b;
}


