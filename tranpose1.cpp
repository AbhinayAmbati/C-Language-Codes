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
	int transpose[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			transpose[j][i]=a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",transpose[i][j]);
		}
		printf("\n");
	}
	
}