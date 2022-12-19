#include <stdio.h>
 long long lcd(long long a, long long b) { 
 long long p = a*b;
  while(b != 0) { 
  long long tmp = a%b;
   a = b;
    b = tmp; 
	} 
	return p/a; } 
 
 int main() { 
 long long t, n,i;
  scanf("%lli", &t); 
  while(t--) { scanf("%lli", &n);
   long long uc = 1; 
   for( i = 2; i <= n; i++)
    { 
	uc = lcd(uc, i);
	 } printf("%lli \n", uc); } }
