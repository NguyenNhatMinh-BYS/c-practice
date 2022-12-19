
#include  <stdio.h>
#include <string.h>
int main(){
	int a,i,j;
	scanf("%d",&a);
	getchar();
	for(i=0;i<a;i++){
		char b[900];
		gets(b);
		int count=0,count1=0,e=0;
	
			
	
//		b[0]!=8||b[strlen(b)-1]!=8 ||
		
		
		for(j=0;j<strlen(b)-1;j++){
//			printf("%s",b[0]);
			if(	b[0]!='8'||b[strlen(b)-1]!='8' || b[j]!=b[strlen(b)-j-1]){
				count++;
//				printf("%d\n",j);
			}
			e=(int)b[j]-48;
			count1+=e;
		}
		e=(int)b[j]-48;
			count1+=e;
		if(count1%10!=0){
			count++;
		
		}
	
	if(count==0) printf("YES\n");
	if(count>0)  printf("NO\n");
	}
}

