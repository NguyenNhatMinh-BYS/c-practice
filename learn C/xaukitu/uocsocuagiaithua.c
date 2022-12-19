#include <stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	while(a--){
		long long n,p,tich,tong=0;
		scanf("%lld",&n);
		scanf("%lld",&p);
		for(i=1;i<=n;i++){
			int cpy=i;
			while(cpy%p==0){
				cpy/=p;
				tong+=1;
			
			}
			
		}
			printf("%lld\n",tong);
		
	}
}
