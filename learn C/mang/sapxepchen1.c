#include<stdio.h>
int main(){
	int a,i,j,e=1,d=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++) scanf("%d",&arr[i]);
	while(a--){
		for(i=0;i<e;i++){
			for(j=i;j<e;j++){
				if(arr[i]>arr[j]){
					int c=arr[i];
					arr[i]=arr[j];
					arr[j]=c;
				}
				
			}
		
			
		}
		printf("Buoc %d:",d);
		for(j=0;j<e;j++){
				printf(" %d",arr[j]);
			}
			printf("\n\n");
		e++;
		d++;
		
	}
} 
