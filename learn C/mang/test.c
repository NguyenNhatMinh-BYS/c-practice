#include<stdio.h>
void main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	int a[m],i,j,b[n+1];
	for(i=1;i<=n;i++)
		b[i]=0;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		for(j=a[i]-k;j<=a[i]+k;j++)
			b[j]=1;
	}
	int dem=0;
	for(i=1;i<=n;i++)
	{
		if(b[i]==0)
		{
			dem++;
			for(j=i;j<=i+2*k;j++)
				b[j]=1;
		}
	}
	printf("%d",dem);	
}
