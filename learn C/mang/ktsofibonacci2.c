#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	long long b;
	if(a>0&&a<101) {
	while(a--){
		
		
		
		scanf("%lld",&b);
		if(b>=0) {
		
		long long f0=1,f1=1,fn=0,c=b;
		if(b==f0){
			printf("YES\n");
			continue;
		}
		if(b==0){
			printf("NO\n");
			continue;
		}
		
		while(b--){
			fn=f1+f0;
			f0=f1;
			f1=fn;
			if(fn==c){
				printf("YES\n");
				break;
			}
			if(fn>c){
				printf("NO\n");
				break;
			}
			
		}
	}
}
	}
}
