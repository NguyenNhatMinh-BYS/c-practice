#include<stdio.h>
#include<string.h>
int sum( char c[],long long  a){
	long long  i,sum=0,p[100],k=0;
	for(i=a-1;i>=0;i--){
		
		if(c[i]=='I'){
			p[k]=1;
			sum +=1; 
		}
		else if(c[i]=='V'){
			p[k]=5;
			sum +=5; 
		}
		else if(c[i]=='X'){
			p[k]=10;
			sum +=10; 
		}
		else if(c[i]=='L'){
			p[k]=50;
			sum +=50; 
		}
		else if(c[i]=='C'){
			p[k]=100;
			sum +=100; 
		}
		else if(c[i]=='D'){
			p[k]=500;
			sum +=500; 
		}
		else if(c[i]=='M'){
			p[k]=1000;
			sum +=1000; 
		}
	
		if(p[k]<p[k-1] && k>0){
		
			sum=sum-p[k]*2;
		
		}
		k++;
//		printf("%lld",sum);
	}
	return sum;
}
int main(){
	long long  t;
	scanf("%lld",&t);
	
	while(t--){
		
		char c[1000];
		scanf("%s",c);
		long long a=strlen(c);
		sum(c,a);
		printf("%lld\n",sum(c,a));
	}
}
