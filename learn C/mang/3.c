#include<stdio.h>
int main(){
	const  char *ptr="-131.23dfsd";
	
	char *p;
	double d;
	unsigned long l;
 d = strtod(ptr,&p);
	printf("%lf",d);
}
