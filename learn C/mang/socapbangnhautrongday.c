#include<stdio.h>
int main(){
	int a,b,i,j;
	scanf("%d",&a);	
	for(i=0;i<a;i++){
		scanf("%d",&b);
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d",&arr[j]);
		}
		int d=0;
		for(j=0;j<(b-1);j++){
			if(arr[j]==arr[j+1]){
				d++;
			}
		}
		printf("%d\n",d);
	} 
}  
