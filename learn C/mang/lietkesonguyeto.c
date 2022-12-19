#include<stdio.h>
#include<math.h>
void snt(int arr[],int a){
	int i,j,d=0,e=0,b[100];
	for(i=0;i<a;i++){
		d=0;
		if(arr[i]<2){
			continue;
		}
		if(arr[i]>1){
			for(j=2;j<=sqrt(arr[i]);j++){
				if(arr[i]%j==0){
					
					d=1;
					break;
				}
			}
		
		}
		
			if(d==0){
				b[e]=arr[i];
				e++;
			}
	}
	printf("%d ",e);
	for(i=0;i<e;i++){
		printf("%d ",b[i]);
	}
}
int main(){
	int a,i;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	snt(arr,a);
}
