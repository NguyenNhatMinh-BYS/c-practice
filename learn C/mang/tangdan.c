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
			if(arr[i]>arr[j]){
				int tmp =arr[j];
				arr[j]=arr[i];
				arr[i]=tmp; 
			} 
		}
	}
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	} 
}
