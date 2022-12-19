#include<stdio.h>
int main(){
	int b,a,i,j,z;
	 scanf("%d",&a);
	 for(i=0;i<a;i++){
	 	scanf("%d",&b);
	 	long first[b];
	 	for(j=0;j<b;j++){
	 		scanf("%ld",&first[j]);
		}
		int d=(b-1);
		for(j=0;j<b;j++){
			int e=0;
			for(z=(j+1);z<b;z++){
				if(first[j]>first[z]){
					e+=1;
//					printf("alo"); 
				}
			}
//			printf("e:%d \n",e);
//				printf("d:%d \n",d);
//				printf("%d \n",first[j]);
			if(d==e){
				
				printf("%ld ",first[j]);
			}
		d--;	
		}
		printf("\n") ;
	 }
}
