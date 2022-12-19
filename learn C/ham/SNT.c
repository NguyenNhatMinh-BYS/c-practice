#include <stdio.h>
#include <math.h>
void SNT(int a){
	int b,j,i,c;
	if(a>0) {
	
	for(j=2;j<=a;j++){
	b=0;
	c=sqrt(j);
	for(i=2;i<=c;i++){
		if(j%i==0){
			b+=1;
		}
	}
	if(b==0){
		printf("%ld\n",j);
	}
	
}
}
}
int main(){
	int a;
	scanf("%d",&a);
	SNT(a);
}
