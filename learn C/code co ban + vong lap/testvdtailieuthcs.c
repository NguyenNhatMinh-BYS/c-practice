#include <stdio.h>
void main(void){
float a, b, max;
printf("\n Nh?p a="); scanf("%f", &a); /* nh?p giá tr? cho bi?n a*/
printf("\n Nh?p b="); scanf("%f", &b); /* nh?p giá tr? cho bi?n b*/
if (a>b) max=a;
else max= b;
printf("\n Max(a,b)=%10.2f",max);

}
 
