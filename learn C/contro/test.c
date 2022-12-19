#include<stdio.h>
#include<conio.h>
int a[100];
void main()
{
	char b[10];
	gets(b);
	int n=0,j;
		for(j=0;j<strlen(b)-1;j++){ 
		n=(int)b[j];
		printf("%d ",n);
		}
}
