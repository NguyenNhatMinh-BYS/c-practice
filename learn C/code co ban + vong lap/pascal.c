#include<stdio.h>
 #include<math.h>
  int pascal(int i, int k){ 
  if(k == 0 || k == i-1) 
  return 1; 
  
  return pascal(i-1, k-1) + pascal(i-1, k);
   } 
   
   int main(){ 
   int n,i,k;
    scanf("%d", &n); 
   
   for(i = 1; i <= n; i++){ 
   
   for( k = 0; k < i; k++){
   	
    printf("%d ", pascal(i, k));
	 } 
	 
	 printf("\n"); } }
