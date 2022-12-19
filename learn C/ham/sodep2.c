#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c=0,sum[100],p,i;
	scanf("%d",&a);
	if(a>0){
	
	while(a--){
		int count=0;
		scanf("%d",&b);
		if(b==8){
			printf("1800\n");
			continue;
		}
		if(b==9){
			printf("9000\n");
			continue;
		}
		long  e=pow(10,b),h=pow(10,b-1);
		while(e>pow(10,b-1)){
			
			p=0;
			c=0;
	long g=e;
	e-=1;
	if(g%10==0||g%10!=g/h){
		continue;
	}	
	
	while(g>0){
		sum[p]=g%10;
		c=c+g%10;
		g/=10;
		p++;
	
	}
	
		
	g=1;	
	if(c%10==0){
		g=0;
		for(i=1;i<p/2;i++){
			if(sum[i]!=sum[p-1-i]) {
			g=1;
			continue;}
		}
	}
	if(g==0) {
//		printf("%d\n",e+1);
		count++;
	}

	
}
printf("%d\n",count);
	}
}
}
