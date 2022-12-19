#include<stdio.h>
int main(){
	int t,n,m;
	scanf("%d",&t);
	int i,j,a=0,b=0,c,d=0,e=0,f,count=1;
	
	while(t--){
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(i=0;i<n;i++){
		a=0;
		for(j=0;j<m;j++){
		scanf("%d",&arr[i][j]);	
		a+=arr[i][j];
			
		}
		if(a>b) {
			b=a;
			c=i;
		}
	}
	for(i=0;i<m;i++){
		d=0;
		for(j=0;j<n ;j++){
			if(j==c) continue;
//				printf("\n%d %d\n",j,i);
//			printf("arr:%d ",arr[j][i]);
		d+=arr[j][i];
		
		if(d>e){
			e=d;
			f=i;
		}
		
			
		}
		
	}
//	printf("\n%d %d %d %d \n",b,c,e,f);
printf("Test %d:\n",count);
	for(i=0;i<n;i++){
		if(i!=c){
		
		for(j=0;j<m ;j++){
			if(j!=f)
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	}
		printf("\n");
		count++;
	}
} 
