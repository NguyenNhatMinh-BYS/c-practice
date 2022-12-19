#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char c[1002];
int main(){
	int a,i,j,k,chan,le;
	scanf("%d",&a);
	getchar();
	while(a--){
		chan=0,le=0,k=0;
		int chancuoi=0,lecuoi=0;
		gets(c);
		if(c[0]=='0') {
			printf("INVALID\n");
			continue;	
		}
		
		for(i=0;i<strlen(c);i++){
			
			if(c[i]=='2' || c[i]=='0'||c[i]=='4'||c[i]=='6'||c[i]=='8'){
				chan++;
			}
			else if(c[i]=='1' || c[i]=='3'||c[i]=='5'||c[i]=='7'||c[i]=='9'){
				le++;
			}
			else{
				k=1;
				break;
			}
			
		}
		if(k==1){
				printf("INVALID\n");
				continue;
		}
		
		if(le>chan && strlen(c)%2!=0){
			printf("YES\n");
		}
		else if(chan>le && strlen(c)%2==0){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}	
		}
	}

