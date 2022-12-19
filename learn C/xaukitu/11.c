#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int change(char a[][100],int n){
	int i;
	strlwr(a[n]);// chuyen chuoi thanh chu thuong 
		
	}

int main(){
	int t,i;
	scanf("%d",&t);
	getchar();
	char c[100];
	while(t--){
		gets(c);
		char a[100][100];
		char *stok=strtok(c," ");
		int n=0;
		while(stok!=NULL){
			strcpy(a[n],stok);
			change(a,n);
			n++;
			
			stok=strtok(NULL," ");
		}
		
		for(i=0;i<n-1;i++){
			printf("%c",a[i][0]);
		}
		printf("%s",a[n-1]);
		printf("@gmail.com\n");
	}
} 
