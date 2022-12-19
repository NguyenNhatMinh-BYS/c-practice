#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[][100], int n){
	int j,i,b[100];
	for(i=0;i<n;i++){
		b[i]=1;
	}
	for(i=0;i<n;i++){
		
	
		
		if(b[i]){
			for(j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
				
					b[j]=0;
				}
			}
			printf("%s ",a[i]);
		}
	}
	
}


int main(){
	char c[100];
	gets(c);
	int n=0;
	char a[100][100];
	char *tok=strtok(c," ");
	while(tok!=NULL){
		strcpy(a[n],tok);
		strlwr(a[n]);
		n++;
		tok=strtok(NULL," ");
		
	}
	check(a,n);
	
} 
