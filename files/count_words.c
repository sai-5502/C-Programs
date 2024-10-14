#include <stdio.h>

void main(int argc,char *argv[]){
	FILE *fp;
	char ch;
	int word=1;

	fp=fopen(argv[1],"r");
	while ( (ch=fgetc(fp)) != EOF){
		if (ch == ' ')
			word++;
	}
	printf("%d\n",word);
	printf("%ld\n",ftell(fp));
	fclose(fp);
}

