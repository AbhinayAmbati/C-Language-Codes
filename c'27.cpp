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
	int x,i;
	printf("Enter a number that you want to search ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("Element found at location %d",i);
			break;
		}
    }
	if(i==n)
	printf("Element not found");
    
	return 0;
}