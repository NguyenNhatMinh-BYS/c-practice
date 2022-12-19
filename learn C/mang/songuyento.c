#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,i,j,z,f;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		f=0;
		scanf("%d",&b);
		int d[b];
		if(b>0){
			for(j=0;j<b;j++){
			int e=0;
			
				scanf("%d",&c);
				if(c>1){
					for(z=2;z<=sqrt(c);z++){
						if(c%z==0){
							e=1;
						}
					
					}
					if(e==0){
//						printf("c:%d\n",c);
						d[f]=c;
						f+=1;
					}
					
				}
			}
		}
		
		for(j=0;j<f;j++){
		printf("%d ",d[j]);
	}
	printf("\n");
	}
	
}
