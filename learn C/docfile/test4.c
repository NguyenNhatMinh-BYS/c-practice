#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sinhvien{
	int ngay ;
	int thang ;
	int nam ;
};
typedef struct sinhvien sv;
int main(){
	//****** ghi duoi dang nhi phan*******// 
	
	FILE *s;
	s=fopen("E:\\Desktop\\sinhvientest.bin","wb");
	sv sv1;
	scanf("%d %d %d",&sv1.ngay,&sv1.thang,&sv1.nam);
	fwrite(&sv1,sizeof (struct sinhvien),1,s);
		fclose(s);
	//****** doc duoi dang nhi phan*******// 
	FILE *doc;
	doc=fopen("E:\\Desktop\\sinhvientest.bin","rb");
	fread(&sv1,sizeof(struct sinhvien),1,doc);
	printf("\n %d/%d/%d",sv1.ngay,sv1.thang,sv1.nam);
	fclose(doc);
	

//	return 0;

}

