#include <stdio.h>
long long ucln1(long long a,long long b){
	if(a==0||b==0){
		return a+b;
	}
	while(a!=b){
		if(a>b){
			a-=b;
		}
		if(b>a){
			b-=a;
		}
	}
	return a;
}
long long ucln2(long long c,long long d){
	if(c==0||d==0){
		return c+d;
	}
	while(c!=d){
		if(c>d){
			c-=d;
		}
		if(d>c){
			d-=c;
		}
	}
	return c;
}





int main(){
	long long e,d,c,a,b,i,j;
	scanf("%d",&e);
	for(i=1;i<=e;i++){
		scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
		if(ucln1(a,b)==ucln2(c,d)){
			printf("YES \n");
		}
		else{
			printf("NO \n");
		}
	}
}
