#include <stdio.h>

void main(int argc ,char *argv[]){
	FILE *fp;
	FILE *pf;
	char ch;
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"w");

	if (fp == NULL || pf == NULL)
		printf("the files are not present\n");
	else
		printf("the files are present\n");

	while ( (ch=fgetc(fp)) != EOF ){
		fputc(ch,pf);
		printf("%c",ch);
	}
	fclose(fp);
	fclose(pf);
}

