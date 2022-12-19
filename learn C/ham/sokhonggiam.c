#include <stdio.h>
void Number(long long b){
	long long j,d,e=1,e1=1,f=0,c;
	for(j=1;j<=b;j++){
	e*=10;		
	}
	for(j=1;j<=(b-1);j++){
	e1*=10;		
	}
	for(j=(e1+1);j<e;j++){
		long long j0=j;
		d=0;
		while(d<(b-1)){
			
		
		
			f=j0%10;
		
		
			j0/=10;
		

			
			c=j0%10; 
			
			
			if(f>c){
			d++;
			}
			
			
			if(f==c && c!=0 && f!=0){
			
				d++;
			}
			if(f<c){
				d--;
				break;
			}
			
			
			
		}
		if(d==(b-1) && d>0){
			printf("%lld ",j);
		}
		
	
	}
}
int main(){
	long long i, a,b;
	scanf("%lld",&a);
	for(i=1;i<=a;i++){
			scanf("%lld",&b);
			Number(b);
			printf("\n");
	}
	
}
