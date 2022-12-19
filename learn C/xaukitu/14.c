#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[][100], int n,char nhap[]){
	int j;
	
		
	
		
	
			for(j=0;j<n;j++){
				if(strcmp(nhap,a[j])!=0){
				printf("%s ",a[j]);
					
				}
			
				
			}
			
		
	
	
}


int main(){
	char c[100],nhap[50];
	
	gets(c);
	scanf("%s",nhap);
	
	int n=0;
	char a[100][100];
	char *tok=strtok(c," ");
	while(tok!=NULL){
		strcpy(a[n],tok);
		strlwr(a[n]);
		n++;
		tok=strtok(NULL," ");
		
	}
	check(a,n,nhap);
	
} 
