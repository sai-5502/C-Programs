#include <stdio.h>
int mystrcmp(char *a,char *b);

void main(int argc,char *argv[]){
	int c;
	c=mystrcmp(argv[1],argv[2]);

	if(c==0)
		printf("%s and %s are equal",argv[1],argv[2]);
	else if(c>0)
		printf("%s is greater than %s with difference of %d",argv[1],argv[2],c);
	else
		printf("%s is smaller than %s with difference of %d",argv[1],argv[2],c);

}

int mystrcmp(char *a,char *b){
	while (*a && *a==*b){
		a++;
		b++;
	}
	return (*a-*b);
}
