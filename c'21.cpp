#include<stdio.h>
int binsearch(int [],int ,int ,int);
int main()
{
	int a[100],n,i,key,result;
	printf("Enter how many elements");
	scanf("%d",&n);
	printf("Enter element");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter any element");
	scanf("%d",&key);
	result=binsearch(a,1,n,key);
	if(result==-1)
	printf("Element not found");
	else
	printf("Element found %d",result);
	return 0;
}
int binsearch(int a[],int low,int high,int key)
{
	if(low<=high)
	{
		int mid=(low+high)/2;
		if(a[mid]==key)
		return mid;
		else
		if(a[mid]>key)
		return binsearch(a,low,mid-1,key);
		else
		return binsearch(a,mid+1,high,key);
	}
	else
	return -1;
	
}