#include<stdio.h>
#include<math.h>
int main(){
	int i,a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(a >0 && b>0&& c>0&& d>0&& e>0&& f>0){
	
	long long s= a*b+c*d+e*f, cp=sqrt(s);
	if(cp*cp!=s){
		printf("NO\n");
		return 0;
	}
	else{
		int h=a>b?a:b;
		int j=c>d?c:d;
		int k=e>f?e:f;
//		printf("%d %d %d %d",h,j,k,cp);
		if(h==j && j==k && k==cp){
			printf("YES\n");
			return 0;
		}
		int max1=h>j?h:j;
		int max=k>max1?k:max1;
		if(max==cp){
			
			if(max==h){
				if(c+e==cp||c+f==cp||d+e==cp||d+f==cp) printf("YES\n");
				return 0;
			}
			if(max==j){
					if(a+e==cp||a+f==cp||b+e==cp||b+f==cp) printf("YES\n");
					return 0;
			}
				if(max==k){
					if(a+c==cp||a+d==cp||b+c==cp||b+d==cp) printf("YES\n");
					return 0;
			}
			else {
			printf("NO\n");
			return 0;
			}
		}
		else{
			printf("NO\n");
			return 0;
		}
			
		
	}
}
}
