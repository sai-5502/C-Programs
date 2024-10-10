#include <stdio.h>

void vowels_consonants(char *a){
	int vowels=0,consonants=0,digit=0,spl=0;
	
	while (*a){
		if ( (*a >= 'a' && *a <= 'z') || (*a >= 'A' && *a <= 'Z') ) {
			if ( (*a=='a'|| *a=='e'|| *a=='i'|| *a=='o'|| *a=='u') || (*a=='A'|| *a=='E'|| *a=='O'|| *a=='I'|| *a=='U') )
				vowels++;
			else
				consonants++;
			a++;
		}
		else if (*a >= '0' && *a <= '9'){
		       digit++;
	       	       a++;
		}
		else{
			spl++;
			a++;
		}
	}
	printf("the total no.of vowels in the string are %d\n",vowels);
	printf("the total no.of consonants in the string are %d\n",consonants);
	printf("the total no.of digits in the string are %d\n",digit);
	printf("the total no.of special characters in the string are %d\n",spl);
}


void main(int argc,char *argv[]){
	vowels_consonants(argv[1]);
}
