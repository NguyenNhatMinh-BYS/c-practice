#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
//	int *pt=arr;
//	printf("%p\n",arr);
//	printf("%p\n",pt);
//int i;
//for(pt;pt<=&arr[4];pt++){
//	
//	printf("%d ",*(pt));
//}
int *pt=NULL;
int a;
scanf("%d",&a);
	pt = &a;
	if(*pt==1){
		printf("YES\n");
	}
	pt = a;
	pt +=4;
	printf("%d",pt);
}
