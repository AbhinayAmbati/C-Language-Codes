#include<stdio.h>
void fib(int n);
int main()
{
	int n;
	scanf("%d",&n);
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	fib(n-2);
	return 0;
}
void fib(int n)
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