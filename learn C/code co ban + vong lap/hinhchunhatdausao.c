#include <stdio.h>
int main(){
	long a,b,i,j,z;
	scanf("%ld",&a);
	scanf("%ld",&b);
	for(i=1;i<=a;i++){
		printf("*");
	}
	printf("\n\n");
	for(z=1;z<=(b-2);z++){
	
	for(j=1;j<=a;j++){
		if(j==1 || j==a){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
	printf("\n\n");
}
	for(i=1;i<=a;i++){
		printf("*");
	}
}
