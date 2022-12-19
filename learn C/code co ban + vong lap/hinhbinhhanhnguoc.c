#include <stdio.h>
int main(){
	long a,b,i,j,c;
	c=0;
	scanf("%ld",&b);
	scanf("%ld",&a);
	if(a>0&&b>0){
		for(i=1;i<=b;i++){
			for(j=0;j<=c;j++){
				if(j>0){
					printf("~");
				}
				
			}
			if(i==1){
			
			for(j=1;j<=a;j++){
				printf("*");
			}
			}
			if(i>1&&i<b){
			
			for(j=1;j<=a;j++){
				if(j==1||j==a){
				
				printf("*");
				}
				else{
					printf(".");
				}
			}
		}
		if(i==b){
			
			for(j=1;j<=a;j++){
				printf("*");
			}
			}
			c+=1;
			printf("\n\n");
		}
	}
}
