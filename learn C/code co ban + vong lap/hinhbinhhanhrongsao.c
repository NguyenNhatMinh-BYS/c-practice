#include <stdio.h>
int main(){
	long a,b,i,j;
	scanf("%ld",&a);
	b=a;
	 if(a>0){
	 	for(i=1;i<=a;i++){
	 		for(j=1;j<b;j++){
		 			printf(" ");
			 }
			 if(i==1||i==a){
			 	for(j=1;j<=a;j++){
			 		printf("*");
				 }
			 }
			 else{
			 	for(j=1;j<=a;j++){
			 		if(j==a||j==1){
			 			printf("*");
					 }
					 else{
					 	printf(" ");
					 }
				 }
			 }
			 printf("\n\n");
			 b=b-1;
			 }
		 }
	 }

