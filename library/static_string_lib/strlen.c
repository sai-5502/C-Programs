#include <stdio.h>
#include "my_string.h"

int my_strlen(char *a){
	int l=0;
	while (*a){
		l++;
		a++;
	}
	return l;
}
