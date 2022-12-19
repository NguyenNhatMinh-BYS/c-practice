#include<stdio.h>
int main(){
	long a,k,n,b;
	scanf("%ld %ld %ld",&a,&k,&n);
	if(a>=n){
		printf("-1");
	}
	if(a<n){
		b=n-a;
		long  i,check=0;
		for(i=1;i<=b;){
			if((a+i)%k==0){
				printf("%ld ",i);
				check=1;
				i+=k;
			}
			else{
				i++;
			}
		}
		if(check==0){
		printf("-1");
	}
	}
	
	
} 
