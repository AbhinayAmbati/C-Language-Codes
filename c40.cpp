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
	int key;
	printf("Enter key element: ");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if(key==a[i])
		printf("The element was found at %d is %d",i+1,a[i]);
	}
}