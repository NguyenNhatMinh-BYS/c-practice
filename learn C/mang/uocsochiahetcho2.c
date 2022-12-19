#include<stdio.h>

int main(){
	int a,c,n;
	
	scanf("%d",&a);
	
	
	while(a--){
		c=0;
		int j=1;
	scanf("%d",&n);	

	
	while(j<=n/j){
	if(n%j==0){
    if (n%2==0) c++;
	 if (n/j%2==0) c++;
	 
	  if (n/j==j && j%2==0) c--;
	   }
	    j++;
		}
	printf("%d\n",c);	
}
return 0;
}

