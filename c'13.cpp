#include<stdio.h>
int fib(int);
int main()
{
	int a=0,b=1,n;
	scanf("%d",&n);
	fib(n-2);
	printf("%d %d ",a,b);
	return 0;
}
int fib(int n)
{
	static int a=0,b=1,c;
	if(n>=1)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
		fib(n-1);
	}
}