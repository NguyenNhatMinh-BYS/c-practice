#include<stdio.h> 
int main(){ 
int t; 
scanf("%d", &t);
 while(t--){
 long long b,i=2; 
 scanf("%lld",&b);
 while(i<=b/i){
 	if(b%i==0) b/=i;
 	if(b%i!=0)i++;
 }
 printf("%lld\n",b);
 
    } 
	}


