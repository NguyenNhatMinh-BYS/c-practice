#include<stdio.h>
int main(){
	int a,b,d=2;
	scanf("%d %d",&a,&b);
	if(a>b){
		int tmp = a;
		a=b;
		b=tmp;
	
	
	}
	int y =a*b,sum=1;
	while(d--){
	
	while(a!=0){
		int c = sum% a;
		sum=a;
		a=c;
		
		
	}
	
	b=a;
}
	sum=y/sum;	
	
	printf("%d",sum);
	
}
