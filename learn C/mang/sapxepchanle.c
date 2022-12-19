#include<stdio.h>
int main(){
	int a,i,j,c=0,d=0;
	scanf("%d",&a);
	if(a>0){
	
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		
	}	
	for(i=0;i<a;i++){
		
		for(j=i;j<a;j++){
			if(arr[i]>arr[j]){
				int c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	for(i=0;i<a;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	for(i=0;i<a;i++){
		if(arr[i]%2!=0){
			printf("%d ",arr[i]);
		}
	}
	
}
}
