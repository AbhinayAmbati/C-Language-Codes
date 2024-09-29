#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf(" ");
		for(int k=0;k<=i;k++)
		{
		for(int j=0;j<=k;j++)
		{
			printf("*");
		}
	   }
		printf("\n");
	}
}