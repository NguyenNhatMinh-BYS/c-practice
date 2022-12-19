#include<stdio.h>
#include<stdio.h>
int main(){
	int a,j;
	scanf("%d",&a);
	
	int arr[a],i,brr[a],c[a],d;
	
	
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		brr[i]=1;
		
	}
	int e=0;
	for(i=0;i<a;i++){
		d=1;
		
		if(brr[i]){
			for(j=i+1;j<a;j++){
				if(arr[i]==arr[j]){

					brr[j]=0;
					
					d++;
					printf("d:%d\n",d);
				}
			}
			
			printf("%d %d\n",arr[i],d);
			
		
			
		}
		
	}

	
}
