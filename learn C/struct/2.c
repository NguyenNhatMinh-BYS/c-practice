#include<stdio.h>

struct sinhvien{
	char msv[20];
	char ten[50];
	
};
typedef struct sinhvien SV ;

void nhap(SV *a){
	scanf("%s",a->msv);
	getchar();
	gets(a->ten);
}

void in(SV a){
	printf("%s %s\n",a.msv,a.ten);
}
	int main(){
		
		int i,sum;
		printf("Nhap so luong sinh vien: ");
		scanf("%d",&sum);
		SV a[sum];
		for(i=0;i<sum;i++){
			nhap(&a[i]);
		}
		char s[100];
		printf("Nhap msv sinh vien can kiem tra: ");
		scanf("%s",s);
		for(i=0;i<sum;i++){
			if(strcmp(s,a[i].msv)==0){
				in(a[i]);
				
			}
		}
		
	}
