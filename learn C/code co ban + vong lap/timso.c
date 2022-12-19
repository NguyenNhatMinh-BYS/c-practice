
#include <stdio.h>
int main() {

int a;
printf("nhap so can tim: ");
scanf("%d",&a);
if(a>0){
	if(a%2==0){
		printf("so can tim la so chan duong.");
	}
	else{
		printf("so can tim la so le duong.");	
	}
}
else if(a<0){
	if(a%2==0){
		printf("so can tim la so chan am.");
	}
	else{
		printf("so can tim la so le am.");	
	}
}
else{
	printf("so can tim = 0.");
}
}
