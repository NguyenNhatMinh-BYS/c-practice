#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<string.h>
void main(void) {
char c[]="babminh";
char b[]="aminh";
//int a=strcmp(b,c);//so sanh sau theo ascii
//printf("%d",a);
char *a=strstr(c,"i") ;//in tu chu so trong mang(chu dau tien tim thay)
printf("%s",a);
}

