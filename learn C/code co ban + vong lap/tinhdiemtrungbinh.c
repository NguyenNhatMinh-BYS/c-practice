#include <stdio.h>
#define GIOI "xep loai gioi"
#define KHA "xep loai kha"
#define TRUNGBINH "xep loai trung binh"
#define YEU	 "xep loai yeu"

int main() {
	float a,b,c,sum;
	printf("nhap diem mon toan: ");
	scanf("%f",&a);
	printf("\nnhap diem mon ly: ");
	scanf("%f",&b);
	printf("\nnhap diem mon hoa: ");
	scanf("%f",&c);
	sum = (float)(a+b+c)/3;
	printf("diem trung binh : %.2f \n",sum);
	if(sum<4.0){
		printf(YEU);
	}
	else if(sum<6.5){
		printf(TRUNGBINH);
	}
	else if(sum < 8.0){
		printf(KHA);
	}
	else{
		printf(GIOI);
	}
	return 0;
}
