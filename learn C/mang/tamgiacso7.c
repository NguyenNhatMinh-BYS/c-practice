#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int c,e=1,f;
	for(i=1;i<=a;i++){
		c=a;
		printf("%d ",i);
		c--;
		if(i>1) {
				f=i+c;
			for(j=1;j<=e;j++){
			
				printf("%d ",f);
				c--;
				f=f+c;
			}
			e++;
		}
		
		printf("\n");
	}
}
