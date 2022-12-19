#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int change(char a[][100],int n){
	int i;
	for(i=0;i<strlen(a[n]);i++){
		a[n][i]=tolower(a[n][i]); 
	}
	a[n][0]=toupper(a[n][0]); 
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
			printf("%s\n",a[n]); 
			change(a,n);
			n++;
			
			stok=strtok(NULL," ");
		}
		
		for(i=1;i<n;i++){
			printf("%s",a[i]);
			if(i!=n-1) printf(" ");
		}
		printf(", ");
		for(i=0;i<strlen(a[0]);i++){
		printf("%c",toupper(a[0][i])); 
		}
		printf("\n"); 
		
}
}
