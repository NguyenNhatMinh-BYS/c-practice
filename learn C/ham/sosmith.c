#include<stdio.h>
#include<math.h>
long long smith1(long long a){
	long long d=0,i,e=a;
	while(e>0){
		d+=e%10;
		e/=10;
	
	}
//	printf("d: %lld\n",d);
	return d;
}
long long smith(long long a){
	long long i,e,f=0,j=0;
	e=a;
	
	 
	for(i=2;i<=sqrt(a);i++){


			while(a%i==0){
		
			
			f+=smith1(i);
			a=a/i;
		
			}
			


	}
	if(e==a)
		return 0;
	
	if(a!=1)
	f+=smith1(a);
//	printf("f: %lld\n",f);
	 return f;

}

int main(){
	long long  a;
	scanf("%lld",&a);
	if(a>0){
	
	if(smith(a)==smith1(a)){
		printf("YES");
	}
	else{
		printf("NO");
	}
}
}
