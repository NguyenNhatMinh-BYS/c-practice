#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int check(char b[]){
	int i;
	for(i=0;i<strlen(b);i++){
		if(isupper(b[i])){
			return 1;
		}
	}
	return 0;
}
int main(){
	char a[100] ;
	int e=0;
	gets(a);
	char *tok=strtok(a," ");
	while (tok!=NULL){

		
		
		if(check(tok)){
			printf("%s ",tok);
		}
		
		tok=strtok(NULL," ");
	}

}
