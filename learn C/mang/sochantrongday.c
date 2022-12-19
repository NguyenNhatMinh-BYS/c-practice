#include <stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b);
		int arr[b];
		if(b>0&& b<=100){
			for(j=0;j<b;j++){
				int c;
				scanf("%d",&c);
				arr[j]=c;
			}
			for(j=0;j<b;j++){
				if(arr[j]%2==0){
					printf("%d ",arr[j]);
				}
			}
		}
		printf("\n");
	}
}
