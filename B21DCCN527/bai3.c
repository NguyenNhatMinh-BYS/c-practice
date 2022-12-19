#include<stdio.h>
#include<string.h>
int main(){
	char a[1200];
	char b[1200];
	gets(a);
	gets(b);
	int lena=strlen(a) ,lenb=strlen(b);
	int i;
	for(i=strlen(a);i<strlen(b);i++){
		a[i]='0';
	}
	for(i=0;i<strlen(b)/2;i++){
		a[i]=a[strlen(b)-i];
			printf("%c",a[i]);;
	}
	for(i=0;i<strlen(b)/2;i++){
		b[i]=b[strlen(b)-i];
	}	
	for(i=0;i<strlen(b);i++){
		printf("%c",a[i]);
	}
	for(i=0;i<strlen(b);i++){
		printf("%c",b[i]);
	}	
	
}
