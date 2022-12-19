#include <stdio.h>
#include  <string.h>

int main(){
	char b[999999];
	gets(b);
	long c;
	c=strlen(b)-1;
	printf("%ld",c);
	return 0;
} 
