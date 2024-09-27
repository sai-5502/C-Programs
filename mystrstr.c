#include <stdio.h>

char *my_strstr(char *ms,char *ss){
	int i=0,j;
	while (ms[i] != '\0' && ss[j] != '\0'){
		if (ms[i] != ss[j]){
			i++;
			j=0;
		}
		else{
#ifdef DEBUGGER
			printf("ms[i]=%c ,ss[j]=%c\n",ms[i],ss[j]);
#endif
			i++;
			j++;
		}
	}
#ifdef DEBUGGER
	printf("ms[i]=%c ,ss[j]=%c\n",ms[i],ss[j]);
#endif
	if (ss[j] == '\0')
		return (&ms[i-j]);
	else
		return NULL;
}

void main(int argc,char *argv[]){
	char *p=NULL;
	p=my_strstr(argv[1],argv[2]);
	
	if (p==NULL)
		printf("the substring(%s) is not present in the main string(%s)\n",argv[2],argv[1]);
	else{
		printf("%s\n",p);
		printf("the substring(%s) is present in the main string(%s) at the position = %ld\n",argv[2],argv[1],p-argv[1]);
	}
}
	

