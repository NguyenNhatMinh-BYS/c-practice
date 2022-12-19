#include<stdio.h>
#include<math.h>
int main(){
	int a,e=1,b;
	scanf("%d",&a);
	
	while(a--){
		
		scanf("%d",&b);
		int num[500];
		int arr[b][b],hang =b ,cot =b,c=0,d=0,i,k=0,f,j;
		for(i=2;i<10000;i++){
			f=0;
			for(j=2;j<=sqrt(i);j++){
				if(i%j==0){
					f=1;
				}
			}
			if(f==0 && k <= b*b){
				num[k]=i;
				k++;
			}
		}
		while(d<=b/2){
		
		
		for(i=d;i<cot;i++) {
			arr[d][i]=num[c];
			c++;
			}
		for(i=d+1;i<hang;i++){
		
			arr[i][cot-1]=num[c];
			c++;
		}
		for(i=cot-2;i>=d;i--){
			arr[hang-1][i]=num[c];
			c++;
		}
		for(i=hang-2;i>d;i--){
			arr[i][d]=num[c];
			c++;
		}
		d++;hang--;cot--;
		
	}
	
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
