#include<stdio.h>
int main()
{
	int n;
	printf("Enter a two digit number: ");
	scanf("%d",&n);
	int sum=0;
	int fact=1;
	int x=n;
	if(n>99)
	{
		printf("The number nota digit number!");
	}
	else
	{
		while(n>0)
		{
			int r=n%10;
			sum=sum+r;
			n=n/10;
		}
		n=x;
		while(n>0)
		{
			int r=n%10;
			fact=fact*r;
			n=n/10;
		}
	}
	int a=sum+fact;
	if(x==a)
	{
		printf("It is a magical number!");
	}
	else
	{
		printf("Not a magical number");
	}
}