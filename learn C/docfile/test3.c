#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	FILE *p;
	p=fopen("E:\\Desktop\\test.txt","r");
	if(p==NULL){
		printf("\ERROR");
		exit(0);
	}
//int i;
//fscanf(p,"%d",&i);
//printf("%d",i);
//	fclose(p);
char c[100];
fgets(c,100,p);
puts(c);
} 
