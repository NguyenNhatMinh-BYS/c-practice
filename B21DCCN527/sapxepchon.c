#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int temp;
	for(i=0;i<n-1;i++){
		int c=i;
		for(j=i+1;j<n;j++)
		if(a[c]>a[j])
		c=j;
		if(c!=i){
			temp=a[c];
			a[c]=a[i];
			a[i]=temp;
		}
		printf("Buoc %d:",i+1);
		for(j=0;j<n;j++)
		printf(" %d",a[j]);
		printf("\n");
		}
		
		
	}
	
