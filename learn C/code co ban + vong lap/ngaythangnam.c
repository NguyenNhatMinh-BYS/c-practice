#include<stdio.h>
int main(){
	int a, day,week,year;
	scanf("%d",&a);
	year = a/365;
	week = a%365/7;
	day = a%365%7;
	if(a<=1000){
		printf("%d %d %d",year,week,day);
	}
	
}
