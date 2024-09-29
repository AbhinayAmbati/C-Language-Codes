#include<stdio.h>
int digits(int n)
{
	static int c=0;
	if(n>0)
	{
		int r=n%10;
		c++;
		return digits(n/10);
	}
	return c;
}
int main()
{
	int n;
	scanf("%d",&n);
	int results=digits(n);
	
	printf("%d",results);
}
