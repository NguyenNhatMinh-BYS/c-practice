#include <stdio.h>
#include<math.h>
long long strong(long long n){
	long long g,i, z,a=0;
	while(n>0){
		g=1;
		i=n%10;
	n=n/10;
//	printf("i: %lld n: %lld ",i,n);
	for(z=1;z<=i;z++){
		g*=z;
	}
	a+=g;
//	printf("a: %lld",a);
}


return a;
} 




int main(){
	long long a,b,i,j;
	scanf("%lld",&a);
	scanf("%lld",&b);
	j=a>b?a:b;
	for(i=a>b?b:a;i<=j;i++){
		if(strong(i)==i){
		 printf("%lld ",i);
		}
	}
}
