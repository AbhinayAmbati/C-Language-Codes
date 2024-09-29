#include<stdio.h>
int fact(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int fac=fact(n);
	printf("%d",fac);
}
int fact(int n)
{
	if(n>0)
	{
		return n*fact(n-1);
	}
	return 1;
}