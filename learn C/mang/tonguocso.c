#include<stdio.h>
#include<math.h>
int brr[2*1000000+9];

int main(){
	int a,b,i,j;
	long long add=0;
	scanf("%d",&a);
	for(i=2;i<=2000000;i++){
		brr[i]=1;
	}
		for(i=2;i<=2000000;i++){
			
			if(brr[i]==1){
				
				
				for(j=i;j<=2000000;j+=i){
					brr[j]=i;
				}
			}
		}

	if(a>0){
	
	while(a--){
		scanf("%d",&b);
		
		
		
		while(b>1){
			add=add+brr[b];
			b/=brr[b];
		}
	
	
	
	}
	printf("%lld",add);
}
}
