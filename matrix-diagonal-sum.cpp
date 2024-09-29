#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter no.of rows: ");
	scanf("%d",&m);
	printf("Enter no.of coloumns: ");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int sum1=0,sum2=0;
	for(int i=0;i<m;i++)
	{
		sum1=sum1+a[i][i];
		sum2=sum2+a[i][m-1-i];
	}
	printf("%d %d",sum1,sum2);
}