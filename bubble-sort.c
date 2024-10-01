#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				int t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
