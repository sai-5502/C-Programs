#include <stdio.h>
#include "my_string.h"

int my_strcmp(char *a,char *b){
	while(*a && *a==*b){
		a++;
		b++;
	}
	return (*a-*b);
}
