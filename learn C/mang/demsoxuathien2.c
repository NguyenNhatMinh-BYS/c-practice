#include<stdio.h>
#include<math.h>
int check(int e){
	int i,f=0;
	if(e<=1) return 0;
	for(i=2;i<sqrt(e);i++){
		if(e%i==0){
			f=1;
			break;
		}
	}
	if(f==0) return 1;
	else return 0;
}
int main(){
	int i,j,a,f,t,z;
	scanf("%d",&t);
	for(z=0;z<t;z++){
	f=0;
	scanf("%d",&a);
	int b[a],c[a],e[100],g[100];
	for(i=0;i<a;i++){
		// kiem tra so nguyen to.
			scanf("%d",&b[i]);
			c[i]=1;
	} 
	for(i=0;i<a;i++){
		int d=1;
		
		if(c[i]){
			for(j=(i+1);j<a;j++){
				if(b[i]==b[j]  ){
					d++;
					c[j]=0;
				}
				
			}
			e[f]=b[i];
				g[f]=d;
				f++;
		}
	}
	for(i=0;i<f;i++){
		for(j=i;j<f;j++){
			if (e[i]>e[j]){
				int h=e[j];
				e[j]=e[i];
				e[i]=h;
				h=g[j];
				g[j]=g[i];
				g[i]=h;				
			}
		}
	} 
	printf("Test %d:\n",z+1);
	for(i=0;i<f;i++){
		if(check(e[i])==1)
		printf("%d xuat hien %d lan \n",e[i],g[i]);
	}
}
}

