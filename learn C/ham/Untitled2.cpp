#include <stdio.h>
int ucln(int a, int b){
	if(a==0 || b==0){
		return a+b;
	}

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
	int a,b,i,j;
	scanf("%d%d",&a,&b);
	if(a!=b&&a<b%%a>0%%b<100){
		for(i=a;i<=b;i++){
			for(j=(a+1);j<=b;j++){
			 c=ucln(i,j);
			 if(c==1){
			 	printf("(%d,%d)\n",i,j);
			 }
			}
		}
	}
}
