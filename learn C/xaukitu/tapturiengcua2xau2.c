#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	int sum ;
	scanf("%d",&sum);
	getchar();
	while(sum--){
	
	char a[200];
	gets(a);
	char a1[200][200];
	
	char *tok=strtok(a," ");
	
	int m=0,n=0,i,j;
	
	while(tok!=NULL){
		strcpy(a1[n],tok);
		
		n++;
		tok=strtok(NULL," ");
	}
	char b[200];
	gets(b);
	char b1[200][200];
	char *tok2=strtok(b," ");
	while(tok2!=NULL){
		strcpy(b1[m],tok2);
		
		m++;
		tok2=strtok(NULL," ");
	}
	
		
		char e[200][200],p=0;
	int d=0;
	for(i=0;i<n;i++){
		d=0;
		for(j=0;j<m;j++){
				
			if(strcmp(a1[i],b1[j])==0){
				
				d=1;
				break;
			}
		}
		if(d==0) {
			strcpy(e[p],a1[i]);
			
			p++;
		}
	}
	for(i=0;i<p;i++){
	for(j=i+1;j<p;j++){
		if(strcmp(e[i],e[j])>0){
			char cmp[200];
			strcpy(cmp,e[i]);
			strcpy(e[i],e[j]);
			strcpy(e[j],cmp);
		}
	}	
	}
	int l[200];
	for(i=0;i<p;i++){
		l[i]=1; 
	}
	for(i=0;i<p;i++){
		if(l[i]){
			for(j=0;j<p;j++){
				if(strcmp(e[i],e[j])==0){
					
					l[j]=0;
				}
			}
			printf("%s ",e[i]); 
		}
	}
	printf("\n");
}
return 0;
}

















