#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long long n,i=2;
		scanf("%lld",&n);
		while(i<=n/i){
			if(n%i==0) n/=i;
			else i++;
		}
		printf("%lld\n",n);
	} 
}


