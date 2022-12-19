#include<stdio.h>
#include<string.h>

int check(char s1[],char s2[],char s12[],long dem){
	int len1=strlen(s1);
	int len3=len1*2,i,n1,n2;

	dem=0;
	char s1c[len1],s2c[len1],l[len3];
		strcpy(l,s12);
	
	strcpy(s1c,s1);
	strcpy(s2c,s2);
	while(1){
	
	n1=0,n2=0;
	for(i=0;i<len3;i++){
		if(i%2==0){
			l[i]=s2[n2];
			++n2;
		}
		if(i%2!=0){
		l[i]=s1[n1];
			++n1;
		}

		
	}
	

	for(i=0;i<len1;i++){
		s1[i]=l[i];
		s2[i]=l[len1 +i];
	}
	if( strcmp(l,s12)==0){
		
		return dem; 
	}
	if(strcmp(s1c,s1)==0 && strcmp(s2c,s2)==0){
		return 0;
	}
	dem++; 

}
	
}
int main(){
	long t,dem;
	char s1[300],s2[300],s12[300];
	do{
		scanf("%ld",&t);
		getchar();
		if(t==0) return 0;
		gets(s1);
		gets(s2);
		gets(s12);
		if(check(s1,s2,s12,dem)==0) 	printf("-1\n");
		else{
			printf("%ld\n",check(s1,s2,s12,dem));
		}
	}while(t!=0);
}
