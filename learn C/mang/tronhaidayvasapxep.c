#include<stdio.h>
int main(){

int a,i,j,b,u=1;
scanf("%d",&a);
while(a--){
	scanf("%d",&b);
	int arr[b],brr[b];
	for(i=0;i<b;i++) scanf("%d",&arr[i]);
	for(i=0;i<b;i++) scanf("%d",&brr[i]);
	for(i=0;i<b;i++){
		for(j=i;j<b;j++){
			if(arr[i]>arr[j]){
				int c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
		}
	}
	for(i=0;i<b;i++){
		for(j=i;j<b;j++){
			if(brr[i]<brr[j]){
				int c=brr[i];
				brr[i]=brr[j];
				brr[j]=c;
			}
		}
	}
//	for(i=0;i<b;i++) printf("%d",arr[i]);
//	printf("\n");
//	for(i=0;i<b;i++) printf("%d",brr[i]);
int e=0;
printf("Test %d:\n",u);
while(e<b){
	printf("%d ",arr[e]);
	printf("%d ",brr[e]);
	e++;
}
u++;
printf("\n");
}
}
