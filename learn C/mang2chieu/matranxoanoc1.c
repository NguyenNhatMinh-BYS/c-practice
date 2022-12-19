#include<stdio.h>
int main(){
	int t,i,j,a[100][100];
	scanf("%d",&t);
	
	int h=t,c=t,d=0,count=1;
	if(t>0)
	
	while(d<=t/2){
		for(i=d;i<c;i++) a[d][i]=count++;
		for(i=d+1;i<h;i++) a[i][c-1]=count++;
		for(i=c-2;i>=d;i--) a[h-1][i]=count++;

		for(i=h-2;i>d;i--) a[i][d]=count++;
		d++;c--;h--;
	}
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

}
