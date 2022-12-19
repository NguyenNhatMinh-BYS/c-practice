#include <stdio.h>
int main(){
	int a,b=1,j;
	scanf("%d",&a);
	if(a>0){
		while(a>0){
			b*=a%10;
			a/=10;
		}
		printf("%d",b);
	}
}
