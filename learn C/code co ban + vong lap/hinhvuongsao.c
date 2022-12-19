#include <stdio.h>
int main(){
	int a,j,i;
	scanf("%d",&a);
	if(a>0){
		for(i=1;i<=a;i++){
			for(j=1;j<=a;j++){
				printf("*");
			}
			printf("\n\n");
		}
	}
} 
