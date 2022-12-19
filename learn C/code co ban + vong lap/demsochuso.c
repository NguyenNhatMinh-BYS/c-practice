#include <stdio.h>
int main(){
	long a,b=0;
	scanf("%ld",&a);
	if(a>0){
		while(a>0){
			b+=1;
			a/=10;
		}
	}
	printf("%ld",b);
}
