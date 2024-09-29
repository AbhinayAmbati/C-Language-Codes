#include<stdio.h>
int sumOfDigit(int n);
int main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	int result=sumOfDigit(n);
	printf("%d",result);
	return 0;
}
int sumOfDigit(int n)
{
	static int sum=0;
	if(n>0)
	{
		int r=n%10;
		sum=sum+r;
		return sumOfDigit(n/10);
	}
	return sum;
}
