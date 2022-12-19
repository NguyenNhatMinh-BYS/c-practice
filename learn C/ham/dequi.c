#include <stdio.h>
#include <math.h>
int Reverse(int n,int d){
	
	int e, i=n%10;
	e=n/10;
	while(e>0){
		d=e%10;
		e/=10;
		i=i*10+ d;
		
	}
	return i;

}


int main(){
	int a,d;
	scanf("%d",&a);
	printf("%d",Reverse(a,d));
}
