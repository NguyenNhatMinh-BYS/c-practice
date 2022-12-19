#include <stdio.h>
#include<string.h>
int main(){
	int a;
	scanf("%d",&a);
	getchar();
	while(a--){
		int demchan=0,demle=0,i;
		char c[30];
		gets(c);
		int dem=strlen(c);
		if(dem%2==0){
			for(i=0;i<strlen(c)/2;i++){
				if(c[i]!=c[dem-1-i]){
					demchan++;
				}
			}
			if(demchan==1) printf("YES\n");
			else{
				printf("NO\n",demchan);
			}
		}
		if(dem%2!=0){
			for(i=0;i<strlen(c)/2;i++){
				if(c[i]!=c[dem-1-i]){
					demle++;
				}
			}
			if(demle<=1) printf("YES\n");
			else  printf("NO\n");
		}
		
	}
} 
