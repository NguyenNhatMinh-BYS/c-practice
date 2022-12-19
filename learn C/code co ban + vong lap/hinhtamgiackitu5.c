#include <stdio.h> 
int main(){
	int c,a,b,i,j,e,f;
	scanf("%d",&a);
	c=63+a;
	b=c+a;
	f=a;
	for(i=1;i<=a;i++){
		e=1;
		for(j=c;j<=b;j++){
			if(e<=f){
			
			e+=1;
			printf("%c",j);
		}
		}
		f-=1;
		c-=1;
		b-=1;
		printf("\n\n");
	}
}
