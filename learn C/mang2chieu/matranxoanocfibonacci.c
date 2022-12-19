#include<stdio.h>
int main(){
	int t,i,j,a[100][100];
	scanf("%d",&t);
	
	int h=t,c=t,d=0,count=0,z;
	
	if(t>0){
	int f0=0,f1=1,f,fibo[t*t];
	for(i=0;i<t*t;i++){
		if(i<=1){
			f=i;
		}
		else  if(i>1){
			
			f=f0+f1;
			f0=f1;
			f1=f;
		}
		fibo[i]=f;

	}
	
	for(d=0;d<=t/2;d++){

			
		for(i=d;i<c;i++){
			z=fibo[count];
			a[d][i]=z;
			count++;
			

		} 
	
	

		for(i=d+1;i<h;i++) {
			z=fibo[count];
			a[i][c-1]=z;
			
			count++;
			
}
		for(i=c-2;i>=d;i--){
			z=fibo[count];
		 a[h-1][i]=z;
		 count++;
}

		for(i=h-2;i>d;i--) {
			z=fibo[count];
		a[i][d]=z;
		count++;
		
		}
		
		c--;h--;
	}
//	for(j=0;j<t*t;j++){
//				printf("%d ",fibo[j]);
//			}
		printf("\n");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
} 
