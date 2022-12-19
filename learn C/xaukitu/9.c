#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int check(char a[][50], int n){
	 int i,j;
	 for(i=0;i<n;i++){
	 	for(j=i+1;j<n;j++){
	 		if(strlen(a[i])>strlen(a[j])){
	 			char tmp[100];
	 			strcpy(tmp,a[i]);
	 			strcpy(a[i],a[j]);
	 			strcpy(a[j],tmp);
			 }
			 if(strlen(a[i])==strlen(a[j])){
	 			
			 
	 		if(strcmp(a[i],a[j])>0){
	 			char tmp[100];
	 			strcpy(tmp,a[i]);
	 			strcpy(a[i],a[j]);
	 			strcpy(a[j],tmp);
			 }
		}
		 }
		 
	 }
	
}
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
	
	char c[100],a[100][50];
	gets(c);
	int n=0,i;
	
	char *stok=strtok(c," ");
	while(stok!=NULL){
		strcpy(a[n],stok);
		n++;
		stok=strtok(NULL," ");
	}
	check(a,n);
	for(i=0;i<n;i++){
		printf("%s ",a[i]);
	}
	printf("\n");
}

}
