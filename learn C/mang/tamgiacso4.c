#include<stdio.h>
int main(){
	int a,e=1,j;
	scanf("%d",&a);
	int i,c=1,d=a;
	for(i=1;i<=a;i++){
		for(j=1;j<d;j++){
			printf("~");
		}
		for(j=1;j<=c;j+=2){
		printf("%d",j);
	}
	for(j=c-2;j>=1;j-=2){
		printf("%d",j);
	}
	
			
		
		printf("\n");
		c+=2;
		d--;
	}
}
