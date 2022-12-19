#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	
	while(a--){
		long chan=0,le=0,x=0,e;
		char ch=' ';
		while(ch!='\n'){
			scanf("%d",&e);
			x++;
			if(e%2==0) chan++;
			if(e%2!=0) le++;
			ch=getchar();
		}
		if((x%2==0 && chan>le)||(x%2!=0 && le>chan)){
			printf("YES\n");
			continue;
		}
		else printf("NO\n");
	}
} 
