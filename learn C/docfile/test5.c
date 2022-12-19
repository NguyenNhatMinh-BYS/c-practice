#include<stdio.h>
#include<stdlib.h>
/// ghi vao file
int ghi(int n,int arr[]){

	n=3;
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
}
int ghivaofile(int n,int arr[]){
	FILE*f;
	int i;
	f=fopen("E:\\Desktop\\test.txt","w");
	for(i=0;i<3;i++){
		fprintf(f,"%d\n",arr[i]);
	}
	fclose(f);
}

// doc tu file ra
int  docfile(int n, int arr[]){
	FILE *write;
	
	write=fopen("E:\\Desktop\\test.txt","r");
	if(write==NULL){
		printf("><");
		return ;
	}
	
	int i=0;
	while(!feof(write)){
	
		fscanf(write,"%d",&arr[i]);
		i++;
	}
	n=i-1;
	fclose(write);
	return n;
}
void xuatmang(int n,int arr[]){
	int i=0;
		printf("n=%d\n",n);	
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}
int main(){
	int n,arr[100];
	ghi(n,arr);
	ghivaofile( n, arr);
	int a = docfile(n,arr);
	xuatmang(a,arr);
}
