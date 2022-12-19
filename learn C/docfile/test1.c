#include<stdio.h>
struct sinhvien{
 int msv[100];
 char ten[100];
 char khoa[100];
};
typedef struct sinhvien sv;

void nhap(sv s[],int i){
	printf("Nhap thong tin sinh vien:\n");
	printf("ma sinh vien:\n");
	scanf("%s",&s[i].msv);
	getchar();
	printf("ten sinh vien:\n");
	gets(s[i].ten);
	
	printf("khoa hoc:\n");
	gets(s[i].khoa);
}
void	ghi(FILE*s1,sv s[],int i){
	fprintf(s1,"\n%s\n",s[i].msv);
	fputs(s[i].ten,s1);
	fprintf(s1,"\n");	
	fputs(s[i].khoa,s1);
	
}
void doc(FILE *s1,sv s[],int i){
	int n;
	fscanf(s1,"%s",n);
	printf("\n gia tri cua msv la:%c ",n);
}


int main()
{
	int t,i;
	scanf("%d",&t);
	sv s[100];
	for(i=0;i<t;i++){
	
	
	FILE *s1=fopen("E:\\Desktop\\test.txt","a");
	nhap(s,i);
	ghi(s1,s,i);
	doc(s1,s,i);
	
	fclose(s1);
}
}

