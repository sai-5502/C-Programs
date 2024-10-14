#include <stdio.h>
void main(){
	unsigned char a=0xfa;
	a=(a>>4) | (a<<4);
	printf("%x\n",a);
}
