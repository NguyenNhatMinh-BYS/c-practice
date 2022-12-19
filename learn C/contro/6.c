#include <stdio.h>

void thaydoi(int m,int *k){
	m=10;
	*k=500;
}
void doicho(int *m,int*n){
	int tmp =*m;
	*m=*n;
	*n=tmp;
}
int main(){
int	m=100;
int	n=200;
	thaydoi(m,&n);
//doicho(&m,&n);
	printf("m= %d\n n= %d",m,n);
}
