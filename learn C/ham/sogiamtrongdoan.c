#include<stdio.h>
#include<math.h>
void reduce(long long a,long long b){
	long long i,j,c,d,e=0,f=0,k=0;
	for(i=a;i<=b;i++){
		c=i;
		e=0;
		f=0;
		while(c>9){
			d=c%10;
			c/=10;
			j=c%10;
			f++;
//				printf("%lld ",d);
//					printf("%lld ",j);
			if(d<j){
				e+=1;
//				
			}
			if(d>=j){
//				printf("i:%lld ",i);
				e=0;
				break;
			}
			
		}
		if(e==f){
//					printf("%lld ",i);	
				k+=1;
			}
	}
	
	
	printf("%lld\n",k);

}

int main(){
	long long a,b,c,i;
	scanf("%lld",&c);
	for(i=1;i<=c;i++){
		scanf("%lld %lld",&a,&b);
		if(a>1 && b>a){
			reduce(a,b);
		}
	}
}
