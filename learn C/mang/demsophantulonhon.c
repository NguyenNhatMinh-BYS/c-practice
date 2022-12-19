#include<stdio.h>

int main(){
	int a,b,i,j,d,m;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		d=0;
		scanf("%d",&b);
		if(b>=2 && b<=50){
		
		int arr[b];
		for(j=0;j<b;j++){
			scanf("%d",&arr[j]);
		}
		m=arr[0];
		for(j=0;j<b;j++){
		if(m<=arr[j]){
			d++;
			m=arr[j];
		}
			
		}
		
		
		printf("%d ",d);
		printf("\n");
	
}
}
}

