#include <stdio.h> 
int main(){
	int a,i,j;
	scanf("%d",&a);
	int arr[a];
	if(a>0){
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		if(arr[i]%2==0){
			printf("%d ",arr[i]);
		}
	}
	printf("\n");
	for(i=0;i<a;i++){
		if(arr[i]%2==1){
			printf("%d ",arr[i]);
		}
	}
}
}
