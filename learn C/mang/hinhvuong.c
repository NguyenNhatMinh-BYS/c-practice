#include<stdio.h>
#include<math.h>
int main(){
	int a;
	scanf("%d",&a);
	int i,j,b=a*2-1,c=a,d=b-2,same;
	while(b>c-1){
	same=0;
	for(i=c;i>=a;i--){
	if(i!=1)		printf("%d",i);
	}
	while(d>same){
		printf("%d",a);
		same++;
	}
	if(d==-1) printf("1");
	
	
	for(i=a;i<=c;i++){
	if(i!=1)	printf("%d",i);
	}
	d-=2;
	b--;
	a--;
	
	printf("\n");
	
}
//printf("%d",a);
a+=2;
d=1;
while(b>0){
	
	same=0;
	for(i=c;i>=a;i--){
		printf("%d",i);
	}
	while(d>same){
		same++;
		printf("%d",a);
	}
	for(i=a;i<=c;i++){
		printf("%d",i);
	}
	printf("\n");
	d+=2;
	a++;
	b--;
}
} 
