#include <stdio.h>
#include "my_string.h"

int my_strlen(char *a){
	int l=0;
	while(*a) {
		a++;
		l++;
	}
	return l;
}

