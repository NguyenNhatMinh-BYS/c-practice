#include <stdio.h>
#include <math.h>
void songuyento(long a, long b){
	long i,j,e,d=0,f=0,g=0,n;
	for(i=a;i<=b;i++){
		n=0;
//		printf("a:%ld ",a);
			for(j=2;j<=sqrt(i);j++){
				
				if(i%j==0){
					
					n+=1;
					
				}
				
				
			}
//			printf("%ld ",n);
			if(n==0 ){
				n=i;
//				printf("N:%ld ",n);
			

	
					while (n>0){
						e=n%10;
						n=n/10;
						f+=1;
						if(e==2||e==3||e==5||e==7){
							d+=1;
						} 
					}
					if(f==d){

						g+=1;
					}
					d=0;
					f=0;
				}
			
		}
		printf("%ld\n",g);
			
	}

 
int main(){
	long  a,b,c,i;
	scanf("%ld",&c);
	for(i=1;i<=c;i++){
		scanf("%ld %ld",&a,&b);
		if(a>1&&b>a){
			
				songuyento(a,b);
			}
		}
	}

