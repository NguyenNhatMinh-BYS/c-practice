#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	getchar();
	while(t--){
		int a,e=0;
		scanf("%d",&a);
		int i;
		for(i=2;i<=a;i++){
			
			if(a%i==0){
				
				if((i)%2==0){
					e++;
					
				}
			}
		}
		
		printf("%d\n",e);
	

}
}

