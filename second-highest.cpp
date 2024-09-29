#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
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
	printf("The second highest number is: %d",a[i-2]);
}