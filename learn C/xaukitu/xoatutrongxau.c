#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int lower(char a[][200], int n ){
	int i;
	for(i=0;i<strlen(a[n]);i++){
		a[n][i]=tolower(a[n][i]);
	}
}
int main(){
	char c[200],e[200];
	int t,i,j=1;
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(c);
		
		char a[200][200],copy[200][200],m[200][200];
		int n=0;
		char *stok=strtok(c," ");
		while(stok!=NULL){
			strcpy(a[n],stok);
				strcpy(copy[n],stok);
			lower(a,n);
			n++;
			stok=strtok(NULL," ");
		}
//		printf("%s \n",a[0]);
		gets(e);
		int u=0;
		char *f=strtok(e," ");
		while(f!=NULL){
			strcpy(m[u],f);
				
			lower(m,u);
			
			u++;
			f=strtok(NULL," ");
		}
		printf("Test %d: ",j);
		for(i=0;i<n;i++){
			if(strcmp(a[i],m[0])!=0){
				printf("%s ",copy[i]);
			}
		}
		printf("\n");
		j++;
	}
}
