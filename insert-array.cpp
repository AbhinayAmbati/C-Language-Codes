#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int pos,val;
	scanf("%d",&pos);
	scanf("%d",&val);
	for(int i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=val;
	for(int i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}