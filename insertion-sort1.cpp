#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
		for(int k=0;k<n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}

}