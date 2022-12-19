#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long s,i,check=0,j;
		scanf("%lld",&s);
		long long  a[s];
		for(i=0;i<s;i++){
			scanf("%lld",&a[i]);
			
		}
		for(i=0;i<s && check ==  0;i++){
			for(j=i+1;j<s && check ==  0;j++){
				if(a[i]==a[j] && a[i]>=0){
					printf("%lld",a[i]);
					check=1;
					
				}
			}
		}
		if(check==0){
			printf("NO");
		}
		printf("\n");
	}
}
