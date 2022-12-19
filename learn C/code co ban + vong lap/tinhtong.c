#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(abs(a)<1000000 && abs(b)<1000000){
		printf("%d",a + b);
	}
}
