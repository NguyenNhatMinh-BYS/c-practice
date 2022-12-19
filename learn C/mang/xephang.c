#include<stdio.h>
int main(){
	long a,i,j;
	scanf("%ld",&a);
	long arr[a],brr[a];
	for(i=0;i<a;i++){
		scanf("%ld",&arr[i]);
		scanf("%ld",&brr[i]);
	}
	for(i=0;i<a;i++){
		for(j=i;j<a;j++){
			if(arr[i]>arr[j]){
				int c = arr[i];
				arr[i]=arr[j];
				arr[j]=c;
				c=brr[i];
				brr[i]=brr[j];
				brr[j]=c;
			}
		}
	}
//	for(i=0;i<a;i++){
//		printf("%d %d\n",arr[i],brr[i]);
//		
//	}
	long time =0;
	for(i=0;i<a;i++){
		if(arr[i]>=time){
			time = arr[i]+brr[i];
			continue;
		}
		if(arr[i]<time) time = time + brr[i];
	
	}
	printf("\n%ld",time);
}
