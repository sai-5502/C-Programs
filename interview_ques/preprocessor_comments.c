#include <stdio.h>
#define SIZE 255

int my_strstr(char *ms,char *ss){
	int i,j;
	i=0;j=0;
	while (ms[i] != '\0' && ss[j] != '\0'){
		if (ms[i] == ss[j]){
			i++;
			j++;
		}
		else{
			i++;
			j=0;
		}
	}
	if (ss[j] == '\0')
		return 0;
	return 1;
}

void main(int argc,char *argv[]){
	FILE *fp=NULL;
	FILE *pf=NULL;
	char ch[SIZE];
	char s;
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"w");
	if (fp == NULL || pf == NULL)
		printf("The files are not present\n");
	else
		printf("The files are present\n");

	while (fgets(ch,SIZE,fp) != NULL){
		int ret=my_strstr(ch,"//");
		if (ret == 0)
			continue;
		else{
			fprintf(pf,"%s",ch);
			printf("%s",ch);
		}
	}
	fclose(fp);
	fclose(pf);
}


