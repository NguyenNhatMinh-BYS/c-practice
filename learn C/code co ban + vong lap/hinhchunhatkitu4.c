#include <stdio.h> 
int main(){
	int a,b,i,j,c,e,f;
	scanf("%d%d",&a,&b);
	c=64+b;
	f= c<(64+a)?c:(64+a);

	for(i=a;i>0;i--){
		e=1;
		
		if(i<=b){
		
		for(j=f;j<=(64+b);j++){
			e+=1;
			printf("%c",j);
		}
		j-=1;
		while(e<=b){
			e+=1;
			printf("%c",j);	
		}
		
		printf("\n\n");
		f-=1;
	}
	else{
		for(j=1;j<=b;j++){
			printf("%c",c);
		}
		printf("\n\n");
	}
	
		
	}


	}

