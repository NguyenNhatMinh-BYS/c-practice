#include <stdio.h>
#include <math.h>
int main(){
	int a,b,i,j,d=0,e;
	
	scanf("%d",&a);

	for(i=1;i<=a;i++){
		e=0;
		d+=i;
		if(d>2 && d<a){
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
