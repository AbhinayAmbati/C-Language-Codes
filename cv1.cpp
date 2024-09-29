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
	int low=0,high=n-1,key,mid,flag=0;
	scanf("%d",&key);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
		    flag=1;
		    break;
		}
		else if(a[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	if(flag==1)
	printf("Element found");
	else
	printf("Element not found");
	return 0;
}