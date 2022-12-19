
	#include<stdio.h>
struct sinhvien{
	int stt;
	char name[1000];
	float mon1,mon2,mon3;
}; 
typedef struct sinhvien sinh;
 int themmoi(sinh sv[]){
 	int s,i;
 	
 	scanf("%d",&s);
 		
 	for(i=1;i<=s;i++){
 		getchar();
 		sv[i].stt=i;
 		gets(sv[i].name);
 		scanf("%f %f %f",&sv[i].mon1,&sv[i].mon2,&sv[i].mon3);
 				
	 }
	
	 
	 return s;
 }

int suadoi(sinh sv[]){
	int t;
	
	scanf("%d",&t);
	getchar();
		gets(sv[t].name);
 		scanf("%f %f %f",&sv[t].mon1,&sv[t].mon2,&sv[t].mon3);
 		
 		return t;
}
int thutu(sinh sv[],int d){
		int i;
	
		
		
	
	for(i=1;i<=d;i++){
		if(sv[i].mon1<sv[i].mon2 && sv[i].mon2<sv[i].mon3){
			printf("%d %s %.1f %.1f %.1f\n",sv[i].stt,sv[i].name,sv[i].mon1,sv[i].mon2,sv[i].mon3);
		}
	
	}
}

int main(){
	int a[1000];
	int b,n,d;
	sinh sv[1000];
	do{
		scanf("%d",&b);
		
		if(b==1){
		
				d=themmoi(sv);
		printf("%d\n",d);
		
				
		}
		if(b==2){
			
			printf("%d\n",suadoi(sv));
			
		}
		if(b==3){
		thutu(sv,d);
		return 0;	
		}
		
	}while(b!=3);
}
 

