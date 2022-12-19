#include<stdio.h>
#include<math.h>
int tn(long long n){
	int a[20],dem=0,ao=0,i;
	for(i=0;i<20;i++){
		a[i]=n%10;
		if(a[i]%2==0) ao++;
		n/=10;
		dem++;
		if(n==0) break;
	}
	if(dem%2!=0&&ao==0) return 1;
	else return 0;
}

int main(){
	int t,k;
	scanf ("%d",&t);
	long long c;
	for( k=0;k<t;k++){
		scanf ("%lld",&c);
		if(tn(c)==1) printf ("YES\n");
		else printf ("NO\n");
	}
	return 0;
}
