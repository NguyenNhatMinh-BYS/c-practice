#include <stdio.h>
int main(){
	long a,i,b=0;
	scanf("%ld",&a);
	for(i=1;i<a;i++){
		if(a%i==0){
			b+=i;
			
		}
	}
	if(b==a){
		printf("1");
		
	}
	else{
		printf("0");
	}
	
	
}
