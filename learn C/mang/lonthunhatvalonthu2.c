#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		for(j=(i+1);j<a;j++){
			if(arr[i]<arr[j]){
				int tmp = arr[j];
				arr[j]=arr[i];
				arr[i]=tmp;
			}
		}
	}
	printf("%d ",arr[0]);
	for(i=0;i<a;i++){
		if(arr[i]!=arr[0]){
			printf("%d",arr[i]);
			break;
		}
	}
	
}
