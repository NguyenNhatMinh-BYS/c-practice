#include<stdio.h>
#include<string.h>
int main(){
	char c[100],cmp[100];
	gets(c);
	int i,j,k=1,b[100],d[100],o=0;
	for(i=0;i<strlen(c);i++){
		b[i]=1;
		
	}
	for(i=0;i<strlen(c);i++){
		k=1;
//			printf("%d",strlen(c));
		if(b[i]){
			
			for(j=i+1;j<strlen(c);j++){
				if(c[i]==c[j]){
					b[j]=0;
					k++;
					
				}
			}
			cmp[o]=c[i];
			d[o]=k;
			o++;
			
		}
	
	}
	for(i=0;i<o;i++){
		b[i]=1;
		
	}
	for(i=0;i<o;i++){
		if(b[i]){
		
		for(j=i+1;j<o;j++){
			if(cmp[i]=='(' && cmp[j]==')' && d[i]==d[j]){
				b[j]=0;
				continue;
			}
			else if(cmp[i]=='[' && cmp[j]==']' && d[i]==d[j] ){
					b[j]=0;
					continue;
			}
			else if(cmp[i]=='{' && cmp[j]=='}' && d[i]==d[j] ){
					b[j]=0;
					continue;
			}
			else if( (int)cmp[i]== 34 && d[i]%2==0 ){
					b[j]=0;
					continue;
			}
			else if( (int)cmp[i]==39 && d[i]%2==0){
					b[j]=0;
					continue;
			}
			else {
				printf("0");
				return 0;
			}
		}
	}
	}
	printf("1");
	return 0;
}
