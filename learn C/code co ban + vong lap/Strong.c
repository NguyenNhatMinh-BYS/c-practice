#include <stdio.h>
int main(void){
	int a,b=1,c,i,j=0,d;
	scanf("%d",&a);
	d=a;
	while(a>0){
		
		c=a%10;
		a/=10;
		for(i=1;i<=c;i++){
			b*=i;
			
		}
		
//		printf("B: %d \n",b);
		j+=b;
		b=1;
	}
	a=d;
//	printf("j: %d",j);
	if(j==a){
		printf("1");
		
	}
	else{
		printf("0");
	}
} 
