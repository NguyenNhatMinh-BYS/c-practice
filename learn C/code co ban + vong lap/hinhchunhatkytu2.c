#include<stdio.h>
int main(){
	int a,b,i,j,c,d,e=1,f,h;
	scanf("%d",&a);
	scanf("%d",&b);
	c= 64;
	d=2;
	for(i=1;i<=a;i++){
		e=1;
		f=c+i;
		h=c+b;
		if(f>(b+c)){
			printf("%c",h);
			while(e<b){
				e+=1;
				h-=1;
				printf("%c",h);
				
			}
			printf("\n\n");
		}
		else{
			printf("%c",c+i);
		
		
		for(j=d;j<=b;j++){
		
		printf("%c",c+j);
		e+=1;
	}
		while(e<b){
			e+=1;
			f-=1;
			printf("%c",f);
		}
		printf("\n\n");
		d+=1;
	}
	}
}
