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
	int z;
	scanf("%d",&z);
	int size[z];
	for(int i=0;i<z;i++)
	{
		size[i]=-1;
	}
	for(int i=0;i<n;i++)
	{
		int x=a[i]%z;
		size[x]=a[i];
	}
	for(int i=0;i<z;i++)
	{
		if(size[i]!=-1)
		{
		   printf("%d %d",i,size[i]);
		   printf("\n");
	    }
		else
		{
		    printf("%d Empty\n",i);
	    }
    }
}    