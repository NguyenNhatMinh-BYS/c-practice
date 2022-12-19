#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int t;
	
	scanf("%d",&t);
	getchar();
	while(t--){
		char c[100];
		gets(c);
		int j,i;
		int f=strlen(c);
		for(i=0;i<f;i++){

			for(j=i+1;j<strlen(c);j++){
		
				if(c[i]>c[j]){
				
					char tmp;
					tmp=c[i];
					c[i]=c[j];
					c[j]=tmp;
					
				}
			}
		
		}
		for(i=0;i<strlen(c);i++){
			printf("%c",c[i]);
		}
		printf("\n");
	}
	
}
