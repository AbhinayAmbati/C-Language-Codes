#include<stdio.h>
int main()
{
	int low=0,mid,high;
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	high=n-1;
	mid=low+high/2;
	int key,flag=0;
	printf("Enter key element: ");
	scanf("%d",&key);
	while(low<high)
	{
		if(key==mid)
		{
			flag=1;
			break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
}