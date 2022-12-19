#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include <stdbool.h>
int main(){
	char c[1000];
	int a=0,b=0,i,z=0;
	gets(c);
	for(i=0;i<strlen(c);i++){
		
		if(isdigit(c[i])) b++;
		if(isalpha(c[i])) a++;
		if(ispunct(c[i])||c[i]==' ') {z++;
//			putch(c[i]);
//			printf("?\n");
		}
		
//		printf("\n");
	}
	printf("%d %d %d",a,b,z);
} 
