#include <stdio.h>
#define SIZE 255

void main(int argc ,char *argv[]){
	FILE *fp;
	FILE *pf;
	char ch[SIZE];
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"w");

	if (fp == NULL || pf == NULL)
		printf("the files are not present\n");
	else
		printf("the files are present\n");

	while ( fgets(ch,SIZE,fp) != NULL ){
		fputs(ch,pf);
		printf("%s",ch);
	}
	fclose(fp);
	fclose(pf);
}

