#include<stdio.h>
int check(int arr[],int a){
	int i;
	for(i=0;i<a-1;i++)
	if(arr[i]>arr[i+1])
		return 1;
	
	return 0;
}
int main(){
	int a,i,j;
	scanf("%d",&a);
	int arr[a],tmp=0;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a-1;i++)
	if(check(arr,a)){
		for(j=0;j<a-1-i;j++){
		
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			
			}
		}
			printf("Buoc %d:",i+1);
			for(j=0;j<a;j++){
				printf(" %d",arr[j]);
				
			}
			printf("\n");
		
	}
}
