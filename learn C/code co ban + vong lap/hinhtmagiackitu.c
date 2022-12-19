#include <stdio.h> 
int main(){
	int c,a,b,i,j;
	scanf("%d",&a);
	c=64+a*2;
	b=65;
	for(i=1;i<=a;i++){
		for(j=b;j<=c;j+=2){
			printf("%c",j);
		}
		b+=2;
		printf("\n\n");
	}	
	}

