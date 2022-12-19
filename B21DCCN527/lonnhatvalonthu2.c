#include<stdio.h>
#include<math.h>
int main(){
	int a[100],i,max1,n,m,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max1=a[0];
	for(i=0;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
			m=i;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]!=max1){
			max2=a[i];
			break;
		}
		else{
			max2=-1;
		}
	}
		for(i=0;i<n;i++){
			if(a[i]>=max2 && a[i]!=max1)
			max2=a[i];
			
		}
		printf("%d %d",max1,max2);
		
	
}
