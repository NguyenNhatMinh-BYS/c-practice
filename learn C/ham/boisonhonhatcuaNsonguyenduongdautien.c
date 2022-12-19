#include<stdio.h>
int ucln(int a){
	long long  i,sum=1,b,c;
	
	for(i=2;i<=a;i++){
		long long j=i;
		long long y=j*sum;
		while(j!=0){
			c=sum%j;
			sum=j;
			j=c;
			
		}
		
		sum=y/sum;
			 
		
			
		}
	printf("%lld\n",sum);

}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a;
		scanf("%lld",&a);
		
//		printf("%d\n",ucln(arr,a));
		ucln(a);
		
	}
} 
