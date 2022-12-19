#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,i,j;
	scanf("%d",&a);
	int k,f;
	for(i=0;i<a;i++){
		f=0;
		scanf("%d",&b);
		int d[b];
		if(b>0){
			for(j=0;j<b;j++){
			int e=0;
		scanf("%d",&c);
				if(c>1){
					for(k=2;k<=sqrt(c);k++){
						if(c%k==0){
							e=1;
						}
					}
					if(e==0){

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
