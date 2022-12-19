#include <stdio.h>
#include <math.h>
int main(){
	const float pi =3.14;
	int a;
	scanf("%d",&a);
	printf("sin(%d)=%.2f\n",a,sin(a*pi/180));
	printf("round up pi: %.f",ceil(pi));
	printf("\nround down pi: %.f",floor(pi));
}
