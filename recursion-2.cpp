#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int x=sum(n);
	printf("%d",x);
}
int sum(int n)
{
	if(n>1)
	{
		return n+sum(n-1);
	}
	return 1;
}