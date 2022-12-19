#include <stdio.h>
void evenNumber(long long a){
	if(a%2==0){
		long long d=0;
		while(a>0){
			
			if( d==0 ||d%2==0){
				d=a%10;
				
				a/=10;
				if(a==0){
					printf("YES\n");
					break;
				}
				
			}
			else{
				printf("NO\n");
				break;
			}
		}
	}
	else{
		printf("NO\n");
	}
}

int main(){
	long long c,a,b,i;
	scanf("%lld",&c);
	for(i=1;i<=c;i++){
		scanf("%lld",&a);
	
		evenNumber(a);
	}
} 
