#include<stdio.h>



int main(void){
	int i,b;
	long a,j;
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		scanf("%ld",&a);
	for(j=2;j<=a;j++){
		while(a%j==0){
			a/=j;
			printf("%ld ",j);
		}
	}
	printf("\n");
	}
	
}
