#include<stdio.h>
int main(){
	int t,n,m,p,i,j=1;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&m,&p);
		int arr[n],brr[m];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<m;i++){
			scanf("%d",&brr[i]);
		}
		printf("Test %d:\n",j);
		for(i=0;i<p;i++){
			printf("%d ",arr[i]);
		}
		for(i=0;i<m;i++){
			printf("%d ",brr[i]);
		}
		for(i=p;i<n;i++){
			printf("%d ",arr[i]);
		}
		printf("\n");
		j++;
	}
}
