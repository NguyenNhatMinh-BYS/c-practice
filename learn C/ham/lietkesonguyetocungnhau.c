#include <stdio.h>
int ucln(int a, int b){
	

while(a!=b){
	if(a>b){
		a-=b;
	}
	else if(b>a){
		b-=a;
	}
}
return a;
}
int main(){
	int a,b,i,j,c;
	scanf("%d%d",&a,&b);
	if(a<b&&a>2&&b<100){
		for(i=a;i<=b;i++){
			for(j=a;j<=b;j++){
				if(i<j){
				
			 c=ucln(i,j);
			 if(c==1){
			 	printf("(%d,%d)\n",i,j);
			 }
		}
			}
		}
	}
}
