#include <stdio.h>
#include <string.h>

void main(int argc,char *argv[]){
	char *a=argv[1];
	int i,j;
	int l=strlen(a);
	printf("%s\n",a);

	for (i=0;i<l;i++){
		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
			for (j=i;j<l;j++)
				a[j]=a[j+1];
			l--;
			i--;
		}
	}
//	a[i+1]='\0;
	printf("%s\n",a);
}
			

	
