#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char c[1000];
int check(char c[]){
	int i,j,a[10];
	for(i=0;i<10;i++){
		a[i]=0;
	}
	for(i=0;i<strlen(c);i++){
		
		a[c[i]-'0']=1;
	}
	for(i=0;i<10;i++){
		if(a[i]==0) return 0;
	}
	return 1;
	
}
int main(){
	int i,j=0,t;
	scanf("%d",&t);
	getchar();
	while(t--){
		j=0;
		gets(c);
		for(i=0;i<strlen(c);i++){
			int k=c[i];
		
			if(k<=57 && k>=48){
				
				j+=1;
				
			}
			
			if(c[0]=='0'){
				printf("INVALID\n");
				j=1;
				break;
			}
		}
		
		if(j==strlen(c)){
		
		if(check(c)==1) printf("YES\n");
		if(check(c)==0) printf("NO\n");
	}
	else if(j!=1 && j != strlen(c) ) {
			printf("INVALID\n");
	}
	 
	}
}
