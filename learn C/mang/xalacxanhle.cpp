#include<iostream>
using namespace std;
int main(){
	int D;
	cin>>D;

//	n�m nhu?n l� n�m chia h?t cho 400 ho?c chia h?t cho 4 m� kh�ng chia h?t cho 100
if( D%400==0||(D%4==0 && D%100!=0)){
	cout<<"thang 2 co 29 ngay";
} 
else{
	cout<<"thang 2 co 28 ngay";
}

	return 0;
}

