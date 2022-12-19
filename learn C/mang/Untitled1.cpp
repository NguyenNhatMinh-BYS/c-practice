#include <stdio.h>
int check(int xa,int ya,int xb,int yb,int xc,int yc){
	if((xa-xb)*(yb-yc)==(xb-xc)*(ya-yb)){
		return 1;
	}
	else return 0;
}
int main(){
	int a,i;
	int x[100000],y[100000];
	int done=0;
	scanf("%d",&a);
	for(i=0;i<(a-1);i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(i=0;i<(a-3);i++){
		if(check(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2])==0){
			done =1;
			break;
		}
	}
	if(done==0 ){
		printf("Yes");
	}
	else{
		printf("No");
	}
}
