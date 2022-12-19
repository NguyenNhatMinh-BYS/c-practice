#include <stdio.h>
int Sum(int b){
	int c=b,d,e=0;
	
		
		while(c>0){
			d=c%10;
			c/=10;
			e=e+d;
		}
	
	if(e%10==0){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

int main(){
	int a,i,b;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d",&b);
		Sum(b);
	}

}
	
	
	
	
		

