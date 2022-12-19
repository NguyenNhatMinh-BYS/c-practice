#include<stdio.h>

int main(){
	int a,b,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		long arr[b];
		if(b<3&&b>0){
			printf("1\n");
			continue;
		}
		if(b<=0){
			continue;
		}
		if(b>2){
		
		for(j=0;j<b;j++){
			if(j<2){
			
			arr[j]=1;
			
		}
			if(j>1){
			
				arr[j]= arr[j-1]+ arr[j-2];
//				printf("%ld\n",arr[j]);
		}
		}
	}
		j--;
		printf("%ld\n",arr[j]);
	}
}
