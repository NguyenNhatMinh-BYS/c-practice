#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int change[a],brr[a];
	if(a>0){
	for(i=0;i<a;i++){
		scanf("%d",&change[i]);
	brr[i]=change[i] ;
	}
	
	
		
	for(i=0;i<a;i++){
		
		
		for(j=i;j<a;j++){
			if(change[i]>change[j]){
				int c= change[i];
				change[i]=change[j];
				change[j]=c;
			}
			
		}	
	}
	for(i=0;i<a;i++){
			for(j=i;j<a;j++){
			if(brr[j]==change[i]){
				int c=brr[i];
				brr[i]=brr[j];
				brr[j]=c;
			}
			
		}
		if(i<a-1){
		
		printf("Buoc %d: ",i+1);
		for(j=0;j<a;j++)
		printf("%d ",brr[j]);
		
		printf("\n\n");
	}
	
	
}
}
}
