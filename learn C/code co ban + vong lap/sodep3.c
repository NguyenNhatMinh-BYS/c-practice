#include<stdio.h>
#include <stdlib.h>
long long  rever(long long i){
	long long c=0,d=abs(i),j=0,e=0;
	while(d>0){
		j=d%10;
		c=c*10+j;
		d=d/10;
		if(j==6 && e==0){
			e+=1;
		}
	}
if(c==abs(i) && e==1){
	return 1;
}
}
long long  sum(long long i){
	long long d=abs(i),e=0;
while(d>0){
		e+=d%10;
		d=d/10;
	
	}
	if(e%10==8){
		return 1;
	}
	return 0;
}


int main(){
	long long a,b,i,f=0;
	scanf("%lld %lld",&a ,&b);
	
	
	if(a>b){
	long long change=a;
	a=b;
	b=change;
}
	for(i=a;i<=b;i++){


			if(rever(i)==1) {
			sum(i) ;
			if(sum(i)==1) 
			printf("%lld ",i);
		}
	}
 
 
 	
} 
