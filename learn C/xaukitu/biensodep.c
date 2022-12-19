#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int i;
int rise(char a[][20]){
	
	
	for(i=0;i<5;i++){
		if(i<2&& a[1][i+1]<=a[1][i]){
			return 0;
		}
		if(a[1][5]<=a[1][4]){
			return 0;
		}
	}
	return 1;
}
int same(char a[][20]){

	
	for(i=1;i<6;i++){
		if(i!=3)
		if(a[1][0] != a[1][i] ){
			return 0;
		}
	}
	return 1;
}
int culu(char a[][20]){
	
	for(i=0;i<6;i++){
		if(i<3){
			if(a[1][0]!=a[1][i]){
				return 0;
			}
		}
		if(a[1][5]!=a[1][4]){
			return 0;
		}
	}
	return 1;
}
int locphat(char a[][20]){
	
	for(i=0;i<6;i++){
		if(i!=3){
			if(a[1][i] != '8'&& a[1][i] != '6' ){
				return 0;
			}
		}
		
	}
	return 1;
}
int main(){
int t,i,j;
scanf("%d",&t);
getchar();
char c[20],a[60][20];
	while(t--){
		int n=0;
		gets(c);
		char *tok=strtok(c," ");
		while(tok!=NULL){
			strcpy(a[n],tok);
			n++;
			tok=strtok(NULL," ");
		}
		
		if(locphat(a)==1 ||rise(a)==1 ||culu(a)==1 ||same(a)==1 ){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
}
