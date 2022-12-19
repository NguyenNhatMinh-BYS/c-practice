#include <stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	} 
	int b;
	scanf("%d",&b);
	for(i=b;i<a;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<b;i++){
		printf("%d ",arr[i]);
	}
} 
