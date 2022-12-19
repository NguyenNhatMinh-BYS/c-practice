#include<stdio.h>
#include<math.h>
void dem(long long  a){
	long long   b,c,i,e;
	for(i=2;i<=7;i+=2){
		
		c=0;
		e=a;
		while(e>0){
		b=e%10;
//		printf("e: %lld\n",e);
		e=e/10;
//		printf("i: %lld\n",i);
//		printf("b: %lld\n",b);
		if(i==b){
			c+=1;
//			printf("c:- %lld\n",c);
		}
	}
	 

		if(c>0) printf("%lld %lld\n",i,c);
			if(i==2){
			i--;
		}
	} 
	
}
int main (){
	long long  a;
	scanf("%lld",&a);
	dem(a); 
} 
