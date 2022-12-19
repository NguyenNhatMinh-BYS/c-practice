#include<stdio.h>
#include<math.h>
void capsnt(long n){
	long i,j,b=0,e,a[100000],d=0;
	for(i=3;i<=n;i++){
		e=0;
		for(j=2;j<=sqrt(i);j++){
			if(i%j==0){
				e=1;
				break;
			}
	}
		if(e==0 ){
		a[d]=i;
		d+=1; 
		}		
	}
	for(i=0;i<=d;i++){
		for(j=i;j<=d;j++){
		
			if(a[i]+a[j]==n && a[i]<=a[j]){
				printf("%ld %ld ",a[i],a[j]);
			} 
		} 
	} 
	}
int main(){
	int t,i;
	long n;
	scanf("%d",&t);
	if(t>=1 && t<=100){
	for(i=0;i<t;i++){
	scanf("%ld",&n);
	if(n>=4&&n<=10000 && n%2==0){
		capsnt(n);
		printf("\n"); 
	}		
	}
}
} 
