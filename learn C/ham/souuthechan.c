#include <math.h>
long long check(long long b){
	long long c,d,e=0,f=0;
	if(b%2==1){
	
	while(b>0){
		d=b%10;
		b=b/10;
		if(d%2==0){
			e+=1;
		}
		if(d%2==1){
			f+=1;
		}
		
	}

}
	if(e<f){
		return 1;
	}
	if(b%2==0) return 0;
	return 0;
}
int main(){
	int a,i;
	long long b;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%lld",&b);
		if(b>0){
			if(check(b)==1){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
	}
}
