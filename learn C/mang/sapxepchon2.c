#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int brr[a],arr[a],i,j;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		brr[i]=arr[i];
	}
	for(i=0;i<a;i++){
		for(j=i;j<a;j++){
			if(brr[i]>brr[j]){
				int c=brr[i];
				brr[i]=brr[j];
				brr[j]=c;
			}
		}
	}
	for(i=0;i<a-1;i++){
		for(j=i;j<a;j++){
			if(arr[j]==brr[i]){
				int c =arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
		for(j=0;j<a;j++){
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	
} 
