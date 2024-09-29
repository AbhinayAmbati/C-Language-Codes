#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>9)
	{
		int sum=0,r;
		while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		n=sum;
	}
	if(n==1)
	printf("Magic Number");
	else
	printf("Not Magic Number");
	return 0;
}