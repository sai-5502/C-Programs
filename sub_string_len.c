#include <stdio.h>

char* substring_len(char *ms,char *ss){
	int i=0,j=0;
	while (ms[i] && ss[j]){
		if (ms[i] == ss[j]){
			i++;
			j++;
			continue;
		}
		i++;
		j=0;
	}
	if (ss[j] == '\0')
		return (&ss[j]);
	else
		return NULL;


}

void main(int argc,char *argv[]){
	char *p=substring_len(argv[1],argv[2]);
	if (p == NULL)
		printf("not present\n");
	else
		printf("%ld\n",p-argv[2]);
}
