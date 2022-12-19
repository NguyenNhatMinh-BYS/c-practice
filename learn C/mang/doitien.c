#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d",&a);
	int arr[10]={1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(a--){
		scanf("%d",&b);
		int d=0,c;
		for(i=9;i>=0;i--){
//			printf("%d\n",arr[i]);
			if(b/arr[i]>0){
				
//					printf("%d\n",arr[i]);
				while(b/arr[i]>0){
					c=b/arr[i];
					b=b-arr[i]*c;
					d+=c;
				}
			}
		}
		printf("%d\n",d);
	}
}
