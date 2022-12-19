#include<stdio.h>
int main(){
	int a,i,j,f=0;
	scanf("%d",&a);
	int b[a],c[a],e[100];
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
		c[i]=1;
	}
	for(i=0;i<a;i++){
		int d =0;
		
		if(c[i]){
		
			
			for(j=(i+1);j<a;j++){
				if(b[j]==b[i]  ){
					
					d++;
					c[j]=0;
					
				}
				
				
			}
		if(d==0){
//			printf("%d\n",b[i]);
			e[f]=b[i];
			f+=1;
//				printf("f:%d\n",f);
			
		} 
		}
		
	}
	printf("%d\n",f);
	for(i=0;i<f;i++){
		printf("%d ",e[i]);
	}
}
