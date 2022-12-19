#include <stdio.h>
#include <math.h>
long stn(long n){
	long m=n,k,l=0;
	while(n>0){
		k=n%10;
		n/=10;
		l=l*10+k;
	}
	if(l==m){
		return 1;
	}
	else{
		return 0;
	}
}

long snt(long z){
	long e,w=1;

	
	
	for(e=2;e<=sqrt(z);e++){
		if(z%e==0){
		w=3	;
		break;
		}
	
	}

	if(w==3){
		return 0;
	}
	else{
		return 1;
	}
	
}





int main(){
	long  a,b,c,i,j,e;
	scanf("%ld",&a);
	if(a>0){
	
	for(i=1;i<=a;i++){
		scanf("%ld %ld",&c,&b);
		if(c>10&&b>c){
			for(j=c;j<=b;j++){
				e=0;
//				printf("%ld ",j);
				if(snt(j)==1 && stn(j)==1){
					e++;
					printf("%ld ",j);
				}
				if(e==10){
					printf("\n");
					e=0;
				}
			}
			printf("\n");
			printf("\n");
		}	
	}

}
}
	
