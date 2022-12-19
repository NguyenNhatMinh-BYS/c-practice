#include <stdio.h>
int main(){
	int a,i,j,b,c;
	
	c=1;
	scanf("%d",&a);
	b=a;
for(i=1;i<=a;i++){
	for(j=(b-1);j>0;j--){
		printf("~");
	}
	b-=1;
	for(j=1;j<=c;j++){
		printf("*");
	}
	c+=1;
	printf("\n\n");
}

}
