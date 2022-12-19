#include<stdio.h>
#include<math.h> 
#include <stdlib.h>
long long check(long long i){
	long long j,e,d=i;
	
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				return 0;
			}
		}
		e=0;
		while(i>0){
			e+=i%10;
			i=i/10;
		}
		if(e%5==0){
			printf("%lld ",d);
		return 1;	
		} 
		else return 0;
	}
	

int main (){
	long long a,b=0,i;
	scanf("%lld",&a);
	if(a>0){
	
	for(i=5;i<=a;i++){
		
		if(check(i)==1){
			b++;
		}
	}
	if(b>0) printf("\n%lld",b);
}
}
