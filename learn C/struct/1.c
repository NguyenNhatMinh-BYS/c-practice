#include<stdio.h>

struct sinhvien{
	char msv[20];
	char ten[50];
	char lop[20];
	int sotinh;
};

typedef struct sinhvien sv;
int main(){
//	struct sinhvien minh;
sv minh;
	scanf("%s",&minh.msv);
	getchar();
	printf("Ten:");
	gets(minh.ten);
	scanf("%s",&minh.lop);	
	scanf("%d",&minh.sotinh);
	printf("%s %s %s %d",minh.msv,minh.ten,minh.lop,minh.sotinh);
sv e=minh;
	printf(" %s %s %s %d",e.msv,e.ten,e.lop,e.sotinh);
	return 0;
}
