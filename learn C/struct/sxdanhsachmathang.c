#include<stdio.h>

struct ds {
	int stt;
	char name[100];
	char gr[100];
	float mua , ban ;
};

typedef struct ds ds;



	


int sx(ds slot[],int a){
	int i,j;
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(slot[j].ban-slot[j].mua>slot[i].ban-slot[i].mua){
				ds x =slot[i];
				slot[i]=slot[j];
				slot[j]=x;
			}
		}
	}
}

int main(){
 	int a,count=1,c=0,i;
	 scanf("%d",&a);
	 int b=a;
	 ds slot[a];
	 while(a--){
	 	getchar();
		slot[c].stt=count;
		gets(slot[c].name);
		gets(slot[c].gr);
		scanf("%f %f",&slot[c].mua,&slot[c].ban);
	 	
	 	count++;
	 	c++;
	 }
	 sx(slot,b);
	 for(i=0;i<b;i++)
	
	printf("%d %s %s %.2f \n",	slot[i].stt,slot[i].name,slot[i].gr,slot[i].ban-slot[i].mua);

}
