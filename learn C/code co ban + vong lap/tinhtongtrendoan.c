#include<stdio.h>
int main(){
	long long a,b,i,sum=0;
	scanf("%lld%lld",&a,&b);
	if(a>0&&b>0&&b>a){
		for(i=a;i<=b;i++){
			sum+=i;
		}
		printf("%lld",sum);
	}
	
	if(a>0&&b>0&&b<a){
		for(i=b;i<=a;i++){
			sum+=i;
		}
		printf("%lld",sum);
	}
	
}
