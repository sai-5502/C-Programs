#include <stdio.h>
#define BIT_VALUE(n,pos)  (n & (1<<pos))
#define SET_BIT(n,pos)  (n | (1<<pos))
#define RESET_BIT(n,pos)  (n & (~(1<<pos)))

void swap(int *n,int pos){
	unsigned char a=BIT_VALUE(*n,pos);
	unsigned char b=BIT_VALUE(*n,pos+1);

	if (a ^ b){
		*n=a ? RESET_BIT(*n,pos) : SET_BIT(*n,pos);
		*n=b ? RESET_BIT(*n,pos+1) : SET_BIT(*n,pos+1);
	}
}

void main(){
	int n=0x55;
	int pos,nbits=0;
	
	while (8*sizeof(int) != nbits){
		int temp = n>>nbits;
		if (temp == 0)
			break;
		nbits+=2;
	}
	for (pos=0;pos<nbits;pos+=2){
		swap(&n,pos);
	}
	printf("%x\n",n);

}
