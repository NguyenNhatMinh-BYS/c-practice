#include <stdio.h>
int main(){
	float a,b,c;
	printf("nhap a: ");scanf("%f",&a);
	printf("nhap b: ");scanf("%f",&b);
	printf("nhap c: ");scanf("%f",&c);
	if(a>=b && a>=c){
		printf("so lon nhat la: %f",a);
	}
	else if(b>=a && b>=c){
		printf("so lon nhat la: %f",b);
	}
	else if(c>=b && c>=a){
		printf("so lon nhat la: %f",c);
		
	}
	else{
		printf("so lon nhat la : %f",a);
	}
}
