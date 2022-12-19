#include <stdio.h>
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=0&&b>0&&a<=1000&&b<=1000){
		printf("%d ",a+b);
		printf("%d ",a-b);
		printf("%d ",a*b);
		printf("%.2f ",(float)a/b);
		printf("%d ",a%b);
	}
	else if(b==0){
		printf("0");
	}
}
