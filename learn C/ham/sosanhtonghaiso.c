#include <stdio.h>
void compare(long long a, long long b){
	long long i,c,e=0,f=0,la=a,lb=b;
	for(i=1;i<=2;i++){
		
		if(i==1){
			while(a>0){
				c=a%10;
				a/=10;
				e+=c;
			}
		}
		if(i==2){
			while(b>0){
				c=b%10;
				b/=10;
				f+=c;
			}
		}
	}
	
	a=la;
	b=lb;
	 if(f==e){
		
		printf("%lld %lld",a,b);
	}
	 if(f<e){
		
		printf("%lld %lld",b,a);
	}
	if(f>e){
		
		printf("%lld %lld",a,b);
	}
} 
int main(){
	long long a,b;
	scanf("%lld",&a);
	scanf("%lld",&b);
	if(a>=0 && b>=0){
		compare(a,b);
	}	
}
