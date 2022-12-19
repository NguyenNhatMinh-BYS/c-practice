#include <stdio.h>
//#define pi 3.14

//float dttron(float r){ // buoc 2
//	float dt;
//	dt= r*r*pi;
//	return dt;
//}
// int main(void){  // buoc 1
//	float r;
//	scanf("%f",&r);
//	printf("%.2f\n",dttron(r)); /*chi goi duoc ham ben tren*/
//	char z[10]="MINH"; // toan sau chuoi ki tu
//	printf("%s z[0]=%d z[1]=%d z[2]=%d z[3]=%d z[4]=%d",z,z[0],z[1],z[2],z[3],z[4]); // neu thua so thi in ra %d=0
//}
# define Min(a,b) b<a?b:a
# define prf(M)	printf("Min= %d",Min(a,b))
int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	Min(a,b);
	prf(M);
	
} 
