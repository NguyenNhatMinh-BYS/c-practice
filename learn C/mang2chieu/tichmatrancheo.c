#include <stdio.h>
#include <math.h>
int main(){
	int a,stt=1,i,j;
	scanf("%d",&a);
	while(a--){
		
		int n,m;
		scanf("%d",&m);
		int arr[m][m],brr[m][m];
		for(i=0;i<m;i++){
			int e=1;
			for(j=0;j<m;j++){
				if(e<=i+1){
					arr[i][j]=e;
					e++;
				brr[j][i]=arr[i][j];
				continue;
				}
				else if(e>i){
					arr[i][j]=0;
					
				brr[j][i]=arr[i][j];
				continue;
				}
				
			
			}
		}
		printf("Test %d:\n",stt);
		stt++;
		
		for(i=0;i<m;i++){
			for(j=0;j<m;j++){
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
