#include<stdio.h>
#include<math.h>
int main(){
long long m,n,j;
long long k,i=0;


 
   
	scanf("%lld%lld",&m,&n);
	long a=sqrt(m),b=sqrt(n);
	
	if( a*a ==m){
		m=a;
	}
	else{
		m=a+1;
	}
	printf("%lld\n",b-m+1);
		for(j=m;j<=b;j++){
			printf("%lld\n",j*j); 
			
			
		}

return 0; 
}

