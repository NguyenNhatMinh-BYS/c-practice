#include <stdio.h>
int main(){
	long long a,b,c,i,j,e,d;
	scanf("%lld",&a);
	if(a>0){
	
	for(i=1;i<=a;i++){
		scanf("%lld",&b);
		d=0;
		if(b>0){
			for(j=2;j<=b;j++){
				e=0;
				while(b%j==0){
					b=b/j;
					e+=1;
				}
				
				if(d==0){
					printf("Test %lld: ",i);
				}
				d=1;
				if(e!=0){
					printf("%lld(%lld) ",j,e);
				}
			}
			printf("\n");
			
		}
	}
}
}
