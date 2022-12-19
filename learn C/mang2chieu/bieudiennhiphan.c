#include <stdio.h>
int main(){
	int a,c,b[50],e=0,i;
	scanf("%d",&a);
	
	
	if(a==0){
		printf("0");
	}
	
	
	if(a>=0){
	
	while(a!=0){
		c=a%2;
		a/=2;
		b[e]=c;
		e++;
	}
	for(i=e-1;i>=0;i--){
		printf("%d",b[i]);
	} 
}

} 
