#include <stdio.h>
#include <stdbool.h>
int main(){
	int a,c;
	bool e = true;
	scanf("%d",&a);
	
	while(a>0){
		c=a%10;
		if(a%2==1){
			e = false;
			
			break;
		}
		a/=10;
			
	}
	if(e){
		printf("toan so chan");
	}
	else{
		printf("co chu so le");
	}
} 
