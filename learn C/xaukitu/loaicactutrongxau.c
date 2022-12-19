#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h> 
int main(){
	char c[100];
	gets(c);
	char a[100][100];
	int n=0,i,j;
	char *stok=strtok(c," ");
	while(stok!=NULL){
		strcpy(a[n],stok);
		n++;
		stok=strtok(NULL," ");
		
	}
	int b[n];
	for(i=0;i<n;i++){
		b[i]=1;
	}
	
	for(i=0;i<n;i++){
		if(b[i]){
		printf("%s ",a[i]);
		for(j=i;j<n;j++){
			if(strcmp(a[i],a[j])==0){
				b[j]=0;
			}
		}
	}
	}
}
