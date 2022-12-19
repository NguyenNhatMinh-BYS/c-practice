#include <stdio.h>
int main(){
	int a,b,i,j,c,e;
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	for(i=a;i>0;i--){
		e=1;
		for(j=c;j>0;j--){
			if(e<=b){
			
			printf("%d",j);
			e+=1;
			}
		}
		j=1;
		while(e<=b){
			e+=1;
			j+=1;
			
			printf("%d",j);
		}
		printf("\n\n");
		a-=1;
		c-=1;
	}
}
