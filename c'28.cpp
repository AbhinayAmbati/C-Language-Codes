#include<stdio.h>
int main()
{
	int a[7],i,mid;
	int key,flag=0;
	int low=0,high=6;
	printf("enter 7 elements:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	while(low<high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			flag = 1;
			break;
		}
		else if(key<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
		if(flag==1)
		printf("element found");
		else
		printf("element not found");
			
}