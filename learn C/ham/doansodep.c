#include <stdio.h>
#include <math.h>
int fibonaci(int i){
	int j,c,d=0,fn,f=1,f0=0;
	while(i>0){
	
	c=i%10;
	i/=10;
	d+=c;
}
for(j=0;j<=d;j++){
	c=0;
	if(j<=0){
		c=1;
	}
	else{
		fn=f+f0;
		f0=f;
		f=fn;

		if(d==fn){
			c=1;
			break;
		}
	}
}
return c;
}
int snt(int i){
	int j,b=1,c=sqrt(i);
	if(i<2 || i==7){
		return 0;
	}
	else{
		for(j=2;j<=c;j++){
			if(i%j==0){
				b=0;
			}
		}
		
	}
	return b; 
}
int main (){
	int a,b,i,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	c=a>b?b:a;
	d=a>b?a:b;
	if(a>=0 && b>=0&& a<1000&& b<1000){
		for(i=c;i<=d;i++){
			if(fibonaci(i)==1 && snt(i)==1){
				printf("%d ",i);
			}
		}
	}
}
