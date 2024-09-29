#include<stdio.h>
int main()
{
	int key,low=0,i,flag=0,mid,n;
	printf("Enter an array size");
	scanf("%d",&n);
	int a[n];
	int high=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a key value:");
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
	printf("no element found");
	return 0;
}