
void fibonacci(long long a){
	long long i,f0=0,f=1,fn,c=0;
	for(i=0;i<a;i++){
		if(i<=1){
			fn=i;
			
		}
		else{
			fn=f0+f;
			f0=f;
			f=fn;
			if(fn==a){
				
				c=1;
				
			}
		}
		
	printf("%lld ",fn);
	}
	

}

int main(){
	long long a;
	scanf("%lld",&a);
	if(a>=0){
	
	fibonacci(a);
}
}
