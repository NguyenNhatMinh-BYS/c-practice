#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int chance(char b[][100],int n){
	int i;
	for(i=0;i<strlen(b[n]);i++){
		if(i==0)
		if(b[n][0]>='a'&& b[n][0]<='z'){
			b[n][0]-=32;
		}
		if(i>0)
			if(b[n][i]>='A'&&b[n][i]<='Z'){
				b[n][i]+=32;
			}
		
	}

}
int main(){
	char c[100];
	int a,i;
	scanf("%d",&a);
	getchar();
	while(a--){
		int n=0;
		gets(c);
		char *stok=strtok(c," ");
		char b[100][100];
		while(stok!=NULL){
			strcpy(b[n],stok);
			chance(b,n);
			n++;
			stok=strtok(NULL," ");
			
	
		}
		printf("%s, ",strupr(b[n-1]));// strupr viet hoa 1 xau
		for(i=0;i<n-1;i++){
			printf("%c",b[i][0]);
			if(i!=n-1) printf(" ");
		}
		printf("\n");
	}
}
