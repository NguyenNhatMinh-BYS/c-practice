#include <stdio.h> 

long long ucln(long long a,long long b){
	if(a==0||b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a= a-b;
		}
		if(b>a){
			b=b-a;
		}
	}
	return a;
}
int main(){
	int i,t;
	long long a, b;
	scanf("%d",&t);
	if(t>0){
	
	for(i=1;i<=t;i++){
	
		scanf("%lld",&a);
		scanf("%lld",&b);
			if(a>0){
		
		printf("%lld ",a*b/ucln(a,b));
		printf("%lld \n",ucln(a,b));
		}
		
	}
}
}
