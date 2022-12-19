int main(){
	int a,b,i,j,c,d,e=0,f,h;
	scanf("%d",&a);
	scanf("%d",&b);
	c= 63;
	d=1;
	
	for(i=1;i<=a;i++){
		if(i>=b){
			for(j=1;j<=b;j++){
				printf("%c",c+b);
			}
			printf("\n\n");
		}
		else{
		
		for(j=d;j<=b;j++){
			f=c+j;
			printf("%c",f);
			e+=1;
		}
		
		while(e<b){
			e+=1;
			
			printf("%c",f);
		}
		d+=1;
		printf("\n\n");
		e=0;
	}
	}
}
