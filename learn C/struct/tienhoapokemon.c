#include<stdio.h>

struct tienhoa{
	char name[100];
	int cost,add;
};
typedef struct tienhoa lv;
int main(){
	
	int a,i,j;
	scanf("%d",&a);
	lv slot[a];
	for(i=0;i<a;i++){
		getchar();
		gets(slot[i].name);
		scanf("%d %d",&slot[i].cost,&slot[i].add);
		
	}
	int max=0,all=0,location;
	for(i=0;i<a;i++){
		j=0;
		int sum=slot[i].add;
		while(sum-slot[i].cost>=0){
			sum-=slot[i].cost;
			sum+=2;
			j++;
		}
		all+=j;
		if(j>max){
		max=j;
		location=i;	
		} 
	}
	printf("%d\n",all);
	printf("%s",slot[location].name);
}
