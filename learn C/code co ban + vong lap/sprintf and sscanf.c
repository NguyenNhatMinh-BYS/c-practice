#include <stdio.h>
//hàm sprintf  va ham sscanf deu la dang chuoi str
int main(){
    char str[20];
	int n =10;
	float f=20.5;
	char s[10]="VN";
//	printf("result=%.2f",f);
	sprintf(str,"result=%d and char %.2f  ",n,f); // lay so ki tu lam khong gian sau do gan gia tri can in, can ham puts() de in ra man hinh. 
	puts(str);
}  
//ham sscanf
int main(){
	char i[]="hello tron Minh 19";
	char m[100];
	char n[100];
	char h[100];
	int year;
	sscanf(i,"%s %s %s %d",m,n,h,&year);// gan tung phan tu cua i vao %s %d sau do gan vao bien m n h year
	printf("%s toi chinh la %s va nam nay %s tuoi %d ! ",m,h,n,year);// in ra theo thu tu vau gan
}
