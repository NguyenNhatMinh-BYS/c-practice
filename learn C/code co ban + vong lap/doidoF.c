#include<stdio.h>
int main(){
	float a;
	scanf("%f",&a);
	
	if(a<=100){
		printf("%.2f\n",(a*(float)9/5)+32);
		
	}
	return 0;
}
