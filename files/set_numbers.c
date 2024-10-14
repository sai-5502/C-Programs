#include <stdio.h>
#define SIZE 255

void main(int argc ,char *argv[]){
	FILE *fp;
	FILE *pf;
	char ch[SIZE];
	int i=1;
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"a");

	if (fp == NULL || pf == NULL)
		printf("the files are not present\n");
	else
		printf("the files are present\n");

	while ( fgets(ch,SIZE,fp) != NULL ){
		fprintf(pf,"%d.%s",i++,ch);
	}
	printf("\n");
	fclose(fp);
	fclose(pf);
}

