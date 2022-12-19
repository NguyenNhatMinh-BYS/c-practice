#include <stdio.h>
#include <math.h>
void four(long long b){
	long long a,c,d=b,j;
	for(c=pow(10,(b-1));c<=pow(10,b);c++){
	d=c;
	a=0;
	j=0;
	while (d>0){
		a=a*10 + d%10;
		d=d/10;
		
	}
	if(a==c){
//		printf("%lld ",c);
		while(a>0){
			d=a%10;
			a=a/10;
			j+=d;
			if(d==4){
				j=5;
				break;
				
			}
//			printf("d:%lld ",d);
		}
		if(j%10==0){
			printf("%lld ",c);
		}
	}
}
printf("\n");	
}

int main(){
	int a;
	scanf("%d",&a);
	long long b,i;
	for(i=1;i<=a;i++){
		scanf("%lld",&b);
		if(b>1){
		four(b);
		}
	}
} 
