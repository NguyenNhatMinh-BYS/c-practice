#include  <stdio.h>
#include <string.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++){
		char b[900];
		gets(b);
		int count=0;
		for(j=0;j<strlen(b)-1;j++){
			if(b[j]%2!=0 || b[j]!=b[strlen(b)-1-j]){
				count++;
			}
		}
		if(count==0) printf("YES\n");
		else printf("NO\n");
	}
}
