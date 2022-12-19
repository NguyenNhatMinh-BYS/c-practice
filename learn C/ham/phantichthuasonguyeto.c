#include <stdio.h>
#include <math.h>
void tsnt(int a){
	int j,e,d=a,i=0,f=0;
	for(j=2;j<=a;j++){
		e=0;
		
		while(d%j==0){
			d=d/j;
			e+=1;
			
		}
		if(i>=1){
			i++;
		}
		if(e>=1&&i==0){
			printf("%d = %d^%d",a,j,e);
			i+=1;
		}
		if(e>=1 && i>1){
		
		printf(" * %d^%d",j,e);
	}
	
	}
	printf("\n");
}
int main(){
	int t,a,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d",&a);
		if(a>0){
		
		tsnt(a);}
	}
} 
