#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	char a[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%s %s",&a[i],&b[i]);
	}
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(a[i]==b[i])
			c++;
		}
	}
	if(c==n)
	{
		printf("Equal");
	}
	else 
	printf("Not equal");
	return 0;
}