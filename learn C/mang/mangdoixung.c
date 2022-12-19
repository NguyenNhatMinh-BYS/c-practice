#include<stdio.h>
int main(){
	int t,a,i,j,c,d;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		d=0;
		scanf("%d",&a);
		int b[a];
		for(j=0;j<a;j++){
			scanf("%d",&c);
			b[j]=c;
		}
		for(j=0;j<a;j++){
		if(b[j]!=b[a-1-j]){
			d=1;
			break;
		}
	}
	if(d==0){
		printf("YES\n");
	}
	if(d==1){
	printf("NO\n");
}
	}
}
