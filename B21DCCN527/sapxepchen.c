#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int arr[a],tmp=0;;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<a;i++){
		for(j=i;j>0;j--){
			if(arr[j]<arr[j-1]){
				tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
		printf("Buoc %d:",i);
		for(j=0;j<=i;j++){
			printf(" %d ",arr[j]);
		}
		printf("\n");
	}
}
