#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int trace=0;
	for(int i=0;i<m;i++)
	{
			trace=trace+a[i][i];
	}
	printf("%d",trace);
	
}