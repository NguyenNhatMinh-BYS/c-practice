#include <stdio.h>
int main(){
	int i,a,b=0,j,c;
	
	scanf("%d",&j);
	for(a=1;a<=j;a++){
	
	scanf("%d",&c);
	if(c<2){
		printf("NO\n");
		return 0;
	}
	for(i=2;i <= sqrt(c);i++){

		if(c%i==0 ){
			b+=1;
		}
		
	}
	
	if(b==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	b=0;
} 

} 
