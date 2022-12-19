#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[][60] , int n){
	int i;
	for(i=0;i<strlen(a[n]);i++){
		a[n][i]=tolower(a[n][i]);
	}
}
	 
int main(){
	char c[60];
	int n=0,i;
	gets(c);
	char a[60][60];
	char *stok=strtok(c," ");
	while(stok!=NULL){
		strcpy(a[n],stok);
	check(a,n);
		n++;
		stok=strtok(NULL," ");
	}
	for(i=0;i<n-1;i++){
		printf("%c",a[i][0]);
	}
	printf("%s@ptit.edu.vn",a[n-1]);
}
