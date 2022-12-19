#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	int arr[100][100];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int o,t;
	scanf("%d %d",&o,&t);
	o=o-1,t=t-1;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(j==o){
				printf("%d ",arr[i][t]);
				
			}
				if(j==t){
				printf("%d ",arr[i][o]);
			}
				if(j!=o &&j!=t ) {
				printf("%d ",arr[i][j]);
			}
			
		}
		printf("\n");
	}
	
}
