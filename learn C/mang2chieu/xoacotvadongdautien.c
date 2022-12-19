#include<stdio.h>
int m2;
void result(int arr[][m2],int i,int m1){
	printf("Test %d:\n",i+1);
	int z,j;
	for(z=1;z<m1;z++){
		for(j=1;j<m2;j++){
			printf("%d ",arr[z][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main(){
	int a,b,i,j,z;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		int m1;
		scanf("%d %d",&m1,&m2);
		int arr[m1][m2];
		for(j=0;j<m1;j++){
			for(z=0;z<m2;z++){
				scanf("%d",&arr[j][z]);
				
			}
			
		}
		result(arr,i,m1);
	}
} 
