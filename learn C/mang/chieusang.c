#include <stdio.h>
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int a[m],i,j,e=0,f=0,g=0,c=0;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
			for(i=0;i<m;i++){
			 for(j=i;j<m;j++){
			 	if(a[i]>a[j]){
			 		int c=a[i];
			 		a[i]=a[j];
			 		a[j]=c;
				 }
			 }
		} 
	while(a[0]-k-e>1){
		e+=k*2+1;
		c++;
	}
		for(i=0;i<m-1;i++){
			f=0;
			while(a[i]+k+f+1<a[i+1]-k){
				f+=k*2+1;
				c++;
				
			}
		}
		while(a[m-1]+k+g<n){
			g+=k*2+1;
			c++;
		}
		printf("%d",c);	
	
} 

