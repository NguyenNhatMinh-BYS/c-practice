#include<stdio.h>

int main(){
	int a,b,i,j,z,d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>=1&&b>=1){
	
	int x[a],y[b];
	for(i=0;i<a;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<b;i++){
		scanf("%d",&y[i]);
	}
	scanf("%d",&z);
	
	for(i=0;i<a;i++){
		if(i==z && d!=1 && z>=0 && z<a ){
			d=1;
			for(j=0;j<b;j++){
		printf("%d ",y[j]);
						}
		}
	
		printf("%d ",x[i]);
		if(z==(i+1)&&d!=1){
			d=1;
			for(j=0;j<b;j++){
		printf("%d ",y[j]);
						}
		}
		
	}
}
}
