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
	for(i=0;i<a;i++){
		if(i==o-1){
		
		for(j=0;j<b;j++){
			printf("%d ",arr[t-1][j]);
		}
		printf("\n");
		continue;
	}
	if(i==t-1){
		
		for(j=0;j<b;j++){
			printf("%d ",arr[o-1][j]);
		}
		printf("\n");
		continue;
	}
	else{
		for(j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		continue;
	}

	}
	
}
