#include<stdio.h>



int check(int a[],int s){
	int i ;
	long long ar[s];
	for(i=0;i<s;i++){
	ar[i]=(long long)a[i]*a[i];}
	for(i=s-1;i>=2;i--){
	 int  l=0,r=i-1;
	 while(r>=l){
	 	if(ar[l]+ar[r]==ar[i]) return 1;
	  else if( ar[r]+ar[l]<ar[i]) ++l;
	 	 else --r;
	 }
	 
	}
	return 0;
}



int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int s,i,j;
		scanf("%d",&s);
		int a[s];
		for(i=0;i<s;i++){
		
			scanf("%d",&a[i]);
			
		}
		for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(a[i]>a[j]){
				int tmp =a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		}
	
		if(check(a,s)) printf("YES\n");
		else   printf("NO\n");
	}
}
