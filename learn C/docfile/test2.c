#include<stdio.h>

int main(){
//	int n;      // ghi vao file 
	FILE*f;
	f= fopen("E:\\Desktop\\test.txt","w+");
	if(f==NULL){
		printf("error\n");
		exit(1);
	}
	char n[100] ;	// doc tu file ra 
	fgets(n,100,f);
	printf("data: %s\n",n);
//	scanf("%d",&n);
//	fprintf(f,"%d",n);
	fclose(f);
}
