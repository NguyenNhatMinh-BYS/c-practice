#include<stdio.h>
#include<math.h>
int main(){
	int a,i;
	long long b;
	scanf("%d",&a);
	while(a--){
		scanf("%lld",&b);
		if(b>0){
			int num=b,c=2,d=0,arr[100],e,f=1;
			while(num>1){
			e=0;
			while(num%c==0){
				num=num/c;
				e=1;
//				printf("%d \n",num);
			}
//			printf("%d\n ",c);
			if(e==1){
			
			f*=c;
		
		
		}
		c++;	
		}
			
		printf("%d\n",f);
		}
	}
} 
