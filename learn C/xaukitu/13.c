#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[][100], int n){
	int j,i,b[100],e,d[100],max=0;
	for(i=0;i<n;i++){
		b[i]=1;
	}
	for(i=0;i<n;i++){
		
		e=1;
		
		if(b[i]){
			for(j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					e++;
					b[j]=0;
				}
			}
			if(e>max){
				max=e;
				d[0]=a[i];
			}
			if(e==max && e>0){
				if(strcmp(a[i],d[0])<0){
					d[0]=a[i];
				}
			}
		}
	}
	printf("%s %d",d[0],max);
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
