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
	int newarray[100],newsize=0,deletee;
	scanf("%d",&deletee);
	for(int i=0;i<n;i++)
	{
		if(a[i]!=deletee)
		{
			newarray[newsize]=a[i];
			newsize++;
		}
	}
	if(newsize==n)
	{
		printf("Element not found\n");
	}
	else
	{
		for(int i=0;i<newsize;i++)
		{
			printf("%d ",newarray[i]);
		}
	}
}
