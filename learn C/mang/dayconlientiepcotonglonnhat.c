#include<stdio.h>
int main(){
	long  a,b;
	scanf("%ld",&a);
	while(a--){
		scanf("%ld",&b);
		long long  i,j, maxSum[b];
		for(i=0;i<b;i++) scanf("%lld",&maxSum[i]);
		long long  sum1=0,sum2=0;
		for(i=0;i<b;i++){
			sum1+=maxSum[i];
			if(sum1<0) sum1=0;
			if(sum2<sum1) sum2=sum1;
		}
		printf("%lld\n",sum2);
	}
}
