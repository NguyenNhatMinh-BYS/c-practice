#include<stdio.h>
int main(){
	int a,i,j,e=1;
	scanf("%d",&a);
	 int b;
	 while(a--){
	 	scanf("%d",&b);
	 	int arr[b],check[b];
	 	for(i=0;i<b;i++) {
	 		scanf("%d",&arr[i]);
	 		check[i]=1;
		 }
		for(i=b-1;i>0;i--){
			if(arr[i]>arr[i-1])
			check[i-1]=check[i]+1;
		}
		int max=1;
		for(i=0;i<b;i++){
			if(max<check[i]) max=check[i];
		}
		printf("Test %d:\n",e);
		printf("%d\n",max);
		
	 	for(i=0;i<b;i++){
	 		
	 		if(check[i]==max){
	 			for(j=i;j<i+max;j++){
	 				printf("%d ",arr[j]) ;
				 }
			 } 
			 printf("\n"); 
		 }
		 
		 printf("\n"); 
		 e++; 
	 } 
}
