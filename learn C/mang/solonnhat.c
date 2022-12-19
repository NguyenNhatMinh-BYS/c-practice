#include<stdio.h>

int main(){
	int a,b,i,j,c,d;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		d=0;
		scanf("%d",&b);
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d",&c);
			arr[j]=c;
			
			
		}
		for(j=0;j<b;j++){
			if(j>0){
			
			if(arr[d]>arr[j]){
				continue;
			}
			
			if(arr[d]<=arr[j]){
				d=j;
			}
		}
		}
		if(arr[d]>0){
		
		printf("%d\n",arr[d]);
		for(j=0;j<b;j++){
			if(j!=d&&arr[d]==arr[j]){
				printf("%d ",j);
			}
		}
	printf("%d",d);	
}
printf("\n");
	}
}
