#include <stdio.h>
int main(){
long int a,b;
scanf("%ld%ld",&a,&b);
	if(a>0 && b>=0 && a<=999999 && b<=999999){
		printf("%ld ",a+b);
		printf("\n%ld ",a-b);
		printf("\n%ld ",a*b);
		printf("\n%ld ",a/b);
		printf("\n%ld ",a%b);
		printf("\n%.2f ",(float)a/b);
	}
	return 0;
}
