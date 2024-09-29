#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter no.of rows: ");
	scanf("%d",&m);
	printf("Enter no.of columns: ");
	scanf("%d",&n);
	int a[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	        {
	        	scanf("%d",&a[i][j]);
	        }
    }
    int x,y;
	printf("Enter no.of rows: ");
	scanf("%d",&x);
	printf("Enter no.of columns: ");
	scanf("%d",&y);
	int b[x][y];
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
	        {
	        	scanf("%d",&b[i][j]);
	        }
    }
    int z[m][n];
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	        {
	        	z[i][j]=a[i][j]+b[i][j];
	        }
    }
    printf("The addition of the matrix is: ");
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	        {
	        	printf("%d ",z[i][j]);
	        }
	        printf("\n");
    }
    
}