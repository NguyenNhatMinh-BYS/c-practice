#include<stdio.h>
int main(){
	int t,data;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&data);
		long  a[data][data],cpy[data],cy=0,b[data];
		int i=0,j=0;
		while(i<data){
			j=0;
			b[i]=1;
			while(j<data){
				
				scanf("%ld",&a[i][j]);
				j++;
			}
			i++;
		}
		i=0,j=0;
			int k=0;
			
		for(i=0;i<data;i++){
		if(b[i]==1){
	
		int count =0;
		for(j=i+1;j<data;j++){
			if(a[i][0]==a[j][0]){
				b[j]=0;
				
				count++;
			}
		}
	
		if (count==1){
			
			cpy[cy]=a[i][0];
			cy++;
		}
	}
	}
	if(cy==0) {
	printf("-1");
	continue;	
	}

	for(i=1;i<data;i++){
		int sum =0; 
		for(j=0;j<data;j++){
			
			
			for( k=0;k<cy;k++){
				if(a[j][i]==cpy[k] && cpy[k]!=-1){
					sum++; 
					
				}
				
			}
				
			
		}
//		printf("%d ",sum);
			if(sum!=2) cpy[k-1]=-1;
	}
	for(i=0;i<cy;i++){
		if(cpy[i]!=-1){
			printf("%ld",cpy[i]);
		}
	}
	}
} 

























