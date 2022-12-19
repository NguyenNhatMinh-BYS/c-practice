#include <stdio.h>
#include <math.h>
int check(long  i){
	int j;
	if(i<2) return 0;
	for(j=2;j<=sqrt(i);j++){
		if(i%j==0) return 0;
		
	}
	return 1;
}
int sum(long i){
	long a=0;
	while(i>0){
		if(check(i%10)){
			a+=i%10;
		i=i/10;
		}
		else return 0;
	}
	return check(a);
}
int main(){
	int a;
	long first , end,i ,count=0;
	scanf("%d",&a);
	while(a--){
		count=0;
		scanf("%ld %ld",&first,&end);
		for(i=first;i<=end;i++){
			if( sum(i)==1 && check(i)==1){
				count++;
				
			}
		}
		printf("%ld\n",count);
	}
	return 0;
}
