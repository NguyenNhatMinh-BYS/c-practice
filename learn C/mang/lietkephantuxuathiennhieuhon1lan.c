#include <stdio.h>
int main(){
	int a,i,j,b,e;
	scanf("%d",&a);
	int arr[a],d[100],c[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		c[i]=1;
	}
	for(i=0;i<a;i++){
		e=0;
		if(c[i]){
		
		for(j=(i+1);j<a;j++){
			if(arr[i]==arr[j]){
				c[i]=1;
				c[j]=0;
				
				e++;
				
			}
			
		}
		if(e==0){
			c[i]=0;
		}
	}
	}
	e=0;
	for(i=0;i<a;i++){
		if(c[i]) e++;
		
	}
	printf("%d\n",e);
	for(i=0;i<a;i++){
		if(c[i])
		printf("%d ",arr[i]);
	}
} 
