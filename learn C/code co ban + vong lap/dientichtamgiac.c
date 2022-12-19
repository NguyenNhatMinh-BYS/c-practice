#include<stdio.h>
#include<math.h> 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double a[2], b[2],c[2];
		double canh1,canh2,canh3; 
		scanf("%lf %lf %lf %lf %lf %lf",&a[0],&a[1],&b[0],&b[1],&c[0],&c[1]);
		canh1= sqrt(pow(a[0]-b[0],2)+pow(a[1]-b[1],2));
		canh2= sqrt(pow(a[0]-c[0],2)+pow(a[1]-c[1],2));
		canh3= sqrt(pow(c[0]-b[0],2)+pow(c[1]-b[1],2));
		if(canh1+canh2>canh3&&canh1+canh3>canh2&&canh2+canh3>canh1){
			printf("%.2lf",sqrt((canh1+canh2+canh3)*(canh1+canh2-canh3)*(canh2+canh3-canh1)*(canh1-canh2+canh3))/4);
		}
		else{
			
		
		
			printf("INVALID");
	}
		printf("\n");
	}
}
