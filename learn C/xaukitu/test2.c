#include<stdio.h>
#include<math.h>
int ucln(long long a,long long sum){
	long long  i,b,c,d=1;
	
	
	for(i=sum;i<=a;i++){
		long long j=i;
		long long y=j*d;
		while(j!=0){
			c=d%j;
			d=j;
			j=c;
			
		}
		
		d=y/d;
			 
		
			
		}
	printf("%lld\n",d);

}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,sum;
		scanf("%lld",&sum);
		scanf("%lld",&a);

		ucln(a,sum);
		
	}
} 
