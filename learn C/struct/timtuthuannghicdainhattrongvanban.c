#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct dem{
char val[100];
int fre;
};

typedef struct dem dem;



int check(char tmp[]){
	int l=0,r=strlen(tmp)-1;
	while(l<r){
		if(tmp[l]!=tmp[r]) return 0;
		
		l++;r--;
	}
	return 1;
}

int sum( dem a[],int n,char tmp[]){
	int i;
	
	for(i=0;i<n;i++){
		if(strcmp(tmp,a[i].val)==0)
		
			return i;
		
	}
	return 1;
}

int main(){
	dem a[1001];
	int n=0;
	char tmp[100];

	while((scanf("%s",tmp))!=-1){
		
		if(check(tmp)){
		
			int k=sum(a,n,tmp);
			if(k==1){
				
				strcpy(a[n].val,tmp);
				
				a[n].fre=1;
				++n;
			}
			else{
			
				a[k].fre+=1;

		}
		}

}
	
	int i,len =0;
	for(i=0;i<n;i++){
		if(strlen(a[i].val)>len) len=strlen(a[i].val);
	}
		
	for(i=0;i<n;i++){
		if(strlen(a[i].val)==len) {
			printf("%s %d\n",a[i].val,a[i].fre);
		}
	}
	
	
	
	
}
	






