#include <stdio.h>
int main(){
	int a,b,j,i,c,d;
	c=1;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=a;i++){
	
		 
			for(j=c;j<=b;j++){
				printf("%d",j);
			}
			d=c;
			if(d<=b){
			
			while(d>1){
				d-=1;
			
				
				
				printf("%d",d);
				
			}
			}
			if(d>b){
				printf("%d",d);
				while(d>1){
					d-=1;
					if(d<b){
						printf("%d",d);
					}
				}
			}
			c+=1;
			printf("\n\n");
	}
}
