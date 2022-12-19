#include <stdio.h>
long long ucln(long long a, long long b){
	if(a==0 || b==0){
		return a+b;
	}
	while ( a!=b){
		if(a>b){
			a-=b;
		}
		else if(b>a){
			b-=a;
		}
		
	}
	return a;
} 

int main(){
	long long c, a ,b;
	scanf("%lld%lld",&a,&b);
	if(a>0 && b>0){
	
	c=ucln(a,b);

	printf("%lld ",(a*b)/c);
		printf("%lld ",c);
}
} 
