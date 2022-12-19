#include<stdio.h>
int main(){
	int *pc,c;
	scanf("%d",&c);
	pc=&c;
	printf("%d\n",*pc);
	printf("%p\n",pc);
	printf("%p",&c);
}
