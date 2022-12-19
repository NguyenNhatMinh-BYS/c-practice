#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
	
    char s[100];
   char a[100][100];
    int i,j, m=strlen(gets(s)),g=0;
    for(i=0;i<m;i++){
    	if(s[i]>='A' && s[i]<='Z'){
    		s[i]+=32;
		}
		if(s[i]==' '){
			g++;
		}
	}
	int n=0;
	char *token=strtok(s," ");
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token=strtok(NULL," ");
	}
	int b[n];
	for(i=0;i<n;i++){
		b[i]=1;
	}
	
	for(i=0;i<n;i++){
		int count=1;
		if(b[i]==1){
			for(j=i+1;j<n;j++){
				if(strcmp(a[i],a[j])==0){
					count++;
					b[j]=0;
				}
			}
				printf("%s %d\n",a[i],count);

		}
	
	}
	
}
