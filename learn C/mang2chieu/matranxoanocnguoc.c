#include<stdio.h>
int main(){
	int a,e=1,b;
	scanf("%d",&a);
	
	while(a--){
		
		scanf("%d",&b);
		int arr[b][b],hang =b ,cot =b,c=b*b,d=0,i;
		while(d<=b/2){
		
		
		for(i=d;i<cot;i++) {
			arr[d][i]=c;
			c--;
			}
		for(i=d+1;i<hang;i++){
		
			arr[i][cot-1]=c;
			c--;
		}
		for(i=cot-2;i>=d;i--){
			arr[hang-1][i]=c;
			c--;
		}
		for(i=hang-2;i>d;i--){
			arr[i][d]=c;
			c--;
		}
		d++;hang--;cot--;
		
	}
	int j;
	printf("Test %d:\n",e);
	e++;
	for(i=0;i<b;i++){
		for(j=0;j<b;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
}

