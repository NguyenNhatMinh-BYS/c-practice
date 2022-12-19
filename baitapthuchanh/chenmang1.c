#include<stdio.h>
int main(){
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	int arr[a],brr[b];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<b;i++){
		scanf("%d",&brr[i]);
	}
	int c;
	scanf("%d",&c);
	for(i=0;i<c;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<b;i++){
		printf("%d ",brr[i]);
	}
	for(i=c;i<a;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
