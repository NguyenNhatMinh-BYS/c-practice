#include <stdio.h> 
int main(){
	int a,i,j,c;
	scanf("%d",&a);
	int arr[a];
	
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	
	int d=0;
	for(i=0;i<a;i++){
		
		for(j=d;j<a;j++){
			if(arr[i]<arr[j]){
					c=arr[i];
				arr[i]=arr[j];
				arr[j]=c;
			}
			
			
		}
		d+=1;
//		printf("%d",arr[1]);
	}
	for(i=(a-1);i>=0;i--){
		if(arr[i]>arr[a-1]){
			printf("%d %d",arr[a-1],arr[i]);
			break;
		}
	}
}
