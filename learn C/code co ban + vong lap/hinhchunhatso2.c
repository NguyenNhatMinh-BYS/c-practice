#include <stdio.h>
int main(){
	int a,b,i,j,c,d,e;
	c=2;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++){
		e=0;
		printf("%d",i);
		for(j=c;j<=b;j++){
			
			
			printf("%d",j);
			
			e+=1;	
		
		}
		 
		d=j-1;
		
		while(d>=2&&e<(b-1)){
			d-=1;
			printf("%d",d);
			e+=1;
		}
		c+=1;
		printf("\n\n");
	}
}
