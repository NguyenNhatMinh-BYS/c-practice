#include <stdio.h>
int main(){
	int a,i,j,d,e=0;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		d=0;
		
		for(j=0;j<a;j++){
			if(j>e){
				d++;
				printf("%d ",d);
			}
			if(e>=j){
				printf("0 ");
			}
		}
		printf("\n");
		e++;
	}
}
