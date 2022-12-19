#include <stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	float b=0,c;
	for(i=0;i<a;i++){
		scanf("%f",&c);
		b+=c;
	}
	printf("%.3f",b/a);
} 
