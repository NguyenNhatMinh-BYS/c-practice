#include <stdio.h>
int main(){
	int b,c,i,j;
	scanf("%d %d",&b,&c);
	int a[b][c];
	for(i=0;i<b;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	} 
		for(i=0;i<c;i++){
			for(j=0;j<b;j++){
				printf("%d ",a[j][i]);
			}
			printf("\n");
		}
}
