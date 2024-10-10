#include <stdio.h>

void main(int argc,char *argv[]){
	char *a=argv[1];
	int i=0;
	printf("%s\n",a);
	while (a[i] != '\0'){
		if (a[i] >= 'A' && a[i] <= 'Z'){
			a[i]=a[i]+32;
			i++;
		}
		else if(a[i] >= 'a' && a[i] <= 'z'){
			a[i]=a[i]-32;
			i++;
		}
		else
			i++;
	}
	printf("%s\n",a);
}

