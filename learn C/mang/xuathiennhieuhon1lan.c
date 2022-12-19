#include<stdio.h>
int main(){
	int a,i,j,d=0,z;
	scanf("%d",&a);
	int b[a],c[a];
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
		c[i]=1; 
	}
	for(i=0;i<a;i++){
		int dem=0;
		if(c[i]){
			for(j=(i+1);j<a;j++){
				if(b[i]==b[j]){
					dem++;
					c[j]=0;
				}
			}
			if(dem>0) printf("%d ",b[i]); 
			
		} 
	}
	
}  
