int main(){
	int a,e=1,j;
	scanf("%d",&a);
	int i,c=2;
	for(i=1;i<=a;i++){
	for(j=2;j<=c;j+=2){
		printf("%d",j);
	}
	for(j=c-2;j>=1;j-=2){
		printf("%d",j);
	}
	
	c+=2;	
	printf("\n");
}
}
