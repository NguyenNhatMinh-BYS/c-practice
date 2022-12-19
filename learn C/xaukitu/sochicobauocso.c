#include <stdio.h>
#include <math.h>
int check(long long i){
	long j;
	if(i<2) return 0;
	for(j=2;j<=sqrt(i);j++){
		if(i%j==0) return 0;
	}
	return 1;
}
int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long long j,i,s, first,end,sum=0,d;
		
		scanf("%lld %lld",&first,&end);
		s=sqrt(end);
		for(i=first;i<=s;i++){
			d=0;
			
				if(check(i)) sum++;
			
			}
			
		
		printf("%lld\n",sum);	
	}

} 

