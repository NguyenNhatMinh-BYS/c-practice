#include <stdio.h>
int main(){
	int a,b,i,sum=0;
	printf("nhap gia tri a= \n");
	scanf("%d",&a);
	printf("nhap gia tri b= \n");
	scanf("%d",&b);
	if(a<b){
	
	for(i=a;i<=b;i++){
		if(i%2==0){
			sum+=i;
		}
		
	}
	printf("tong so chan trong doan [a;b] la: %d",sum);
}
	if(a>b){
		printf("xin moi nhap lai!(a>b)");
		return 0;
	}
	
}
