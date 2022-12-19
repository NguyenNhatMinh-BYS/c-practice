#include<stdio.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	int arr[a][a];
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
			scanf("%d",&arr[i][j]);
		}
	}	
//	printf("\n");
	for(i=0;i<a/2;i++){
		int d=0;
		for(j=i;j<a-i;j++){
			if(d==0){
				int c=arr[i][j];
				arr[i][j]=arr[i][a-i-1];
				arr[i][a-i-1]=c;
				d++;
//				printf("%d %d ",arr[i][j],arr[i][a-i]);
			}
		}
		
		
	
	}
	if(a%2==0){
	int x=0,e=0;
	for(i=a/2;i<a;i++){
		int d=0;
		
		for(j=i-x-1;j<a;j++){
			if(d==0){
				int c=arr[i][j];
				arr[i][j]=arr[i][a/2+e];
				arr[i][a/2+e]=c;
				d++;
			}
		}
		x+=2;
		e++;
	}
}
	if(a%2!=0){
//	printf(".");
int x=1;
	for(i=a/2+1;i<a;i++){
		int d=0;
		
		for(j=a/2-x;j<a;j++){
			if(d==0){
//				printf("\n%d %d \n",i,j);
				int c=arr[i][j];
				arr[i][j]=arr[i][a/2+x];
				arr[i][a/2+x]=c;
				d++;
				
			}
		}
		x++;
	}
}
		for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
