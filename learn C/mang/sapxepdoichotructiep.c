#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int change[a];
	if(a>0){
	for(i=0;i<a;i++)
	
		scanf("%d",&change[i]);
	
		
	
	for(i=0;i<a;i++){
		for(j=i;j<a;j++){
			if(change[i]>change[j]){
				int c= change[i];
				change[i]=change[j];
				change[j]=c;
			}
			
		}
		if(i<a-1){
		
		printf("Buoc %d: ",i+1);
		for(j=0;j<a;j++)
		printf("%d ",change[j]);
		
		printf("\n\n");
	}
		
	}
	
	
}
}
