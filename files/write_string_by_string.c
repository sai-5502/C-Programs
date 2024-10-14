#include <stdio.h>

void main(int argc ,char *argv[]){
	FILE *fp;
	FILE *pf;
	char ch[255];
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"w");

	if (fp == NULL || pf == NULL)
		printf("the files are not present\n");
	else
		printf("the files are present\n");

	while ( fscanf(fp,"%s",ch) != EOF ){
		fprintf(pf,"%s",ch);
		printf("%s\n",ch);
	}
	printf("\n");
	fclose(fp);
	fclose(pf);
}

