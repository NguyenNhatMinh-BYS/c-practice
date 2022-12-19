#include <stdio.h>
int main(){
int a,b,c,j;
	scanf("%d",&b);
	for(j=1;j<=b;j++){
		scanf("%d",&a);
		c=a%10;
//		printf("a:%d\n",a);
		if(a>0){
			while(a>9){
 			a/=10;
// 		printf("a:%d\n",a);
	 	}
		
			
		if(c==a){
				printf("YES\n");
		}
		else{
				printf("NO\n");
				
//				printf("c:%d\n",c);
		}
		
		}
		
		
	}
}
