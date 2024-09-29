#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int a[x][y];
	if(x==y)
	{
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			scanf("%d %d",&a[i][j]);
		}
	}
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			printf("%d %d",&a[i][j]);
		}
		printf("\n");
	}
    }
	return 0;
}