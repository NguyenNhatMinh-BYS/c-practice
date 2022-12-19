#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int block[a],c[a];
	 for(i=0;i<a;i++){
	 	scanf("%d",&block[i]);
	 	c[i]=1;
	 }
	 for(i=0;i<a;i++){
	 	if(c[i]){
	 		for(j=(i+1);j<a;j++){
	 			if(block[i]==block[j]){
	 				c[j]=0;
	 				block[j]=0; 
				 }
			 }
		 }
	 }
	 for(i=0;i<a;i++){
	 	if(block[i]!=0){
	 		printf("%d ",block[i]); 
		 }
	 }
} 
