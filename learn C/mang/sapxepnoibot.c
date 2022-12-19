#include<stdio.h>

int main(){
	int t,i,j,b=1,a=1;
	scanf("%d",&t);
	int arr[t];
	for(i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
while(b==1){

	 b=0,i=0; 
		
		for(j=i+1;j<t;j++){
			if(arr[i]>arr[j]){
				int tmp =arr[i];
				arr[i]=arr[j];
				arr[j]=tmp;
				i=j; 
				b=1; 
			
			}
			else{
				i++; 
			} 
		}
	
		if(b==0) return 0; 
		if(b==1){
			
				printf("Buoc %d: ",a++);
		} 
	
		for(j=0;j<t;j++) printf("%d ",arr[j]);
		
		printf("\n"); 
	} 
}

