#include<stdio.h>

int main(){
	int a,b,i,j,d,c;
	scanf("%d",&a);
while(a--){

		d=0;
		scanf("%d",&b);
		if(b>=2 && b<=50){
		
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d",&arr[j]);
		}
		c=arr[0];
		for(j=0;j<b;j++){
		if(c<=arr[j]){
			d++;
			c=arr[j];
		}
			
		}
		
		
		printf("%d ",d);
		printf("\n");
	
}
}
}

