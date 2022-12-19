#include<stdio.h>
int main(){
	int a,b,i;
	scanf("%d",&a);
	while(a--){
		int e=0,c,f=0,j;
		scanf("%d",&b);
		int arr[b],brr[b],out[b];
		for(i=0;i<b;i++){
			scanf("%d",&arr[i]);
			brr[i]=1;
		}
		for(i=0;i<b;i++){
			c=0;
			if(brr[i]){
				for(j=0;j<b;j++){
					if(arr[i]==arr[j]){
						c++;
						brr[j]=0;
//						printf("%d ",arr[i]);
					}
				}
				if(c>=e){
					e=c;
					out[f]=arr[i];
//					printf("%d ",out[f]);
					f++;
					
				}
			}
		}
		
		for(i=0;i<f;i++){
			printf("%d ",out[i]);
		}
		printf("\n");
	}
}
