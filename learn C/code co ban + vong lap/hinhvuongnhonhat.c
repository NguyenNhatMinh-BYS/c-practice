#include<stdio.h>
#include<math.h>
int main(){
	int x1,x2,x3,x4,y1,y2,y3,y4,sum;
	scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int Xmax, Xmin, Ymin,Ymax;
	Xmax= x4>x2?x4:x2;
	Xmin= x1>x3?x3:x1;
	Ymin= y3<y1?y3:y1;
	Ymax=y4>y2?y4:y2;
	int X= Xmax-Xmin,Y=Ymax-Ymin;
	if(X>Y) printf("%d",X*X);
	else printf("%d",Y*Y);
	
} 
