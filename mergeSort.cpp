#include<stdio.h>
void merge(int a[],int f,int m,int l)
{
	int i,j,k;
	int n1=m-f-1;
	int n2=l-m;
	int L[n1],R[n2];
	for(int i=0;i<n1;i++)
	{
		L[i]=a[f+1];
	}
	for(int j=0;j<n2;j++)
	{
		R[j]=a[m]
	}
}
void mergeSort(int a[],int first,int last)
{
	if(first<last)
	{
		int mid=first+(last-1)/2;
		mergeSort(a,first,m);
		mergeSort(a,m+1,last);
		merge(a,first,mid,last);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}