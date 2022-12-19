#include<stdio.h>
int main(){
	int i,j,a,f=0;
	scanf("%d",&a);
	int b[a],c[a],e[100],g[100];
	for(i=0;i<a;i++){
			scanf("%d",&b[i]);
			c[i]=1;
	} 
	for(i=0;i<a;i++){
		int d=1;
		
		if(c[i]){
			for(j=(i+1);j<a;j++){
				if(b[i]==b[j]  ){
					d++;
					c[j]=0;
				}
				
			}
			e[f]=b[i];
				g[f]=d;
				f++;
		}
	}
	for(i=0;i<f;i++){
		printf("%d %d\n",e[i],g[i]);
	}
}
