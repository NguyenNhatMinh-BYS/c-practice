#include<stdio.h>
#include<string.h>
int main(){
	char c[100],d[100];
	gets(c);
	scanf("%s",d);
	char *token= strtok(c," ");// tac ki tu sau khi gap dau cách  
	while(token != NULL){
		if(strcmp(token,d)!=0){ // neu ki tu bang nhau tra ve 0 , neu ko bang tra ve 1 ->9
			printf("%s ",token);
		}
		token=strtok(NULL," ");
	}
	return 0; 
}
