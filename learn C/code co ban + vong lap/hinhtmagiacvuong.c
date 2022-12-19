#include <stdio.h>
int main(){
	int a,i,j,b;
	
	scanf("%d",&a);
	b=0;
	for(i=2;i<=a;i++){
		for(j=0;j<=b;j++){
			 if(j==b||j==0){
			 	printf("*");
			 }
			 
				else {
					printf(".");
				}
			}
			b+=1;
			printf("\n\n");
		}
		for(j=1;j<=a;j++){
			printf("*");
		}
		
	}

