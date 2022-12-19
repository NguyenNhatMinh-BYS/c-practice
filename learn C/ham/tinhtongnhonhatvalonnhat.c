#include<stdio.h> 
long long max(long long b){
	long long arr[100],i=0;
	while(b>0){
	
	arr[i]=b%10;
	if(arr[i]==5){
		arr[i]=6;
	}
	b=b/10;
	i++;
}
i--;
b=0;
while(i>=0){
	b=b*10+arr[i];
i--;
}

return b;	
	
}
long long min(long long b){
	long long arr[100],i=0;
	while(b>0){
	
	arr[i]=b%10;
	if(arr[i]==6){
		arr[i]=5;
	}
	b=b/10;
	i++;
}
i--;
b=0;
while(i>=0){
	b=b*10+arr[i];
i--;
}

return b;	
	
}

int main(){
	int t;
	long long b,c,a;
	scanf("%d",&t);
	if(t>0){
	
	while(t--){
		scanf("%lld",&b);
		scanf("%lld",&a);
		
		printf("%lld ",min(a) + min(b));
		printf("%lld ",max(a) + max(b));
		printf("\n");
		
		
	}
}
}
