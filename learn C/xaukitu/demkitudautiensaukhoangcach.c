#include<stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	getchar();// chong troi ki tu
	while(a--){
		char c[201];
		gets(c);// nhapchu cai tinh ca khoang cach
		int b=1,i;
		for(i=0;i<(strlen(c)-1);i++){// dem so chu cai
			if(c[i]==' '&& c[i+1]!=' ') b++;
		}
		printf("%d\n",b);
	}
	return 0;
}
