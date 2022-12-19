#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
int kt(char a[]){
	
	return strlen(a);
}
int main(){
	char a[1005];
	char b[1005][1005];
	int c[10005]={0};
	int d[1005]={0};
	int k=0;
	while(	scanf("%s",&a)!=-1){
	//	scanf("%s",a);
	//	if(strcmp(a,"0")==0) break;
		strcpy(b[k],a);
		c[k]=kt(a);
		k++;
	}
	for(int i=0;i<k;i++){
		int dem=0;
		for(int j=i+1;j<k;j++){
			if(strcmp(b[i],b[j])==0) {
				dem++;
				c[j]=-1;
			}
		}
		d[i]=dem+1;
	}
	
	int max=0;
	for(int i=0;i<k;i++){
		if(c[i]>max) max = c[i];
	}
	for(int i=0;i<k;i++){
		if(c[i]==max) printf("%s %d %d\n",b[i],c[i],d[i]);
	} 
	return 0;
}
//int check(char a[][1009], int n){
//	int i,k=0;
//	for(i=0;i<n;i++){
//		if(strlen(a[i])>k){
//			k=strlen(a[i]);
//			
//		}
//	}
//	charmax(k,a,n);
//}
//
//int charmax(int k , char a[][1009],int n){
//	int i,c=0,t[1009];
//	char b[1009][1009];
//	for(i=0;i<n;i++){
//		if(strlen(a[i])==k){
//			t[c]=1;
//		strcpy(b[c],a[i]);
//			c++;
//		}
//	}
//	int j,stt[1009];
//	n=0; 
//	for(i=0;i<c;i++){
//		
//		if(t[i]){
//		int num=1;
//		stt[n]=num;
//		for(j=i+1;j<c;j++){
//			if(strcmp(b[i],b[j])==0){
//				stt[n]=++num;
//				
//				t[j]=0;
//			}
//		
//		} 
//		n++;
//	}
//		
//	}
//	n=0;
//	
//	for(i=0;i<c;i++){
//		if(t[i]){
//		
//		printf("%s %d  %d\n",b[i],k,stt[n]);
//		n++;
//		}
//	}
//	return 0;
//}
//
//int main(){
//	int n=0;
//	char a[1009][1009];
//	char c[1009];
//	gets(c);
//	char *stok=strtok(c," ");
//	while(stok!=NULL){
//		strcpy(a[n],stok);
//		
//		n++;
//		stok=strtok(NULL," ");
//	}
//	check(a,n);
//} 
