#include <stdio.h>
#include <stdarg.h>
void print_str(char *s){
	while (*s != '\0'){
		fputc(*s++,stdout);
	}
}

void print(char *format, ...){
	va_list args;
	va_start(args,format);

	while(format){
		if (*format == '%'){
			format++;
			if (*format == 's'){
				char *str = va_arg(args,char *);
				print_str(str);
			}
			else if(*format == 'd'){
				int num = va_arg(args,int);
				printf("%d",num);
			}
		}
		else
			printf("%c",*format);
		format++;
	}
	va_end(args);
}

void main(){
	print("Hi. My name is %s. Iam %d years old.\n","uma sai sankar",22);
}

