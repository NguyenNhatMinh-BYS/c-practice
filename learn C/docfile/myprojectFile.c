#include<stdio.h>
#include<stdlib.h>

int ghi(char c[],int s,int n){

	int i;
	
	printf("Tong so lieu can them la: ");
	scanf("%d",&s);
	getchar();
	for(i=0;i<s;i++){
		printf("\nso lieu %d la: ",i+1);
		
		gets(c);
		if(n==1)
		 addfile(c);
		if(n==2){
			thaythe(c);
			n=1;
		}
		 
		
	}
	
}

int thaythe(char c[]){
		FILE *b=fopen("E:\\Desktop\\test.txt","w");
	if(b==NULL){
		printf("ERROR");
		return ;
	} 
	
	
		fprintf(b,"%s\n",c);
	
	fclose(b);
}

int addfile(char c[]){
	FILE *a=fopen("E:\\Desktop\\test.txt","a");
	if(a==NULL){
		printf("ERROR");
		return ;
	} 
	
	
		fprintf(a,"%s\n",c);
	
	fclose(a);
}

int main(){
	int n,s,loop=0;
	char c[100];
	
	do{
	

	do{
			printf("Chon tac vu:\n");
			printf("1.Them so lieu\n");
			printf("2.Xoa toan bo so lieu va thay the\n");
			printf("3.Thoat chuong trinh\n");
			scanf("%d",&n);
		
	}while(n>3&&n<1);
	
	if(n==1){
		ghi(c,s,n);
		
	}
	
	if(n==3){
		loop=1;
		printf("<------ SEE YOU AGAIN ------>");
	}
	if(n==2){
		ghi(c,s,n);
	}
}while(loop!=1);
}
