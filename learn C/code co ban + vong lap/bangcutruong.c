#include <stdio.h>
int main(){
	int a,i,b;
	scanf("%d",&b);
	if(b>0 && b<10){
		for(i=1;i<=10;i++){
			a=b;
			a*=i;
			printf("%d ",a);
			
			
			
		}
	}
} 
