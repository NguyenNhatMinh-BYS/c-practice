#include<stdio.h> 
#include<math.h>
 int CheckSNT(int n) { 
 if(n<=1) return 0; else if(n<4) return 1; else{ int i; for(i=2;i<=sqrt(n);i++) { if(n%i==0) return 0; } } return 1; } int main() { int n; scanf("%d",&n); int i,j,a[n][n]; for(i=0;i<n;i++) { for(j=0;j<n;j++) { scanf("%d", &a[i][j]); } } int dem; int max=0; int b[n],k; for(i=0;i<n;i++) { dem=0; for(j=0;j<n;j++) { if(CheckSNT(a[i][j])==1) { dem++; } } if(dem>max) { max=dem; k=i; } } printf("%d\n", k+1); for(j=0;j<n;j++) { if(CheckSNT(a[k][j])==1) { printf("%d ", a[k][j]); } } }
