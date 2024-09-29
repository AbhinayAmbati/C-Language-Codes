#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
	for(i=1;i<n-j+1;i++)
	{
	printf(" ");
	}
	for(k=1;k<n-j+1;k++)
	{
		printf("*");
	}
	printf(" \n");
    }

	return 0;
}