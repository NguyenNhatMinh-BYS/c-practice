#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b>a&&c>a){
		printf("%d",a);
	}
	if(a>b&&c>b){
		printf("%d",b);
	}
	if(a>c&&b>c){
			printf("%d",c);
	}
	
}
