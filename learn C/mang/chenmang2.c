#include<stdio.h>

int main(){
	int a,b,i,j,z,d,t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++){
	d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&z);
	if(a>=1&&b>=1){
	
	int x[a],y[b];
	for(i=0;i<a;i++){
		scanf("%d",&x[i]);
	}
	for(i=0;i<b;i++){
		scanf("%d",&y[i]);
	}
	
	printf("Test %d:\n",k+1);;
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
printf("\n");
}
}
