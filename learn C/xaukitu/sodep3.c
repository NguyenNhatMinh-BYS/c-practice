#include<math.h>
#include  <stdio.h>
#include <string.h>
int main(){
	int a,i,j,z;
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++){
		char b[900];
		gets(b);
		int count=0,count1=0,e=0;
			for(j=0;j<strlen(b)-1;j++){
		
			if(	 b[j]!=b[strlen(b)-j-1]){
				count++;
			
			
			}
			e=(int)b[j]-48;
			for(z=2;z<sqrt(e);z++){
				if(e%z==0){
					count++;
				}
			}
			
		}
		
	
	if(count==0) printf("YES\n");
	if(count>0)  printf("NO\n");
	}
}

