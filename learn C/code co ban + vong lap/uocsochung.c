#include<stdio.h>
int ucln(int a, int b){
	if(a==0 || b==0){
		return a+b;
	}

while(a!=b){
	if(a>b){
		a-=b;
	}
	else if(b>a){
		b-=a;
	}
}
return a;
}
int main(void){
	int a,b,c,i;
	scanf("%d",&c);
	for(i=1;i<=c;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",ucln(a,b));
	}
}
