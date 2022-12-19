#include <stdio.h>
// ham co 2 gia tri : gia tri tra ve (int float,double,...) va gia tri khong tra ve ( void)
int Min2(int a ,int b, int d){
	return d= a<b?a:b;
	
}
int Min3( int d, int c){
	return d<c?d:c;
}
int Max2(int a ,int b, int d){
	return d=a>b?a:b;
	
}int Max3(int d, int c){
	return d>c?d:c;
}

int main(){
	int a,b,c,d;
	printf("nhap 3 so a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	d= Min2(a,b,d);
	printf("MIN %d",Min3(d,c));
	d=Max2(a,b,d);
	printf("\nMAX %d",Max3(d,c));
}
