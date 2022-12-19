#include<stdio.h>
int main(){
	int a,i,j,e=0,f=63,d;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		d=0;
		if(i>1){
		
		for(j=0;j<=e-1;j++){
			printf("%c",64+d);
			d+=2;
		}
	}
	d-=2;
		printf("%c",i+f);
		
		if(i>1){
		
		for(j=e-1;j>=0;j--){
				printf("%c",64+d);
			d-=2;
		}
	}
		
		printf("\n");
		f++;
		e++;
	}
}

