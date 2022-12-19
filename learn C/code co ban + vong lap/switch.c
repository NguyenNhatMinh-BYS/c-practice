#include <stdio.h>
int main(){
	
	char c;
	printf("nhap dau: ");
	scanf("%c",&c);
	int a,b;
	printf("nhap a va b:");
	scanf("%d%d",&a,&b);
	switch(c){
		case '+':
		printf("%d + %d = %d ",a,b,a+b);
		break;
		case '-':
		printf("%d - %d = %d",a,b,a-b);
		break;
		case '*':
		printf("%d * %d = %d",a,b,a*b);
		break;
		case '/':
			if(b!=0){
			
		printf("%d / %d = %d",a,b,a/b);
	}
		else{
			printf("can nhap b khac 0 de thuc hien phep chia.");
		}
		break;
		default:
			printf("khong co phep toan nao :%c",c);
		break;
	}
} 
