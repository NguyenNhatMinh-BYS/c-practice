#include<stdio.h>
#include<math.h>
int gt(long long n){
	int dem=0;
	while(n>1){
		
		long long  t=n;
		while(t%2==0){
			dem++;
			t/=2;
		}
		n--;
	}
	return dem;
}
int main(){
	long long  n,k;
	scanf("%lld%lld",&n,&k);
	
	
	
	if(gt(n)>=k) printf("Yes");
	else printf("No");

	return 0;
}
