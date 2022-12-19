#include<stdio.h>
#include <math.h>
int main(){
	int a,b,sum=0,i;
	scanf("%d",&a);
	
	for(i=2;i<=a;i++){

		b=i;
		int c=0,j=0; 
	
		while(b>0){
			j=b%10;
			c=c*10+j;
			b=b/10;
			if(j==9){
				c=0;
				break;
			}
		}
		if(c==i){
			sum++;
			printf("%d ",c);
		}
	
}
printf("\n%d",sum);
}
