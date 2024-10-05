#include <stdio.h>
#include <string.h>

void main(int argc,char *argv[]){
	char *a=argv[1];
	int i,j;
	int l=strlen(a);
	printf("%s\n",a);

	i=0;
	for (j=1;a[j] != '\0';j++){
		if (a[j] != a[i]){
			a[i+1]=a[j];
			i++;
		}
	}

	a[i+1]='\0';
	printf("%s\n",a);
}
