#include<stdio.h>
int main(){
int a,i,j,c=97,e=97;
scanf("%d",&a);
for(i=1;i<=a;i++){
	if(i%2==0){
	
	for(j=e;j>=c;j--){
		printf("%c ",j);
	}
}
	if(i%2!=0){
		for(j=c;j<=e;j++){
		printf("%c ",j);
	}	
	}
	e=e+i+1;
	c+=i;
//		printf("\ne:%d c:%d",e,c);
	printf("\n");
}
}
