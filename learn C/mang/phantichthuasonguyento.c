#include<stdio.h>
int main(){
	int i,a,b[100],e=0;
	scanf("%d",&a);
	if(a>0){
	
	for(i=2;i<=a;i++){
		while(a%i==0){
			a=a/i;
			
			b[e]=i;
			e++;
		}
	}
	for(i=0;i<=e-1;i++){
		if(i==0){
			printf("%d",b[i]);
		}
		if(i>0){
			printf("x%d",b[i]);
		}
	}
}
} 
