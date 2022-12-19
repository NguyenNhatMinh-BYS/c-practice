#include <stdio.h>
int main(){
	long long a,b,i,c,d,e,f;
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
		f=0;
		if(a>0){
			scanf("%lld",&b);
			if(b>0){
				
				d=b/10;
				while(d>0){
					c=b%10;
					e=d%10;
					b=b/10;
					d=d/10;
//					printf("%lld %lld",e,c);
					if(c<e){
						f+=1;
					
					
					}
					
				}
			}
		}
//		printf("%lld",f);
	if(f>0){
		printf("NO\n");
	}
	else{
		printf("YES\n");
	}
	
	}
	
	
} 
