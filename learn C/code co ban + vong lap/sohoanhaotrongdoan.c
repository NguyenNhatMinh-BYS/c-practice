#include <stdio.h>
#include <math.h>
int main(){
	int z,a,b,i,j,d=0,e,f,g;
	scanf("%d",&b);
	scanf("%d",&a);
	f=a>b?a:b;
	g=a>b?b:a;
	for(i=g;i<=f;i++){
		for(z=0;z<=f;z++){
		
		e=0;
		d+=z;
		if(d>=g && d<=f){
//		printf("d: %d\n",d);
		for(j=1;j<d;j++){
			if(d%j==0){
				e+=j;
			}
			
			}
//			printf("e: %d\n",e);
			if(e==d){
				printf("%d ",d);
			}
		}
	}
	}
}
