#include <stdio.h>
void fibonacci(long long a){
	long long i,f0=0,f=1,fn,c=0;
	for(i=0;i<=a;i++){
		if(i<=0){
			fn=i;
			
		}
		else{
			fn=f0+f;
			f0=f;
			f=fn;
			if(fn==a){
				
				c=1;
				
			}
		}
		
	
	}
	if(c==1||fn==0) printf("1");
	else printf("0");
}

int main(){
	long long a;
	scanf("%lld",&a);
	if(a>=0){
	
	fibonacci(a);
}
}
