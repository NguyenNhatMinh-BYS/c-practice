#include <stdio.h>
int main(){	
	int a,b,i,sum=0;
	printf("nhap dau mut [a;b]: \n");
	scanf("%d%d",&a,&b);
	
	for(i = a;i <= b;i++){
		sum+=i;
	
	}
	printf("%d",sum);
}
