#include<stdio.h>
void quickSort(int a[],int first,int last);
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void quickSort(int a[],int first,int last)
{
	if(first<last)
	{
		int pivot=a[first];
		int i=first+1;
		int j=last;
		int temp;
		while(i<=j)
		{
			while(i<=last &&  a[i]<pivot)
			i++;
			while(j>=first && a[j]>pivot)
			j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[first];
		a[first]=a[j];
		a[j]=temp;
		quickSort(a,first,j-1);
		quickSort(a,j+1,last);
	}
}
