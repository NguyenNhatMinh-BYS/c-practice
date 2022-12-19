#include<stdio.h>
#include<math.h>
int main(){
	long a,b,d,i,x,y;
	scanf("%ld",&a);
	d=a;
	if(a>0){
	
	for(i=0;i<10;i++){
		if(d%10==i){
			d=d-i;
			x=i;
		}
	}
	
	
	while(a>9){
		b+=1;
		a/=10;
	}
	y=x*pow(10,b);
	d=d-a*pow(10,b);
	printf("%d",a);
	printf(" %d",x);

	
}
}
