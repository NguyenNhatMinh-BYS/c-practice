#include <stdio.h>
int main(){
	long m,n,p,q,i,j,k;
	scanf("%ld %ld %ld %ld",&m,&n,&p,&q);
	if(m>0 && n>0 && p>0 && q>0) {
	
	long a[m][n],b[n][p],c[p][q],d[10][10],e[10][10];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%ld",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%ld",&b[i][j]);
		}
	}
		for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%ld",&c[i][j]);
		}
	}
	printf("\n"); 
	int sum;
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			sum=0;
			for(k=0;k<n;k++){
			sum += a[i][k]*b[k][j];	
			
			}
		d[i][j]=sum;
		}
	
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			sum=0;
			for(k=0;k<p;k++){
				sum += d[i][k]*c[k][j];	
				
			}
			
			e[i][j]=sum;
			
		}
	} 
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%ld ",e[i][j]);
		}
		printf("\n");
	}
}
}
