#include<stdio.h>
#include <math.h>
long long doubled(long long b){
	long long a[2],d,c;
	c=b%10;
	a[0]=c;
//	printf("0:%lld\n",a[0]);
	while(b>0){
		c=b%10;
		b=b/10;
		
		
		
	}
	a[1]=c;
//	printf("1:%lld",a[1]);
	if(a[0]==a[1]*2 ||a[0]*2==a[1]) return 1;
	else return 0;
}
long long reversible(long long b){
	long long d,c,e=0,f=0,a;
	b=b/10;
	a=b;
	while(a>9){
		c=a%10;
		a=a/10;
		e=e*10+c;
		f+=1;
	}
	b=b-a*pow(10,f);
	if(e==b){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int a,i;
	long long b;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%lld",&b);
		if(b>0){
			if(reversible(b)==1 && doubled(b)==1 ){
				printf("YES\n"); 
			}
			else{
				printf("NO\n"); 
			}
		}
	}
}
//&& doubled(b)==1
