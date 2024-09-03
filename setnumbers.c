#include <stdio.h>
#define size 255
void main(int argc,char *argv[]){
	FILE *fp;
	FILE *pf;
	char ch[255];
	int i=1;
	
	fp=fopen(argv[1],"r");
	pf=fopen(argv[2],"w");
	
	if (fp==NULL)
		printf("the %s file is not opened",argv[1]);
	
	while(fgets(ch,size,fp)	!= NULL){
		fprintf(pf,"%d. %s",i++,ch);
	}
	
	fclose(fp);
	fclose(pf);
}

