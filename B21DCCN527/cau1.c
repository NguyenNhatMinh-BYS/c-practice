#include<stdio.h>
int main(){
	int i,t, a[100],b[100],c[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	int j,n=0;
	for(i=0;i<t;i++){
		if(b[i]){
			c[n]=a[i];
			n++;
			for(j=i+1;j<t;j++){
				if(a[i]==a[j]){
					b[j]=0;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(c[i]>c[j]){
				int tmp=c[i];
				c[i]=c[j];
				c[j]=tmp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
} 
