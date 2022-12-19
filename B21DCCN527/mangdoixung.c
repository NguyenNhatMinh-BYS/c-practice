#include<stdio.h>
int main(){
	int n,i;
	long t;
	scanf("%d",&n);
	while(n--){
		int d=0;
		scanf("%ld",&t);
		int arr[t];
		for(i=0;i<t;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<t/2;i++){
			if(arr[i]!=arr[t-1-i]){
//				printf("%d",i);
//				printf("%d %d",arr[i] ,arr[t-1-i] );
				printf("NO\n");
				d=1;
				break;
			}
			
		}
		if(d==0) printf("YES\n");
		
	}
	
}
