#include<stdio.h>
int main(){
	int a,e=0,j;
	scanf("%d",&a);
	int arr[a],brr[a];
	int i;
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		int d=0;
		if(arr[i]>=2){
			for(j=2;j<=sqrt(arr[i]);j++){
				if(arr[i]%j==0){
					d=1;
					break;
				}
			}
			if(d==0){
				brr[e]=arr[i];
				e++;
			}
		}
	}
	printf("%d ",e);
	for(i=0;i<e;i++){
		printf("%d ",brr[i]);
	}
}
