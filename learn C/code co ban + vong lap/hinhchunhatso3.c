#include <stdio.h>
int main(){
	int a,b,i,j,c=1,e;
	scanf("%d%d",&a,&b);
	for(i=1;i<=a;i++){
		
		e=1;
		
		for(j=c;j>=1;j--){
			
			if(e<=b){
			
			printf("%d",j);
			
			e+=1;
		}
		}
		c+=1;
		j=1;
		while(e<=b){
			e+=1;
			j+=1;
			printf("%d",j);
		
		
	}
printf("\n\n");
	}
} 
