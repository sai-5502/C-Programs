#include <stdio.h>
#include "my_string.h"

char my_strcat(char *a,char *b){
	char *temp=b;

	while (*a)
		a++;
	while (*b){
		*a=*b;
		a++;
		b++;
	}
	*a=*b;

}
	
