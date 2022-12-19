#include <stdio.h>
int main(void){
long a,b,c=0,d=0,j,i;
scanf("%ld",&j);
for(i=1;i<=j;i++){
scanf("%ld",&a);
if(a>0){
while(a>0){
	b=a%10;
	a/=10;
	if(b%2==1){
		c+=1;
	}
	if(b%2==0){
		d+=1;
	}
}
printf("%ld %ld \n",c,d);
d=0;
c=0;
}
}
}
