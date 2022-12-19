#include<stdio.h>
int main(){
	int a,b,i,j,c,d,e=0,f,h;
	scanf("%d",&a);
	scanf("%d",&b);
	c= 96;
	d=1;
	 	h= a>b?a:b; 
	for(i=a;i>0;i--){
		f=a>b?a:b;
	
		for(j=d;j>=1;j--){
			if(e<b){
			
			printf("%c",c+f);
			f-=1;
			e+=1;
		}
		}
	
		f=b; 
		for(j=1;j<=b;j++){
			if(e<b){
				printf("%c",c+h);
				e+=1; 
			}
		} 
	h-=1;	
	d+=1;
	e=0; 
	printf("\n\n"); 
		}
		
}
