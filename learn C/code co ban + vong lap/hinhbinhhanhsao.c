#include <stdio.h>
int main(){
	int a,j,i,z,b;
	scanf("%d",&a);
	b=a;
	for(z=1;z<=a;z++){
	b=b-1;
	for(i=b;i>0;i--){
		if(i>0){
			printf("~");
	}
		}
	for(j=1;j<=a;j++){
		if(j>0){
			printf("*");
		}
	}
	printf("\n\n");
	}
}

