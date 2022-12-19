#include<stdio.h>
int main(){
	int  a,i,j,e=1,f,t;
	scanf("%d",&a);
	t=a-1; 
	for(i=1;i<=a;i++){
		printf("%c ",i+64);
		if(i>1){
			f=64+i+t;
			for(j=1;j<e;j++){
				printf("%c ",f);
				f+=t-j; 
			}
		}
		e+=1;
		printf("\n");
	}
}
