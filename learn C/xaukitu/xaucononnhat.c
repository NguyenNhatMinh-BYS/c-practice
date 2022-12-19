#include<stdio.h>
#include<string.h>

int main(){
	char c[100001];
	gets(c);
	int a=0,lap;
	while(a<=strlen(c)-1){
	
	int i, sum=0;
	for(i=a;i<strlen(c);i++){
		if(  (int)c[i] > sum ){
			sum = (int)c[i];
		}  
	}
	
	for(i=a;i<strlen(c);i++){
		if ( (int)c[i] == sum){
			printf("%c",c[i]);
			lap=i;
		}
	}
	a=lap+1;
}
}
