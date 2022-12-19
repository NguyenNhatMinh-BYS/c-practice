#include<stdio.h>
int main(){
	int a,e=2,j,d=1;
	scanf("%d",&a);
	int i;
	for(i=1;i<=a;i++){
	if(d%2==1){
		for(j=1;j<=e;j+=2){
			printf("%d",j);
		}
	}
	if(d%2==0){
	
		for(j=2;j<=e;j+=2){
		printf("%d",j);
		
		}
	
	}
	d++;
	e+=2;	
		printf("\n");
	}
}
