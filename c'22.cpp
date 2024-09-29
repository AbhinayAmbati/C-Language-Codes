#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("\nEnter how many elements");
	scanf("%d",&n);
	printf("\nEnter elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++)
	{
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	