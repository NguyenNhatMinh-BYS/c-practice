#include <stdio.h>
#include <math.h>
void dividedBy_two(long long b){
	long long j=0,z=0;
	for(j=1;j<=sqrt(b);j++){
		if(b%j==0){
			if(j%2==0) z++;
			if((b/j)%2==0&&j*j!=b) z++;
		}
	}
	printf("%d",z);
	


}
	

int main(){
	int a,i;
	long long b;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		if(b>0){
			dividedBy_two(b);
		}
	}
}
//for(j=1;j<=sqrt(b);j++){
//		if(b%j==0 ){
//          if(j%2==0) z++;
//      if((b/j)%2==0 && j*j!=b) z++;
//    
//	}
//}
//	printf("%ld\n",z);
