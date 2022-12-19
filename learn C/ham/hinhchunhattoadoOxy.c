#include<math.h>
int main(){
	int t ,a,b,c,d,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if((c-a)==(d-b)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	} 
} 
