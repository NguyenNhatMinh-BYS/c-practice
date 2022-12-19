#include <stdio.h>
#include <math.h>
int main(){
	int a,stt=1,i,j;
	scanf("%d",&a);
	while(a--){
		
		int n,m;
		scanf("%d %d",&n,&m);
		int arr[n][m],brr[m][n];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&arr[i][j]);
				brr[j][i]=arr[i][j];
			}
		}
		printf("Test %d:\n",stt);
		stt++;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			int k,sum=0;
			for(k=0;k<m;k++){
				sum+= arr[i][k]*brr[k][j];
			}
			printf("%d ",sum);	
			}
			printf("\n");
		}
	}
	return 0;
}
