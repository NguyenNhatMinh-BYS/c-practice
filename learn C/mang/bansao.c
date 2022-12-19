#include<stdio.h>
#include<math.h>
 void snt(long arr[], int z,long long b){
 	int k,i,j,f;
 	arr[z]=2;
	z++;
	for(i=3;i<=b;i+=2){
		k=0;
		f=sqrt(i); 
		for(j=2;j<=f;j++){
			if(i%j==0){
			k=1;
			break;  
			}		
		}
		if(k==0){
		
		arr[z]=i;
		z++;
	}		
	}
	 int c,m[10],n;
		n=0;
		for(j=0;j<z;j++){
			c=0;
			while(b%arr[j]==0){
				b=b/arr[j];
				c=1;
			}
		 if(c==1){
		 	m[n]=arr[j];

		 	n++;
		 }			
		}
		c=1;
		for(j=0;j<n;j++){
			
			c*=m[j];
		}
		printf("%ld\n",c);	
 }
int main(){
	int a,i;
	 long long b;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%lld",&b);
		int z=0;
		long arr[b];
		snt(arr,z,b);
	}
}
