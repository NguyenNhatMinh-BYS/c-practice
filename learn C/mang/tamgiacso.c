#include<stdio.h>
int main(){
	int a,e=1,j;
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++){
	
		for(j=1;j<=e;j++){
			printf("%d",j);
		}
			e+=2;
		printf("\n");
	}
}
