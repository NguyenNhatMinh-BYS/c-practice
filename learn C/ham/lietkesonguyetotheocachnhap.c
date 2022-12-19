#include <stdio.h>
#include <math.h>
int main(){
	int a,b,i,j,c=1;
	scanf("%d",&a);
	if(a>0){
	
	for(i=2;i<=(a*100);i++){
//		printf("c: %d",c);
		if(c<=a){
			
		b=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				b+=1;
			}
		
		}
		if( b==0){
			printf("%d\n",i);
			c+=1;
			
		}
		
	
	}
	
		
	}
		
	
}
}
