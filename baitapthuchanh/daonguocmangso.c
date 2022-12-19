#include<stdio.h>
int main(){
	int a,i;
	scanf("%d",&a);
	int arr[a];
	if(a>1)
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=a-1;i>=0;i--){
		printf("%d ",arr[i]);
	}
	return 0;
}
